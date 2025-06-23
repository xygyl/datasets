import os
import argparse
import json
import re
from dotenv import load_dotenv, find_dotenv
from openai import AzureOpenAI
from typing import Optional

# Load environment variables from .env file
env_path = find_dotenv('.env')
if env_path:
    load_dotenv(env_path)

# Initialize Azure OpenAI client
client = AzureOpenAI(
    api_key=os.getenv('API_KEY'),
    api_version=os.getenv('API_VERSION'),
    azure_endpoint=os.getenv('AZURE_ENDPOINT')
)


def get_bot_response(messages, model='gpt-4o', temperature=0) -> Optional[str]:
    try:
        resp = client.chat.completions.create(
            model=model,
            messages=messages,
            max_tokens=3000,
            temperature=temperature,
            top_p=1,
            frequency_penalty=0,
            presence_penalty=0
        )
        return resp.choices[0].message.content
    except Exception as e:
        print(f"Error during LLM call: {e}")
        return None


def analyze_code_for_bugs(file_path: str) -> Optional[str]:
    with open(file_path, 'r') as f:
        source = f.read()

    system_prompt = (
        "You are an expert C/C++ static analysis agent. Given a function in C or C++ extracted from the Linux kernel, "
        "perform **bug analysis** only:\n\n"
        "- Identify whether the function contains any bugs of any kind, including logic errors, memory issues, concurrency problems, etc.\n"
        "- Common bug types include: buffer overflows, use-after-free, memory leaks, null pointer dereference, "
        "integer overflows/underflows, off-by-one errors, and logic flaws.\n"
        "- If no bugs are found, respond with 'Bug Detected: No'.\n\n"
        "**IMPORTANT:**\n"
        "- Only report bugs you are reasonably confident about.\n"
        "- Do NOT include any undefined behavior analysis.\n\n"
        "Output format:\n"
        "-----\n"
        "Filename: <path>\n"
        "Bug Detected: Yes/No\n"
        "Bug Type: <if any>\n"
        "Bug Reason: <description>\n"
        "Confidence (1-10): <value>\n"
        "Fix Suggestion: <optional>\n"
        "-----"
    )
    messages = [
        {"role": "system", "content": system_prompt},
        {"role": "user", "content": f"Filename: {file_path}\n\n{source}"}
    ]
    return get_bot_response(messages)


def parse_llm_response(text: str) -> Optional[dict]:
    data = {}

    for line in text.splitlines():
        if ':' not in line:
            continue
        key, val = line.split(':', 1)
        key_norm = key.strip().lower().replace(' ', '_')
        value = val.strip()

        if key_norm == 'filename':
            data['filename'] = value
        elif key_norm == 'bug_detected':
            data['bug_detected'] = value
        elif key_norm == 'bug_type':
            data['bug_type'] = value
        elif key_norm == 'bug_reason':
            data['bug_reason'] = value
        elif key_norm == 'confidence':
            try:
                data['confidence'] = int(value)
            except ValueError:
                data['confidence'] = value
        elif key_norm == 'fix_suggestion':
            data['fix_suggestion'] = value

    # Only return if a bug was detected
    if data.get('ub_detected', '').lower() == 'yes' \
    or data.get('bug_detected', '').lower() == 'yes':
        return data
    return None


def main():
    parser = argparse.ArgumentParser(description='LLM-based bug analyzer for C/C++ files. Outputs JSONL.')
    parser.add_argument('input_path', help='Path to a C/C++ source file or directory.')
    args = parser.parse_args()

    path = os.path.abspath(args.input_path)
    targets = []
    if os.path.isdir(path):
        for root, _, files in os.walk(path):
            for name in files:
                if name.endswith(('.c', '.cpp', '.cc', '.cxx', '.h', '.hpp')):
                    targets.append(os.path.join(root, name))
    else:
        targets.append(path)

    output_file = 'results_no_CWE.jsonl'
    with open(output_file, 'a') as f:
        for fp in targets:
            print(f"Analyzing: {fp}")
            resp = analyze_code_for_bugs(fp)
            if not resp:
                print(f"No response from LLM for {fp}")
                continue
            parsed = parse_llm_response(resp)
            if parsed:
                f.write(json.dumps(parsed) + '\n')
                print(f"Written result for {fp}")
            else:
                print(f"No bugs detected in {fp}")

if __name__ == '__main__':
    main()
