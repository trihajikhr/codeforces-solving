import os
root_folder = "800"

cpp_count = 0

for subdir, dirs, files in os.walk(root_folder):
    for file in files:
        if file.endswith(".cpp"):
            cpp_count += 1

print(f"Total C++ files (solved problems): {cpp_count}")