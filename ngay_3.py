# Bài tập 1: Kiểm tra số chẵn / lẻ 

# Trả lời cơ bản

"""
n = int(input("Nhập 1 số nguyên: "))

if n % 2 == 0:
    print(f"{n} là số chẵn")
else:
    print(f"{n} là số lẻ")
"""

# Nâng cấp 1

"""
n = int(input("Nhập 1 số nguyên: "))

if n == 0:
    print("Số 0 không chẵn cũng không lẻ.")
elif n % 2 == 0:
    print(f"{n} là số chẵn", end=" ")
    if n > 0:
        print("và là số dương")
    else:
        print("và là số âm")
else:
    print(f"{n} là số lẻ", end=" ")
    if n > 0:
        print("và là số dương")
    else:
        print("và là số âm")
"""

# nâng cấp 2

"""
numbers = list(map(int, input("Nhập các số nguyên, cách nhau bởi dấu cách: ").split()))

for n in numbers:
    if n == 0:
        print(f"{n} là số 0 (không chẵn cũng không lẻ)")
    elif n % 2 == 0:
        if n > 0:
            print(f"{n} là số chẵn dương")
        else:
            print(f"{n} là số chẵn âm")
    else:
        if n > 0:
            print(f"{n} là số lẻ dương")
        else:
            print(f"{n} là số lẻ âm")
"""

# Bài tập 2: Kiểm tra năm nhuận

"""
nam = int(input("Nhập năm: "))
if (nam % 4 == 0 and nam % 100 != 0) or (nam % 400 == 0):
    print(f"{nam} là năm nhuận")
else:
    print(f"{nam} không phải năm nhuận")
"""

# nâng cấp 1

"""
year = int(input("Nhập năm: "))

if (year % 400 == 0) or (year % 4 == 0 and year % 100 != 0):
    print(year, "là năm nhuận, có 366 ngày")
else:
    print(year, "không phải năm nhuận, có 365 ngày")
"""

# nâng cấp 2

"""
years = list(map(int, input("Nhập các năm, cách nhau bởi dấu cách: ").split()))

for year in years:
    if (year % 400 == 0) or (year % 4 == 0 and year % 100 != 0):
        print(f"{year} là năm nhuận, có 366 ngày")
    else:
        print(f"{year} không phải năm nhuận, có 365 ngày")
"""

# Bài tập tổng hợp cả 2 bài 

"""
def kiem_tra_so():
    numbers = list(map(int, input("Nhập các số nguyên, cách nhau bởi dấu cách: ").split()))
    for n in numbers:
        if n == 0:
            print(f"{n} là số 0 (không chẵn cũng không lẻ)")
        elif n % 2 == 0:
            if n > 0:
                print(f"{n} là số chẵn dương")
            else:
                print(f"{n} là số chẵn âm")
        else:
            if n > 0:
                print(f"{n} là số lẻ dương")
            else:
                print(f"{n} là số lẻ âm")

def kiem_tra_nam():
    years = list(map(int, input("Nhập các năm, cách nhau bởi dấu cách: ").split()))
    for year in years:
        if (year % 400 == 0) or (year % 4 == 0 and year % 100 != 0):
            print(f"{year} là năm nhuận, có 366 ngày")
        else:
            print(f"{year} không phải năm nhuận, có 365 ngày")

while True:
    print("\n===== MENU =====")
    print("1. Kiểm tra số chẵn/lẻ, dương/âm")
    print("2. Kiểm tra năm nhuận và số ngày trong năm")
    print("3. Thoát")
    
    choice = input("Chọn chức năng (1/2/3): ")
    
    if choice == "1":
        kiem_tra_so()
    elif choice == "2":
        kiem_tra_nam()
    elif choice == "3":
        print("Tạm biệt!")
        break
    else:
        print("Lựa chọn không hợp lệ, vui lòng thử lại.")
"""

# Bài tập về nhà ôn tập kiến thức hôm nay


n = int(input("Nhập số nguyên: "))

if n <= 1:
    print(f"{n} không phải số nguyên tố")
else:
    is_prime = True
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            is_prime = False
            break
    if is_prime:
        print(f"{n} là số nguyên tố")
    else:
        print(f"{n} không phải số nguyên tố")

