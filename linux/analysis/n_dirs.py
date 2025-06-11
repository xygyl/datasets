#!/usr/bin/env python3
"""
split-script.py

Usage:
    python split-script.py -d <source_dir> -n <num_groups>

This will create subdirectories part_1 … part_<num_groups> inside <source_dir>,
and copy an equal number of files into each.
"""
import argparse
import os
import shutil
import sys

def parse_args():
    parser = argparse.ArgumentParser(
        description="Split files in a directory evenly into N subdirectories."
    )
    parser.add_argument(
        '-d', '--dir',
        required=True,
        help="Path to the source directory containing files."
    )
    parser.add_argument(
        '-n', '--number',
        type=int,
        required=True,
        help="Number of subdirectories to create."
    )
    return parser.parse_args()

def main():
    args = parse_args()
    src_dir = os.path.abspath(args.dir)
    num_groups = args.number

    if not os.path.isdir(src_dir):
        print(f"Error: '{src_dir}' is not a directory.", file=sys.stderr)
        sys.exit(1)

    # List only regular files (no directories)
    all_files = sorted(f for f in os.listdir(src_dir)
                       if os.path.isfile(os.path.join(src_dir, f)))

    total = len(all_files)
    if total == 0:
        print(f"No files found in '{src_dir}'.", file=sys.stderr)
        sys.exit(1)

    if total % num_groups != 0:
        print(
            f"Error: {total} files cannot be evenly split into {num_groups} groups "
            f"(remainder {total % num_groups}).",
            file=sys.stderr
        )
        sys.exit(1)

    per_group = total // num_groups

    # Distribute files
    for i in range(1, num_groups + 1):
        part_name = f"part_{i}"
        dest_dir = os.path.join(src_dir, part_name)
        os.makedirs(dest_dir, exist_ok=True)

        start = (i - 1) * per_group
        end = start + per_group
        for fname in all_files[start:end]:
            src_path = os.path.join(src_dir, fname)
            dst_path = os.path.join(dest_dir, fname)
            shutil.copy2(src_path, dst_path)

        print(f"Created '{part_name}' with {per_group} files.")

if __name__ == "__main__":
    main()

