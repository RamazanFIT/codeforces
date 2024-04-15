def compare_files_line_by_line(file1_path, file2_path):
    with open(file1_path, "r") as f1, open(file2_path, "r") as f2:
        lines1 = f1.readlines()
        lines2 = f2.readlines()
    
    if len(lines1) != len(lines2):
        return False

    for line1, line2 in zip(lines1, lines2):
        if line1.strip() != line2.strip():
            return False

    return True

file1_path = "sdt1.out"
file2_path = "sdt2.out"

if compare_files_line_by_line(file1_path, file2_path):
    print("Строки в файлах одинаковые")
else:
    print("Строки в файлах разные")
