#!/usr/bin/env python3
'''
Remove boilerplate greeting and trailing commentary from Juliet test-case files.

This script scans a directory of C/C++ source and header files, and for each file:
1. Strips everything before the first '/* TEMPLATE GENERATED TESTCASE FILE' marker, if present;
   otherwise finds the first '#include' directive, or defaults to start of file.
2. Strips everything after the last '#endif' directive, if present;
   otherwise finds the last standalone '}' line, or defaults to end of file.

Usage:
    python3 remove_extras.py /path/to/juliet/files
'''
import os
import argparse

# File extensions to process
EXTS = {'.c', '.cpp', '.h', '.hpp'}
# Markers
START_MARKER = '/* TEMPLATE GENERATED TESTCASE FILE'
END_DIRECTIVE = '#endif'

def clean_file(path):
    with open(path, 'r', encoding='utf-8', errors='ignore') as f:
        lines = f.readlines()

    # find start index
    start_idx = None
    for i, line in enumerate(lines):
        if START_MARKER in line:
            start_idx = i
            break
    if start_idx is None:
        # fallback to first include directive
        for i, line in enumerate(lines):
            if line.lstrip().startswith('#include'):
                start_idx = i
                break
    if start_idx is None:
        start_idx = 0

    # find end index
    end_idx = None
    for i, line in enumerate(lines):
        if line.strip().startswith(END_DIRECTIVE):
            end_idx = i
    if end_idx is None:
        # fallback to last closing brace
        for i in range(len(lines) - 1, -1, -1):
            if lines[i].strip() == '}':
                end_idx = i
                break
    if end_idx is None:
        end_idx = len(lines) - 1

    # trim lines
    new_lines = lines[start_idx:end_idx + 1]
    with open(path, 'w', encoding='utf-8') as f:
        f.writelines(new_lines)

    print(f'[cleaned] {path}: lines {start_idx + 1} to {end_idx + 1}')

def main():
    parser = argparse.ArgumentParser(description='Strip greetings and trailing commentary from Juliet files')
    parser.add_argument('root', help='Directory with Juliet files')
    args = parser.parse_args()

    for fname in sorted(os.listdir(args.root)):
        ext = os.path.splitext(fname)[1].lower()
        if ext in EXTS:
            clean_file(os.path.join(args.root, fname))

if __name__ == '__main__':
    main()
