# Bài tập in bảng cửu chương

"""
for i in range(2, 10):
    print(f"Bảng cửu chương {i}")
    for j in range(1, 11):
        print(f"{i} x {j} = {i * j}")
    print("-" * 20)
"""

"""
for i in range(2, 10):
    print(f"Bảng cửu chương {i}")
    for j in range(1, 11):
        print(f"{i} x {j} = {i * j}", end = "\t")
    print()
"""

"""
# In tiêu đề cho mỗi cột
for i in range(2, 10):
    print(f"Bảng {i}".ljust(13), end="")  # căn trái cho đều
print()  # xuống dòng sau khi in tiêu đề

# In nội dung bảng cửu chương
for j in range(1, 11):          # hàng (1 đến 10)
    for i in range(2, 10):      # cột (2 đến 9)
        print(f"{i} x {j} = {i*j}".ljust(13), end="")  # căn trái cho đều
    print()  # xuống dòng sau mỗi hàng
"""

# Nghịch một chút 

"""
# Simple pure-Python replacement for tabulate to avoid external dependency
# Tạo dữ liệu bảng cửu chương
headers = [f"Bảng {i}" for i in range(2, 10)]  # tiêu đề cột
table = []

for j in range(1, 11):  # hàng (1 đến 10)
    row = [f"{i} x {j} = {i*j}" for i in range(2, 10)]
    table.append(row)

def simple_grid(headers, table):
    # compute column widths
    cols = len(headers)
    col_widths = [len(h) for h in headers]
    for row in table:
        for idx, cell in enumerate(row):
            col_widths[idx] = max(col_widths[idx], len(cell))
    # horizontal separator like a simple grid
    sep_parts = ['-' * (w + 2) for w in col_widths]
    sep = '+' + '+'.join(sep_parts) + '+'
    # header line
    header_cells = [f" {headers[i].ljust(col_widths[i])} " for i in range(cols)]
    header_line = '|' + '|'.join(header_cells) + '|'
    # assemble rows
    lines = [sep, header_line, sep]
    for row in table:
        row_cells = [f" {row[i].ljust(col_widths[i])} " for i in range(cols)]
        lines.append('|' + '|'.join(row_cells) + '|')
    lines.append(sep)
    return '\n'.join(lines)

# In bảng với định dạng "grid" (sử dụng formatter nội bộ)
print(simple_grid(headers, table))
"""

# Bài tập tính tổng dãy số từ 1 đến n

# Cách 1: dùng for

"""
n = int(input("Nhập n: "))
tong = 0
for i in range(1, n + 1):
    tong += i
print("Tổng từ 1 đến", n, "là:", tong)
"""

# Cách 2: dùng while

"""
n = int(input("Nhập n: "))
tong = 0
i = 1
while i <= n:
    tong += i
    i += 1
print("Tổng từ 1 đến", n, "là:", tong)
"""

# Nâng cao độ khó của bài tập 2

# 1. Tổng số chẵn, lẻ 

n = int(input("Nhập n: "))
tong_chan = 0
tong_le = 0
for i in range(1, n + 1):
    if i % 2 == 0:
        tong_chan += i
    else:
        tong_le += i
print("Tổng số chẵn:", tong_chan)
print("Tong số lẻ:", tong_le)

