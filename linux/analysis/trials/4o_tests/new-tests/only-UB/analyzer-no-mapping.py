import os
import argparse
import json
import re
from typing import Optional
from dotenv import load_dotenv, find_dotenv
from openai import AzureOpenAI

# Load environment variables
env_path = find_dotenv('.env')
if env_path:
    load_dotenv(env_path)

# Azure OpenAI client initialization
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


def analyze_code_for_ub(file_path: str) -> Optional[str]:
    with open(file_path, 'r') as f:
        source = f.read()

    system_prompt = (
        "You are an expert C/C++ static analyzer. Your job is to identify **Undefined Behavior (UB)** "
        "in a given function written in C or C++.\n\n"
        "For each UB found, provide:\n"
        "- The type of UB (e.g., null pointer dereference, use-after-free, out-of-bounds access, etc.)\n"
        "- A brief reason\n"
        "- Whether it is context dependent (i.e., can be avoided if caller checks)\n"
        "- A fix suggestion (if applicable)\n"
        "- Your confidence level (1–10)\n\n"
        "**IMPORTANT:**\n"
        "- Only report a UB if you are reasonably confident based on the code provided.\n"
        "- If the function appears safe, respond with 'UB Detected: No'.\n"
        "- Do NOT speculate or make assumptions about undefined context.\n\n"
        "**Output format:**\n"
        "-----\n"
        "Filename: <path>\n"
        "UB Detected: Yes/No\n"
        "UB Type: <if any>\n"
        "UB Reason: <description>\n"
        "Context Dependent: Yes/No\n"
        "Confidence: <1-10>\n"
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
        elif key_norm == 'ub_detected':
            data['ub_detected'] = value
        elif key_norm == 'ub_type':
            data['ub_type'] = value
        elif key_norm == 'ub_reason':
            data['ub_reason'] = value
        elif key_norm == 'context_dependent':
            data['context_dependent'] = value
        elif key_norm == 'confidence':
            try:
                data['confidence'] = int(value)
            except ValueError:
                data['confidence'] = value
        elif key_norm == 'fix_suggestion':
            data['fix_suggestion'] = value

    if data.get('ub_detected', '').lower() == 'yes':
        return data
    return None


def main():
    parser = argparse.ArgumentParser(description='LLM-based UB analyzer for C/C++ files. Outputs JSONL.')
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

    output_file = 'ub_results_no_mapping.jsonl'
    with open(output_file, 'a') as f:
        for fp in targets:
            print(f"Analyzing: {fp}")
            resp = analyze_code_for_ub(fp)
            if not resp:
                print(f"No response from LLM for {fp}")
                continue
            parsed = parse_llm_response(resp)
            if parsed:
                f.write(json.dumps(parsed) + '\n')
                print(f"Written result for {fp}")
            else:
                print(f"No UB issues detected in {fp}")

if __name__ == '__main__':
    main()
