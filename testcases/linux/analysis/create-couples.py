#!/usr/bin/env python3
"""
Script to pair .c source files in the "in" directory with their corresponding analysis files in the "out" directory.
For each pair, it creates a subdirectory under "couples" named after the source file (without extension),
then copies the .c file and its -output.txt file into that subdirectory.

Usage:
    Place this script in the base directory containing the "in" and "out" subdirectories,
    then run:
        python organize_couples.py
"""
import os
import shutil
import sys

def main():
    base_dir = os.getcwd()
    in_dir = os.path.join(base_dir, "in")
    out_dir = os.path.join(base_dir, "out")
    couples_dir = os.path.join(base_dir, "couples")

    # Verify input/output directories exist
    if not os.path.isdir(in_dir):
        print(f"Error: 'in' directory not found at {in_dir}")
        sys.exit(1)
    if not os.path.isdir(out_dir):
        print(f"Error: 'out' directory not found at {out_dir}")
        sys.exit(1)

    # Create the couples directory
    os.makedirs(couples_dir, exist_ok=True)

    # Iterate over all .c files in 'in'
    for filename in os.listdir(in_dir):
        if not filename.endswith('.c'):
            continue

        base_name = filename[:-2]  # strip '.c'
        src_path = os.path.join(in_dir, filename)
        analysis_name = f"{base_name}-output.txt"
        analysis_path = os.path.join(out_dir, analysis_name)

        if not os.path.isfile(analysis_path):
            print(f"Warning: No analysis file '{analysis_name}' for source '{filename}'")
            continue

        # Create subdirectory for this pair
        pair_dir = os.path.join(couples_dir, base_name)
        os.makedirs(pair_dir, exist_ok=True)

        # Copy files into the pair directory
        shutil.copy2(src_path, os.path.join(pair_dir, filename))
        shutil.copy2(analysis_path, os.path.join(pair_dir, analysis_name))
        print(f"Paired '{filename}' with '{analysis_name}' -> {pair_dir}")

    print("All done!")

if __name__ == '__main__':
    main()

