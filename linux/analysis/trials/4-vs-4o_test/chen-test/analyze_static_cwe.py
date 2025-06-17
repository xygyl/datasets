import os
import argparse
import json
from dotenv import load_dotenv, find_dotenv
from openai import AzureOpenAI

# Load environment variables from .env file
env_file = find_dotenv(".env")
load_dotenv(env_file)

# Initialize Azure OpenAI client
client = AzureOpenAI(
    api_key=os.getenv("API_KEY"),
    api_version=os.getenv("API_VERSION"),
    azure_endpoint=os.getenv("AZURE_ENDPOINT")
)

def get_bot_response(messages, model="gpt-4o", temperature=0):
    try:
        response = client.chat.completions.create(
            model=model,
            messages=messages,
            max_tokens=3000,
            temperature=temperature,
            top_p=1,
            frequency_penalty=0,
            presence_penalty=0
        )
        return response.choices[0].message.content
    except Exception as e:
        print(f"Error during LLM call: {e}")
        return None

def normalize_bug_type(raw_type: str) -> dict:
    raw = raw_type.lower()
    mapping = {
        "buffer overflow": ("CWE-120", "Buffer Overflow"),
        "heap overflow": ("CWE-122", "Heap-Based Buffer Overflow"),
        "stack overflow": ("CWE-121", "Stack-Based Buffer Overflow"),
        "off-by-one": ("CWE-193", "Off-by-one Error"),
        "use-after-free": ("CWE-416", "Use-After-Free"),
        "double free": ("CWE-415", "Double Free"),
        "memory leak": ("CWE-401", "Memory Leak"),
        "dangling pointer": ("CWE-825", "Expired Pointer Dereference"),
        "null pointer dereference": ("CWE-476", "Null Pointer Dereference"),
        "uninitialized variable": ("CWE-457", "Use of Uninitialized Variable"),
        "integer overflow": ("CWE-190", "Integer Overflow"),
        "integer underflow": ("CWE-191", "Integer Underflow"),
        "divide by zero": ("CWE-369", "Divide By Zero"),
        "signedness bug": ("CWE-195", "Signed to Unsigned Conversion Error"),
        "logic flaw": ("CWE-840", "Logic Error"),
        "infinite loop": ("CWE-835", "Loop with Unreachable Exit Condition"),
        "improper validation": ("CWE-20", "Improper Input Validation"),
        "improper bounds check": ("CWE-1284", "Improper Validation of Array Index"),
        "race condition": ("CWE-362", "Race Condition"),
        "deadlock": ("CWE-833", "Deadlock"),
        "resource leak": ("CWE-772", "Missing Release of Resource after Effective Lifetime"),
        "strcpy misuse": ("CWE-120", "Buffer Overflow"),
        "format string": ("CWE-134", "Uncontrolled Format String"),
        "unsafe function": ("CWE-676", "Use of Potentially Dangerous Function"),
    }

    for key, (cwe_id, cwe_name) in mapping.items():
        if key in raw:
            return {"cwe_id": cwe_id, "cwe_name": cwe_name}

    return {"cwe_id": None, "cwe_name": raw_type.strip()}

def analyze_code_for_bugs(file_path):
    with open(file_path, 'r') as f:
        source = f.read()

    system_prompt = (
        "You are an expert C and C++ static analysis agent. Given a function in C or C++ extracted from "
        "the Linux kernel, perform two independent tasks:\n\n"
        "1. **Undefined Behavior (UB) Analysis**:\n"
        "   - Determine whether the function contains any undefined behavior as defined by the C/C++ standards.\n\n"
        "2. **Bug Analysis**:\n"
        "   - Determine whether the function contains any bugs.\n\n"
        "**IMPORTANT:** Only report if reasonably confident.\n\n"
        " - When identifying UB or Bug, please mention **line number or key variable name** involved (if available).\n"
        " - If the bug relates to memory access, specify the pointer, array, or index variable used.\n"
        #" - Do NOT speculate on behavior that is not visible in the given code.\n"
        #" - Do NOT assume presence of helper functions unless defined in the code.\n"
        #" - Only report UB or Bug if it can be confirmed within the code snippet alone.\n\n"
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

def parse_llm_response(text: str):
    data = {}
    for line in text.splitlines():
        if ':' not in line:
            continue
        key, value = line.strip().split(':', 1)
        key = key.strip().lower().replace(" ", "_")
        value = value.strip()

        if key == "filename":
            data["filename"] = value
        elif key == "ub_detected":
            data["ub_detected"] = value
        elif key == "ub_reason":
            data["ub_reason"] = value
        elif key == "bug_detected":
            data["bug_detected"] = value
        elif key == "bug_type":
            norm = normalize_bug_type(value)
            data["bug_type"] = norm["cwe_name"]
            data["cwe_id"] = norm["cwe_id"]
        elif key == "bug_reason":
            data["bug_reason"] = value
        elif key == "bug_caused_by_ub":
            data["bug_caused_by_ub"] = value
        elif key == "confidence":
            try:
                data["confidence"] = int(value)
            except ValueError:
                data["confidence"] = value
        elif key == "fix_suggestion":
            data["fix_suggestion"] = value

    if data.get("ub_detected", "").lower() == "yes" or data.get("bug_detected", "").lower() == "yes":
        return data
    return None

def main():
    parser = argparse.ArgumentParser(description="LLM-based static analyzer for C/C++ files. Outputs JSONL.")
    parser.add_argument("input_path", help="Path to a C/C++ source file or directory.")
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

    output_path = "results.jsonl"
    with open(output_path, 'a') as out_file:
        for file_path in targets:
            print(f"Analyzing: {file_path}")
            analysis = analyze_code_for_bugs(file_path)
            if not analysis:
                print(f"No response from LLM for {file_path}")
                continue

            parsed = parse_llm_response(analysis)
            if parsed:
                out_file.write(json.dumps(parsed) + '\n')
                print(f"Written result for {file_path}")
            else:
                print(f"No UB or Bug detected in {file_path}, skipping.")

if __name__ == "__main__":
    main()
