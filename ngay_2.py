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

"""
day_so = list(map(int, input("Nhập dãy số, cách nhau bởi dấu cách: ").split()))

print("Dãy tăng dần:", sorted(day_so))
print("Dãy giảm dần:", sorted(day_so, reverse=True))
"""

# Bài tập khác

"""
dai = float(input("Nhập chiều dài: "))
rong = float(input("Nhập chiều rộng: "))

chu_vi = (dai + rong) * 2
dien_tich = dai * rong

print(f"Chu vi: {chu_vi}")
print(f"Diện tích: {dien_tich}")
"""

"""
c = float(input("Nhập nhiệt độ (Celsius): "))
f = (c * 9/5) + 32

print(f"{c} độ C = {f} độ F")

f = float(input("Nhập nhiệt độ (Fahrenheit): "))
c = (f - 32) * 5/9

print(f"{f} độ F = {c:.2f} độ C")
"""

"""
ten = input("Nhập tên của tôi: ")
tuoi = int(input("Nhập tuổi của tôi: "))
print(f"Tên tôi là {ten}, tôi {tuoi} tuổi.")
"""

"""
toan = float(input("Điểm Toán: "))
ly = float(input("Điểm Lý: "))
hoa = float(input("Điểm Hoá: "))

print(f"Môn     | Điểm")
print("---------------")
print(f"Toán    | {toan}")
print(f"Lý      | {ly}")
print(f"Hoá     | {hoa}")
"""

"""
ho = input("Nhập họ: ")
ten_dem = input("Nhập tên đệm: ")
ten = input("Nhập tên: ")

ho_ten = f"{ho} {ten_dem} {ten}"

print("Họ tên đầy đủ:", ho_ten)
print("In hoa:", ho_ten.upper())
"""

# Bài tập tổng hợp


import math 
def may_tinh_mini():
    a = float(input("Nhập số a: "))
    b = float(input("Nhập số b: "))
    op = input("Chọn phép toán (+, -, *, /, ^): ")
    if op == "+":
        print("Kết quả:", a + b)
    elif op == "-":
        print("Kết quả:", a - b)
    elif op == "*":
        print("Kết quả:", a * b)
    elif op == "/":
        if b != 0:
            print("Kết quả:", a / b)
        else:
            print("Lỗi: không thể chia cho 0")
    elif op == "^": 
        print("Kết quả:", a ** b)
    else:
        print("Phép toán không hợp lệ")

def giai_pt_bac_2():
    a = float(input("Nhập a: "))
    b = float(input("Nhập b: "))
    c = float(input("Nhập c: "))
    delta = b**2 - 4*a*c
    if delta < 0:
        print("Phương trình vô nghiệm")
    elif delta == 0:
        x = -b / (2*a)
        print("Phương trình có nghiệm kép:", x)
    else:
        x1 = (-b + math.sqrt(delta)) / (2*a)
        x2 = (-b - math.sqrt(delta)) / (2*a)
        print("Nghiệm 1:", x1, "Nhgiệm 2:", x2)

def tong_day_so():
    n = int(input("Nhập n: "))
    s = sum(i**2 for i in range(1, n+1))
    print("Tổng =", s)

def bang_cuu_chuong():
    n = int(input("Nhập số n: "))
    for i in range(1, 11):
        print(f"{n} x {i} = {n*i}")

def quan_ly_sv():
    ds = []
    so_sv = int(input("Nhập số sinh viên: "))
    for _ in range(so_sv):
        ten = input("Tên: ")
        diem = float(input("Điểm: "))
        if diem >= 8:
            xl = "Giỏi"
        elif diem >= 6.5:
            xl = "Khá"
        elif diem >= 5:
            xl = "Trung bình"
        else:
            xl = "Yếu"
        ds.append((ten, diem, xl))
    print("Tên      | Điểm | Xếp loại")
    print("-------------------------")
    for ten, diem, xl in ds:
        print(f"{ten:<9} | {diem:<4} | {xl}")

def xu_ly_chuoi():
    s = input("Nhập câu: ")
    print("Số ký tự:", len(s))
    print("Số từ:", len(s.split()))
    print("Việt hoa:", s.upper())
    print("Viết thường:", s.lower())
    print("Đảo ngược:", s[::-1])

# Menu chính
while True:
    print("\n---MENU---")
    print("1. Máy tính mini")
    print("2. Giải phương trình bậc 2")
    print("3. Tính tổng dãy số")
    print("4. Bảng cửu chương")
    print("5. Quản lý sinh viên")
    print("6. Xử lý chuỗi")
    print("0. Thoát")

    chon = input("Chọn bài tập: ")
    
    if chon == "1":
        may_tinh_mini()
    elif chon == "2":
        giai_pt_bac_2()
    elif chon == "3":
        tong_day_so()
    elif chon == "4":
        bang_cuu_chuong()
    elif chon == "5":
        quan_ly_sv()
    elif chon == "6":
        xu_ly_chuoi()
    elif chon == "0":
        print("Kết thúc chương trình.")
        break
    else:
        print("Lựa chọn không hợp lệ, vui lòng thử lại.")

    


