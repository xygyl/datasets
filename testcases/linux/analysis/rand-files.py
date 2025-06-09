import argparse
import os
import random
import shutil
import sys

def parse_args():
    parser = argparse.ArgumentParser(
        description="Randomly select N files from a directory and copy them into 'rand-files'."
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
        help="Number of random files to select."
    )
    return parser.parse_args()

def main():
    args = parse_args()
    src_dir = args.dir
    n = args.number

    # Validate source directory
    if not os.path.isdir(src_dir):
        print(f"Error: '{src_dir}' is not a directory or does not exist.", file=sys.stderr)
        sys.exit(1)

    # Gather all regular files in src_dir
    all_files = [
        f for f in os.listdir(src_dir)
        if os.path.isfile(os.path.join(src_dir, f))
    ]

    if not all_files:
        print(f"No files found in '{src_dir}'.", file=sys.stderr)
        sys.exit(1)

    if n > len(all_files):
        print(
            f"Error: Requested {n} files but only {len(all_files)} available.",
            file=sys.stderr
        )
        sys.exit(1)

    # Randomly sample
    selected = random.sample(all_files, n)

    # Prepare destination
    dest_dir = "rand-files"
    os.makedirs(dest_dir, exist_ok=True)

    # Copy
    for filename in selected:
        src_path = os.path.join(src_dir, filename)
        dst_path = os.path.join(dest_dir, filename)
        shutil.copy2(src_path, dst_path)

    print(f"Copied {n} files from '{src_dir}' into '{dest_dir}'.")

if __name__ == "__main__":
    main()


