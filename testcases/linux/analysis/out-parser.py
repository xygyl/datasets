#!/usr/bin/env python3
import os
import re
import json
import argparse
import time
from collections import Counter
from dotenv import load_dotenv, find_dotenv
from openai import AzureOpenAI

# ———————— Azure OpenAI client init (same as analyzer.py) ————————
env_file = find_dotenv(".env")
load_dotenv(env_file)

client = AzureOpenAI(
    api_key=os.getenv("API_KEY"),
    api_version=os.getenv("API_VERSION"),
    azure_endpoint=os.getenv("AZURE_ENDPOINT")
)

# ———————— Regex-based normalization for fallback ————————
BUG_TYPE_RE = re.compile(r'^Bug Type:\s*(.+)$', re.MULTILINE)
SPLIT_PATTERN = re.compile(r'\s*(?:,|/| and |&|;|\band\b)\s*', flags=re.IGNORECASE)
PUNCTUATION_RE = re.compile(r'^["\*]*|[\."\*]*$')

# Local synonyms mapping
LOCAL_SYNONYMS = {
    'n/a': 'No Bug Found',
    'none': 'No Bug Found',
    'na': 'No Bug Found',
    'unknown': 'Unknown'
}


def extract_raw_bug(text: str) -> str:
    m = BUG_TYPE_RE.search(text)
    return m.group(1).strip() if m else 'Unknown'


def normalize_local(raw: str) -> list:
    """Split and normalize with regex only"""
    raw = raw.replace('**', '').strip()
    parts = SPLIT_PATTERN.split(raw)
    bugs = []
    for p in parts:
        if not p:
            continue
        clean = PUNCTUATION_RE.sub('', p).strip()
        low = clean.lower()
        if low in LOCAL_SYNONYMS:
            bugs.append(LOCAL_SYNONYMS[low])
        else:
            bugs.append(clean.title())
    return bugs or ['Unknown']

# ———————— AI-based classification ————————

def classify_with_ai(raw_entries: list) -> dict:
    """
    Given a list of unique raw bug strings, use Azure OpenAI to map each
    to its canonical bugs. Returns dict raw -> [canonical bug,...].
    """
    mapping = {}
    system_prompt = (
        "You are an assistant that extracts individual bug types from a raw string."
        " Normalize names (e.g., title-case) and split combined entries."
        " Respond with a JSON object where each key is the original string"
        " and its value is an array of canonical bug type strings."
    )
    # Batch prompts in chunks to reduce costs
    for chunk_start in range(0, len(raw_entries), 20):
        chunk = raw_entries[chunk_start:chunk_start+20]
        user_prompt = (
            "Extract canonical bug types for each of the following entries as JSON:\n" +
            json.dumps(chunk, ensure_ascii=False, indent=2)
        )
        try:
            # Correct AzureOpenAI call signature: use 'model' instead of 'engine'
            resp = client.chat.completions.create(
                model=os.getenv("AZURE_CHAT_MODEL", "gpt-4"),
                messages=[
                    {"role": "system", "content": system_prompt},
                    {"role": "user",   "content": user_prompt}
                ],
                temperature=0.0,
                max_tokens=1024
            )
            content = resp.choices[0].message.content
            data = json.loads(content)
            mapping.update(data)
        except Exception as e:
            print(f"AI classification chunk failed: {e}")
            # fallback to local normalization for this chunk
            for raw in chunk:
                mapping[raw] = normalize_local(raw)
        time.sleep(1)
    return mapping


def summarize_directory(dir_path: str, use_ai: bool=False) -> Counter:
    """
    Summarize bug counts, optionally using AI for classification.
    """
    raw_counts = Counter()
    # Phase 1: count raw entries
    for root, _, files in os.walk(dir_path):
        for fname in files:
            if not fname.lower().endswith('.txt'):
                continue
            path = os.path.join(root, fname)
            try:
                text = open(path, 'r', encoding='utf-8').read()
            except Exception as e:
                print(f"Warning: could not read {path}: {e}")
                continue
            raw = extract_raw_bug(text)
            raw_counts[raw] += 1

    # Determine mapping: AI vs local
    if use_ai:
        mapping = classify_with_ai(list(raw_counts.keys()))
    else:
        mapping = {raw: normalize_local(raw) for raw in raw_counts.keys()}

    # Phase 2: aggregate counts by normalized bugs
    counts = Counter()
    for raw, cnt in raw_counts.items():
        for bug in mapping.get(raw, ['Unknown']):
            counts[bug] += cnt
    return counts


def main():
    parser = argparse.ArgumentParser(
        description="Summarize bug type counts, with optional AI-based normalization."
    )
    parser.add_argument(
        "output_dir",
        help="Directory containing analyzer .txt outputs"
    )
    parser.add_argument(
        "--json", "-j", metavar="FILE",
        help="Write summary to JSON"
    )
    parser.add_argument(
        "--ai", action="store_true",
        help="Use Azure OpenAI to normalize bug types"
    )
    args = parser.parse_args()

    summary = summarize_directory(args.output_dir, use_ai=args.ai)
    sorted_summary = dict(summary.most_common())

    if args.json:
        with open(args.json, 'w', encoding='utf-8') as jf:
            json.dump(sorted_summary, jf, indent=2)
        print(f"Summary written to {args.json}")
    else:
        print("Bug Type Summary (sorted by frequency):")
        for bug, count in sorted_summary.items():
            print(f"  {bug}: {count}")

if __name__ == "__main__":
    main()


