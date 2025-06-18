import os
import argparse
import json
from dotenv import load_dotenv, find_dotenv
from openai import AzureOpenAI
from typing import Optional

# =====================
# CWE Mapping Table (30+ entries)
# =====================
cwe_mapping = {
    "buffer overflow": {"id": "CWE-120", "name": "Buffer Overflow", "category": "Memory"},
    "heap overflow": {"id": "CWE-122", "name": "Heap-based Buffer Overflow", "category": "Memory"},
    "stack overflow": {"id": "CWE-121", "name": "Stack-based Buffer Overflow", "category": "Memory"},
    "use-after-free": {"id": "CWE-416", "name": "Use After Free", "category": "Memory"},
    "double free": {"id": "CWE-415", "name": "Double Free", "category": "Memory"},
    "memory leak": {"id": "CWE-401", "name": "Memory Leak", "category": "Memory"},
    "null pointer dereference": {"id": "CWE-476", "name": "NULL Pointer Dereference", "category": "Pointer"},
    "uninitialized variable": {"id": "CWE-457", "name": "Use of Uninitialized Variable", "category": "Pointer"},
    "integer overflow": {"id": "CWE-190", "name": "Integer Overflow", "category": "Arithmetic"},
    "integer underflow": {"id": "CWE-191", "name": "Integer Underflow", "category": "Arithmetic"},
    "off-by-one": {"id": "CWE-193", "name": "Off-by-one Error", "category": "Memory"},
    "division by zero": {"id": "CWE-369", "name": "Divide By Zero", "category": "Arithmetic"},
    "format string": {"id": "CWE-134", "name": "Uncontrolled Format String", "category": "Input"},
    "race condition": {"id": "CWE-362", "name": "Race Condition", "category": "Concurrency"},
    "logic flaw": {"id": "CWE-840", "name": "Logic Error", "category": "Logic"},
    "type confusion": {"id": "CWE-843", "name": "Access of Resource Using Incompatible Type", "category": "Type"},
    "infinite loop": {"id": "CWE-835", "name": "Loop with Unreachable Exit Condition", "category": "Logic"},
    "deadlock": {"id": "CWE-833", "name": "Deadlock", "category": "Concurrency"},
    "null dereference": {"id": "CWE-476", "name": "NULL Pointer Dereference", "category": "Pointer"},
    "dangling pointer": {"id": "CWE-825", "name": "Expired Pointer Dereference", "category": "Pointer"},
    "incorrect calculation": {"id": "CWE-682", "name": "Incorrect Calculation", "category": "Logic"},
    "array index out of bounds": {"id": "CWE-129", "name": "Improper Validation of Array Index", "category": "Memory"},
    "improper input validation": {"id": "CWE-20", "name": "Improper Input Validation", "category": "Input"},
    "assertion failure": {"id": "CWE-617", "name": "Reachable Assertion", "category": "Logic"},
    "pointer arithmetic": {"id": "CWE-469", "name": "Use of Pointer Subtraction to Determine Size", "category": "Pointer"},
    "signed to unsigned conversion": {"id": "CWE-195", "name": "Signed to Unsigned Conversion", "category": "Arithmetic"},
    "incorrect check of return value": {"id": "CWE-252", "name": "Unchecked Return Value", "category": "Logic"},
    "undefined behavior": {"id": "CWE-758", "name": "Undefined Behavior", "category": "Semantics"},
    "memory corruption": {"id": "CWE-704", "name": "Incorrect Type Conversion or Cast", "category": "Memory"},
    "race condition on shared resource": {"id": "CWE-667", "name": "Improper Locking", "category": "Concurrency"}
}


def infer_bug_category(raw: str) -> str:
    """
    Fallback categorization when no direct CWE mapping is found.
    """
    raw = raw.lower()
    if any(word in raw for word in ["pointer", "null", "address", "dangling"]):
        return "Pointer"
    if any(word in raw for word in ["overflow", "underflow", "divide", "signed", "arithmetic"]):
        return "Arithmetic"
    if any(word in raw for word in ["buffer", "memory", "free", "heap", "stack", "index"]):
        return "Memory"
    if any(word in raw for word in ["race", "deadlock", "concurrent", "lock"]):
        return "Concurrency"
    if any(word in raw for word in ["type", "cast", "conversion"]):
        return "Type"
    if any(word in raw for word in ["input", "format"]):
        return "Input"
    return "Logic"


def normalize_bug_type(raw_type: str) -> dict:
    """
    Normalize a raw bug description to standardized bug_type, cwe_id, and category.
    """
    raw = raw_type.lower()
    for key, info in cwe_mapping.items():
        if key in raw:
            return {
                "bug_type": info["name"],
                "cwe_id": info["id"],
                "category": info["category"]
            }
    # fallback if no direct mapping found
    return {
        "bug_type": raw_type,
        "cwe_id": None,
        "category": infer_bug_category(raw_type)
    }


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
        "You are an expert C and C++ static analysis agent. Given a function in C or C++ extracted from "
        "the Linux kernel, perform two independent tasks:\n\n"
        "1. **Undefined Behavior (UB) Analysis**:\n"
        "   - Determine whether the function contains any undefined behavior as defined by the C/C++ standards.\n"
        "   - Common causes include: signed integer overflow, null or invalid pointer dereference, uninitialized variables, "
        "out-of-bounds array access, strict aliasing violations, misaligned access, or other undefined behaviors defined by the standard.\n"
        "   - If no UB is present, no explanation is needed.\n\n"
        "2. **Bug Analysis**:\n"
        "   - Determine whether the function contains any bugs of any kind, including logic errors, memory issues, concurrency problems, or others.\n"
        "   - Common bug types include: buffer overflows, use-after-free, memory leaks, null pointer dereference, "
        "integer overflows/underflows, off-by-one errors, and logic flaws.\n"
        "   - If no bugs are found, no explanation is needed.\n\n"
        "**IMPORTANT:**\n"
        "- Only report a bug or UB if you are reasonably confident based on the code provided.\n"
        "- If the function appears safe, respond with 'UB Detected: No' and 'Bug Detected: No'.\n"
        "- Do NOT speculate or make assumptions about undefined context.\n\n"
        "Output format:\n"
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
        elif key_norm == 'ub_reason':
            data['ub_reason'] = value
        elif key_norm == 'bug_detected':
            data['bug_detected'] = value
        elif key_norm == 'bug_type':
            norm = normalize_bug_type(value)
            data['bug_type'] = norm['bug_type']
            data['cwe_id'] = norm['cwe_id']
            data['category'] = norm['category']
        elif key_norm == 'bug_cwe':
            data['cwe_id'] = value if value.lower() != 'none' else data.get('cwe_id')
        elif key_norm == 'bug_reason':
            data['bug_reason'] = value
        elif key_norm == 'confidence':
            try:
                data['confidence'] = int(value)
            except ValueError:
                data['confidence'] = value
        elif key_norm == 'fix_suggestion':
            data['fix_suggestion'] = value

    # Only return if UB or Bug detected
    if data.get('ub_detected', '').lower() == 'yes' or data.get('bug_detected', '').lower() == 'yes':
        return data
    return None


def main():
    parser = argparse.ArgumentParser(description='LLM-based static analyzer for C/C++ files. Outputs JSONL.')
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

    output_file = 'results.jsonl'
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
                print(f"No issues detected in {fp}")


if __name__ == '__main__':
    main()
