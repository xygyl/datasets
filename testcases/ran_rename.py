#!/usr/bin/env python3
"""
Replace all occurrences of "good" and "bad" (case-insensitive) in C/C++ source/header files with random 5-character strings.

IMPORTANT: **DO NOT** name this script `random.py`. Name it `replace_good_bad_random.py` (or any name **not** colliding with standard library modules) to avoid import errors.

This script processes a specified directory (optional recursive) and for each file with extensions .c/.cpp/.h/.hpp:
  - Finds substrings "good" or "bad" anywhere (e.g., in identifiers like some_func_BaD or GOOD_func)
  - Replaces each occurrence (regardless of case) with a newly generated random 5-character alphanumeric string
  - Writes changes in-place and logs each file processed

Usage:
    mv random.py replace_good_bad_random.py
    python3 replace_good_bad_random.py /path/to/juliet/files
    python3 replace_good_bad_random.py /path/to/juliet -r  # recursive

Note:
- Each match gets a new random string.
- Case-insensitive: any casing of "good" or "bad" is replaced.
"""
import os
import sys
import argparse
import string
import re
import secrets

# Check that script name does not shadow stdlib modules
if os.path.basename(sys.argv[0]).startswith('random'):
    sys.exit("Error: script filename conflicts with stdlib. Rename to avoid 'random.py'.")

# File extensions to process
EXTENSIONS = {'.c', '.cpp', '.h', '.hpp'}
# Pattern to match substrings 'good' or 'bad' case-insensitively
PATTERN = re.compile(r'(good|bad)', re.IGNORECASE)


def random_str(length=5):
    """Generate a random alphanumeric string of given length using secrets.choice."""
    chars = string.ascii_letters + string.digits
    return ''.join(secrets.choice(chars) for _ in range(length))


def process_file(path):
    with open(path, 'r', encoding='utf-8', errors='ignore') as f:
        content = f.read()

    # Replace each occurrence with a random string
    replaced = PATTERN.sub(lambda m: random_str(), content)
    if replaced != content:
        with open(path, 'w', encoding='utf-8') as f:
            f.write(replaced)
        print(f"[modified] {path}")
    else:
        print(f"[unchanged] {path}")


def main():
    parser = argparse.ArgumentParser(
        description='Replace "good" and "bad" substrings (any case) with random strings.'
    )
    parser.add_argument('root', help='Directory containing C/C++ files')
    parser.add_argument('-r', '--recursive', action='store_true', help='Process subdirectories')
    args = parser.parse_args()

    if args.recursive:
        for dirpath, _, files in os.walk(args.root):
            for fname in files:
                ext = os.path.splitext(fname)[1].lower()
                if ext in EXTENSIONS:
                    process_file(os.path.join(dirpath, fname))
    else:
        for fname in os.listdir(args.root):
            ext = os.path.splitext(fname)[1].lower()
            if ext in EXTENSIONS:
                process_file(os.path.join(args.root, fname))

if __name__ == '__main__':
    main()
