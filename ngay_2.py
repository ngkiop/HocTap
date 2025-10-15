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

a = int(input("Nhập số nguyên a: "))
b = int(input("Nhập số nguyên b: "))

if a > b:
    print(f"{a} lớn hơn {b}")
elif a < b:
    print(f"{b} lớn hơn {a}")
else:
    print("Hai số bằng nhau")


