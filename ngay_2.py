# Bài tập 1: Phép toán cơ bản

"""
Nhập vào hai số nguyên a, b.

In ra: a + b, a - b, a * b, a / b, a // b, a % b.
"""

# Trả lời cơ bản

"""
a = int(input("Nhập số nguyên a: "))
b = int(input("Nhập số nguyên b: "))

print(f"{a} + {b} = {a + b}")
print(f"{a} - {b} = {a - b}")
print(f"{a} * {b} = {a * b}")

if b != 0:
    print(f"{a} / {b} = {a / b:.2f}")   #Làm tròn 2 chữ số thập phân
    print(f"{a} // {b} = {a // b}")
    print(f"{a} % {b} = {a % b}")
else:
    print("Không thể chia cho 0")
"""

# Test 1

"""
a = int(input("Nhập số nguyên a: "))
b = int(input("Nhập số nguyên b: "))

pheptoan = {
    "+": a + b,
    "-": a - b,
    "*": a * b
}

if b != 0:
    pheptoan["/"] = round(a / b, 2)
    pheptoan["//"] = a // b
    pheptoan["%"] = a % b
else:
    pheptoan["/"] = "Không thể chia cho 0"
    pheptoan["//"] = "Không thể chia cho 0"
    pheptoan["%"] = "Không thể chia cho 0"

for k, v in pheptoan.items():
    print(f"{a} {k} {b} = {v}")
"""

# Test 2

"""
def tinh_toan(a, b):
    ketqua = {
        "a + b": a + b,
        "a - b": a - b,
        "a * b": a * b
    }
    if b != 0:
        ketqua["a / b"] = round(a / b, 2)
        ketqua["a // b"] = a // b
        ketqua["a % b"] = a % b
    else:
        ketqua["Chia"] = "Không thể chia cho 0"
    return ketqua

a = int(input("Nhập số nguyên a: "))
b = int(input("Nhập số nguyên b: "))

for k, v in tinh_toan(a, b).items():
    print(f"{k} = {v}")
"""

# Bài tập 2: So sánh số

"""
Yêu cầu
Nhập vào 2 số nguyên a, b.

In ra số nào lớn hơn.

Nếu bằng nhau thì in "Hai số bằng nhau".
"""

# Trả lời cơ bản

"""
a = int(input("Nhập số nguyên a: "))
b = int(input("Nhập số nguyên b: "))

if a > b:
    print(f"{a} lớn hơn {b}")
elif a < b:
    print(f"{b} lớn hơn {a}")
else:
    print("Hai số bằng nhau")
"""

# Nâng cấp 1

"""
a = int(input("Nhập số nguyên a: "))
b = int(input("Nhập số nguyên b: "))
c = int(input("Nhấp số nguyên c: "))

lon_nhat = max(a, b, c)
nho_nhat = min(a, b, c)

print(f"Số lớn nhất là: {lon_nhat}")
print(f"Số nhỏ nhất là: {nho_nhat}")
"""

"""
a = int(input("Nhập số nguyên a: "))
b = int(input("Nhập số nguyên b: "))
c = int(input("Nhấp số nguyên c: "))

lon_nhat = a
nho_nhat = a

if b > lon_nhat:
    lon_nhat = b
if c > lon_nhat:
    lon_nhat = c

if b < nho_nhat:
    nho_nhat = b
if c < nho_nhat:
    nho_nhat = c

print(f"Số lớn nhất là: {lon_nhat}")
print(f"Số nhỏ nhất là: {nho_nhat}")
"""

# Nâng cấp 2

"""
a = int(input("Nhập số nguyên a: "))
b = int(input("Nhập số nguyên b: "))
c = int(input("Nhập số nguyên c: "))

day_so = [a, b, c]
day_so.sort()

print("Số nhỏ nhất:", day_so[0])
print("Số ở giữa:", day_so[1])
print("Số lớn nhất:", day_so[2])
"""

"""
a = int(input("Nhập số nguyên a: "))
b = int(input("Nhập số nguyên b: "))
c = int(input("Nhấp số nguyên c: "))

lon_nhat = max(a, b, c)
nho_nhat = min(a, b, c)

if a != lon_nhat and a != nho_nhat:
    so_o_giua = a
elif b != lon_nhat and b != nho_nhat:
    so_o_giua = b
else:
    so_o_giua = c

print(f"Số lớn nhất là: {lon_nhat}")
print(f"Số ở giữa là: {so_o_giua}")
print(f"Số nhỏ nhất là: {nho_nhat}")
"""

"""
day_so = list(map(int, input("Nhập dãy số, cách nhau bời dấu cách: ").split()))

print(f"Số lớn nhất là: {max(day_so)}")
print(f"Số nhỏ nhất là: {min(day_so)}")
print(f"Giá trị trung bình là: {sum(day_so) / len(day_so):.2f}")
"""

# Nâng cấp 3


day_so = list(map(int, input("Nhập dãy số, cách nhau bởi dấu cách: ").split()))

print("Dãy tăng dần:", sorted(day_so))
print("Dãy giảm dần:", sorted(day_so, reverse=True))

