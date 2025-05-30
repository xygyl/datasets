import os
import json
import re
import argparse

from dotenv import load_dotenv, find_dotenv

env_file = find_dotenv(".env")
load_dotenv(env_file)

from openai import AzureOpenAI
client = AzureOpenAI(
    api_key=os.getenv("API_KEY"),
    api_version=os.getenv("API_VERSION"),
    azure_endpoint=os.getenv("AZURE_ENDPOINT")
)

def get_bot_response(messages, model="gpt-4", temperature=1):
    """Get a response from the chatbot."""
    while True:
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
            print(e)
            break


def save_json_report(report_data, report_file_path):
    """Save the JSON report to the file system."""
    try:
        with open(report_file_path, 'w') as report_file:
            json.dump(report_data, report_file, indent=4)
        print(f"JSON report has been saved to {report_file_path}")
    except json.JSONDecodeError as e:
        print(f"Failed to save JSON report: {e}")


def extract_json_report(bot_json_report):
    """Extract JSON report from the bot's response."""
    try:
        report_start = bot_json_report.find("{")
        report_end = bot_json_report.rfind("}") + 1
        return json.loads(bot_json_report[report_start:report_end])
    except json.JSONDecodeError as e:
        print(f"Failed to extract JSON report: {e}")
        return None


def extract_source_code(text):
    """Extract source code from the text response."""
    pattern = r'```c\n(.*?)\n```'
    match = re.search(pattern, text, re.DOTALL)
    if match:
        return match.group(1).strip()
    else:
        print("No code block found.")
        return ""


def analyze_code_for_bugs(file_path):
    messages = []
    system_message = (
        "You are a code analysis expert. Analyze the provided C/C++ source code "
        "for potential use-after-free bugs. Identify and describe the issues in detail."
    )
    messages.append({"role": "system", "content": system_message})

    with open(file_path, 'r') as file:
        source_code = file.read().strip()
        if source_code:
            messages.append({"role": "user", "content": source_code})
            bot_analysis = get_bot_response(messages)
            if bot_analysis:
                print(f"Bot Analysis for {file_path}:\n{bot_analysis}")
                return bot_analysis
    return None


def request_fix_suggestions(source_code):
    messages = []
    messages.append({"role": "system", "content": "You are a code expert. Review the following source code for bugs."})
    messages.append({"role": "user", "content": source_code})
    messages.append({"role": "user", "content": "Please suggest code changes to fix the identified use-after-free bugs."})

    bot_fix_suggestions = get_bot_response(messages)
    if bot_fix_suggestions:
        print(f"Bot Fix Suggestions:\n{bot_fix_suggestions}")
        return bot_fix_suggestions
    return None


def apply_fixes_to_code(source_code, fix_suggestions):
    messages = []
    messages.append({"role": "system", "content": "Based on the following fix suggestions, apply them to the source code:"})
    messages.append({"role": "assistant", "content": fix_suggestions})
    messages.append({"role": "user", "content": source_code})
    messages.append({"role": "user", "content": "Please apply the suggested fixes to the provided source code."})

    bot_fixed_code = get_bot_response(messages)
    if bot_fixed_code:
        print(f"Bot Fixed Code:\n{bot_fixed_code}")
        return extract_source_code(bot_fixed_code)
    return ""


def generate_json_report(bot_analysis, bot_fix_suggestions, bot_fixed_code):
    messages = []
    messages.append({"role": "system", "content": "Based on the previous analysis, suggestions, and fixed code:"})
    messages.append({"role": "assistant", "content": bot_analysis})
    messages.append({"role": "assistant", "content": bot_fix_suggestions})
    messages.append({"role": "assistant", "content": bot_fixed_code})
    messages.append({
        "role": "user",
        "content": (
            "Please generate a detailed JSON report based on the analysis, suggestions, and fixed code. "
            "Include file name, line number, error description, code snippets before and after the fix, "
            "and explanations for each fix."
        )
    })

    bot_json_report = get_bot_response(messages)
    if bot_json_report:
        print(f"Bot JSON Report:\n{bot_json_report}")
        return extract_json_report(bot_json_report)
    return None


def analyze_and_fix_code(file_path):
    if not os.path.exists(file_path):
        print(f"File {file_path} does not exist.")
        return

    bot_analysis = analyze_code_for_bugs(file_path)
    if not bot_analysis:
        return

    with open(file_path, 'r') as file:
        source_code = file.read().strip()

    bot_fix_suggestions = request_fix_suggestions(source_code)
    if not bot_fix_suggestions:
        return

    fixed_code = apply_fixes_to_code(source_code, bot_fix_suggestions)
    json_report = generate_json_report(bot_analysis, bot_fix_suggestions, fixed_code)
    if json_report:
        report_file_path = f"{os.path.splitext(file_path)[0]}_report.json"
        save_json_report(json_report, report_file_path)

    fixed_file_path = f"{os.path.splitext(file_path)[0]}_fixed{os.path.splitext(file_path)[1]}"
    with open(fixed_file_path, 'w') as fixed_file:
        fixed_file.write(fixed_code)
    print(f"Fixed code has been saved to {fixed_file_path}")


def main():
    parser = argparse.ArgumentParser(description="Analyze and fix C/C++ source files for use-after-free bugs using an LLM.")
    parser.add_argument("path", help="Path to a source file or directory containing source files.")
    args = parser.parse_args()

    abs_path = os.path.abspath(args.path)
    print(f"Using path: {abs_path}")

    if os.path.isdir(abs_path):
        for root, _, files in os.walk(abs_path):
            for fname in files:
                if fname.endswith(('.c', '.cpp', '.cc', '.cxx', '.h', '.hpp')):
                    file_path = os.path.join(root, fname)
                    print(f"\nProcessing file: {file_path}")
                    analyze_and_fix_code(file_path)
    else:
        analyze_and_fix_code(abs_path)


if __name__ == "__main__":
    main()
