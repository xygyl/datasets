#!/usr/bin/env python3
"""
Strip all C/C++ comments from source/header files, removing comment lines and their newlines.

This script processes a given directory (non-recursive by default) to:
  - Remove single-line comments starting with //
  - Remove multi-line comments enclosed in /* ... */
  - Remove lines that are comment-only, without leaving blank lines in their place
  - Preserve original blank lines

Usage:
    python3 remove_comments.py /path/to/juliet/files
    python3 remove_comments.py /path/to/juliet -r  # recursive

Caveat: Does not handle comment markers inside string literals.
"""
import os
import argparse

EXTENSIONS = {'.c', '.cpp', '.h', '.hpp'}


def remove_comments_from_lines(lines):
    """Process lines to strip comments and drop comment-only lines."""
    new_lines = []
    in_block = False
    for orig_line in lines:
        line = orig_line
        stripped_orig = orig_line.rstrip('\n')

        # Handle block comment continuation
        if in_block:
            if '*/' in line:
                # exit block comment
                line = line.split('*/', 1)[1]
                in_block = False
            else:
                # skip lines inside a block comment
                continue

        # Remove block comments within the line
        while '/*' in line:
            before, sep, after = line.partition('/*')
            if '*/' in after:
                after = after.split('*/', 1)[1]
                line = before + after
            else:
                line = before
                in_block = True
                break

        # Remove single-line comments
        if '//' in line:
            line = line.split('//', 1)[0]

        # Decide whether to keep or drop the line
        if line.strip() == '':
            # blank after comment removal
            if stripped_orig.strip() == '':
                # original was blank -> preserve
                new_lines.append('')
            # else original was comment-only -> drop
        else:
            # code remains -> strip trailing spaces
            new_lines.append(line.rstrip())

    # Rejoin and ensure newline at end
    return '\n'.join(new_lines) + '\n'


def process_file(path):
    with open(path, 'r', encoding='utf-8', errors='ignore') as f:
        lines = f.readlines()
    cleaned = remove_comments_from_lines(lines)
    with open(path, 'w', encoding='utf-8') as f:
        f.write(cleaned)
    print(f"[cleaned] {path}")


def main():
    parser = argparse.ArgumentParser(description='Remove comments and drop comment lines')
    parser.add_argument('root', help='Directory containing C/C++ files')
    parser.add_argument('-r', '--recursive', action='store_true', help='Process subdirectories')
    args = parser.parse_args()

    if args.recursive:
        for dirpath, _, files in os.walk(args.root):
            for fname in files:
                if os.path.splitext(fname)[1].lower() in EXTENSIONS:
                    process_file(os.path.join(dirpath, fname))
    else:
        for fname in os.listdir(args.root):
            if os.path.splitext(fname)[1].lower() in EXTENSIONS:
                process_file(os.path.join(args.root, fname))

if __name__ == '__main__':
    main()
