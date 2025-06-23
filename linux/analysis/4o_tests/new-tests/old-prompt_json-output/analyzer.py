import os
import argparse
import json
import re
from dotenv import load_dotenv, find_dotenv
from openai import AzureOpenAI

# Load environment variables
env_file = find_dotenv(".env")
load_dotenv(env_file)

# Initialize Azure OpenAI client
client = AzureOpenAI(
    api_key=os.getenv("API_KEY"),
    api_version=os.getenv("API_VERSION"),
    azure_endpoint=os.getenv("AZURE_ENDPOINT")
)


def get_bot_response(messages, model="gpt-4o", temperature=0):
    """Get a response from the chatbot."""
    try:
        response = client.chat.completions.create(
            model=model,
            messages=messages,
            max_tokens=3000,
            temperature=temperature,
            top_p=1,
            frequency_penalty=0,
            presence_penalty=0,
            stop=None
        )
        return response.choices[0].message.content
    except Exception as e:
        print(f"Error during LLM call: {e}")
        return None


def analyze_code_for_bugs(file_path):
    """Send source code to LLM using the static-analysis prompt and return the raw text."""
    with open(file_path, 'r') as f:
        source = f.read()

    system_prompt = (
        "You are an expert C and C++ static analysis agent. Given a function in C or C++ extracted from "
        "the Linux kernel, perform two independent tasks:\n\n"
        "1. **Undefined Behavior (UB) Analysis**:\n"
        "   - Determine whether the function contains any undefined behavior as defined by the C/C++ standards.\n"
        "   - Common causes include: signed integer overflow, null or invalid pointer dereference, uninitialized variables, "
        "out-of-bounds array access, strict aliasing violations, misaligned access, or other undefined behaviors defined by the standard.\n\n"
        "2. **Bug Analysis**:\n"
        "   - Determine whether the function contains any bugs of any kind, including logic errors, memory issues, concurrency problems, or others.\n"
        "   - Common bug types include: buffer overflows, use-after-free, memory leaks, null pointer dereference, "
        "integer overflows/underflows, off-by-one errors, and logic flaws.\n\n"
        "**IMPORTANT:**\n"
        "- Only report a bug or UB if you are reasonably confident based on the code provided.\n"
        "- If the function appears safe, respond with 'UB Detected: No' and 'Bug Detected: No'.\n"
        "- Do NOT speculate or make assumptions about undefined context.\n\n"
        "Output format exactly as below (use these fields):\n"
        "-----\n"
        "Filename: <path>\n"
        "UB Detected: Yes/No\n"
        "UB Reason: <description>\n"
        "Bug Detected: Yes/No\n"
        "Bug Type: <if any>\n"
        "Bug Reason: <description>\n"
        "Bug Caused by UB: Yes/No\n"
        "Confidence (1-10): <value>\n"
        "Fix Suggestion: <optional>\n"
        "-----"
    )
    messages = [
        {"role": "system", "content": system_prompt},
        {"role": "user", "content": f"Filename: {file_path}\n\n{source}"}
    ]

    return get_bot_response(messages)


def parse_llm_response(text: str) -> dict:
    """Parse the LLM's analysis text into a structured dict."""
    result = {}
    for line in text.splitlines():
        if ':' not in line:
            continue
        key, val = line.split(':', 1)
        key_norm = key.strip().lower().replace(' ', '_')
        value = val.strip()
        if key_norm == 'filename':
            result['filename'] = value
        elif key_norm == 'ub_detected':
            result['ub_detected'] = value
        elif key_norm == 'ub_reason':
            result['ub_reason'] = value
        elif key_norm == 'bug_detected':
            result['bug_detected'] = value
        elif key_norm == 'bug_type':
            result['bug_type'] = value
        elif key_norm == 'bug_reason':
            result['bug_reason'] = value
        elif key_norm == 'bug_caused_by_ub':
            result['bug_caused_by_ub'] = value
        elif key_norm == 'confidence':
            try:
                result['confidence'] = int(value)
            except ValueError:
                result['confidence'] = value
        elif key_norm == 'fix_suggestion':
            result['fix_suggestion'] = value
    return result


def main():
    parser = argparse.ArgumentParser(
        description="Analyze C/C++ files in a directory and write structured JSONL results to 'out/results.jsonl'."
    )
    parser.add_argument(
        "input_path",
        help="Path to a C/C++ source file or directory containing source files."
    )
    args = parser.parse_args()

    path = os.path.abspath(args.input_path)
    out_dir = os.path.join(os.getcwd(), 'out')
    os.makedirs(out_dir, exist_ok=True)
    output_file = os.path.join(out_dir, 'results.jsonl')

    # Remove existing JSONL to avoid duplicates
    if os.path.exists(output_file):
        os.remove(output_file)

    targets = []
    if os.path.isdir(path):
        for root, _, files in os.walk(path):
            for name in files:
                if name.endswith(('.c', '.cpp', '.cc', '.cxx', '.h', '.hpp')):
                    targets.append(os.path.join(root, name))
    else:
        targets.append(path)

    for file_path in targets:
        print(f"Analyzing: {file_path}")
        analysis = analyze_code_for_bugs(file_path)
        if not analysis:
            print(f"No analysis returned for: {file_path}")
            continue

        parsed = parse_llm_response(analysis)
        # Only write if either UB or Bug detected is Yes
        ub = parsed.get('ub_detected', '').lower() == 'yes'
        bug = parsed.get('bug_detected', '').lower() == 'yes'
        if ub or bug:
            with open(output_file, 'a') as f:
                f.write(json.dumps(parsed) + '\n')
            print(f"Results written to: {output_file}")
        else:
            print(f"Skipping {file_path}: neither UB nor Bug detected.")

if __name__ == "__main__":
    main()
