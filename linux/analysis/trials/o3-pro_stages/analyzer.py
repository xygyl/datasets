import os
import argparse
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

def get_bot_response(messages, model="o3-pro", temperature=0):
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
    """Send source code to LLM using the static‑analysis prompt."""
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


def should_write_output(analysis_text: str) -> bool:
    """
    Parses the LLM's response to see if either "UB Detected" or "Bug Detected" is "Yes".
    Returns True if at least one is "Yes"; otherwise False.
    """
    ub_line = None
    bug_line = None

    # Split into lines and look for the relevant fields
    for line in analysis_text.splitlines():
        line_stripped = line.strip()
        if line_stripped.startswith("UB Detected:"):
            ub_line = line_stripped
        elif line_stripped.startswith("Bug Detected:"):
            bug_line = line_stripped

    # If both lines are missing, skip writing
    if not ub_line and not bug_line:
        return False

    # Default values if a line is missing
    ub = ub_line.split(":", 1)[1].strip().lower() if ub_line else "no"
    bug = bug_line.split(":", 1)[1].strip().lower() if bug_line else "no"

    # Write output if either UB or Bug is "Yes"
    return (ub.lower() == "yes" or bug.lower() == "yes")


def main():
    parser = argparse.ArgumentParser(
        description="Analyze C/C++ files in a directory and write LLM results to 'out/*.txt' if UB or Bug is detected."
    )
    parser.add_argument(
        "input_path",
        help="Path to a C/C++ source file or directory containing source files."
    )
    args = parser.parse_args()

    path = os.path.abspath(args.input_path)
    out_dir = os.path.join(os.getcwd(), 'out')
    os.makedirs(out_dir, exist_ok=True)

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

        # Decide whether to write based on UB OR Bug being "Yes"
        if should_write_output(analysis):
            base = os.path.splitext(os.path.basename(file_path))[0]
            out_file = os.path.join(out_dir, f"{base}-output.txt")

            # If output already exists, skip
            if os.path.exists(out_file):
                print(f"Skipping {file_path}: output already exists at {out_file}")
                continue

            with open(out_file, 'w') as f:
                f.write(analysis)
            print(f"Results written to: {out_file}")
        else:
            print(f"Skipping {file_path}: neither UB nor Bug detected.")

if __name__ == "__main__":
    main()
