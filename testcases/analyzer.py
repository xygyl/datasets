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

def get_bot_response(messages, model="gpt-4", temperature=1):
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
    """Send source code to LLM for use-after-free analysis."""
    with open(file_path, 'r') as f:
        source = f.read()

    messages = [
        {"role": "system", "content": (
            "You are a code analysis expert. Analyze the provided C/C++ source code "
            "for potential use-after-free bugs. Identify and describe the issues in detail."
        )},
        {"role": "user", "content": source}
    ]

    return get_bot_response(messages)


def main():
    parser = argparse.ArgumentParser(
        description="Analyze C/C++ files in a directory and write LLM results to 'out/*.txt'."
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
        if analysis:
            base = os.path.splitext(os.path.basename(file_path))[0]
            out_file = os.path.join(out_dir, f"{base}-output.txt")
            with open(out_file, 'w') as f:
                f.write(analysis)
            print(f"Results written to: {out_file}")
        else:
            print(f"No analysis returned for: {file_path}")

if __name__ == "__main__":
    main()
