"""
# Khai báo biến
name = "Ngk"
age = 27
height = 1.76
is_student = False

# Kiểm tra kiểu 
print(type(name))
print(type(age))
print(type(height))
print(type(is_student))

# Tính toán
sum = age + 5
print("Tổng:", sum)
area = 3.14 * (2 ** 2)

#Chuyển kiểu
age_str = str(age)
height_int = int(height)
print(type(age_str), age_str)
print(type(height_int), height_int)

# Format chuỗi
print(f"{name} năm nay {age} tuổi, cao {height}m.")
print("Kết quả diện tích: {:.2f}".format(area))  # 2 chữ số thập phân
"""

"""
# 1 
a = 10; b = 3.5; c = "5"; d = False
print(type(a), type(b), type(c), type(d))

# 2
print(a + b)        # 13.5
print(a // 3)       # 3
print(a % 3)        # 1
print(b ** 2)       # 12.25

# 3
c_int = int(c)
print(f"Kết quả a + int(c) = {a + c_int}")

# 4
name = input("Tên: ")
age = int(input("Tuổi: "))
height = float(input("Chiều cao (m): "))
print(f"{name}: {age} tuổi, {height:.2f} m")

# 5
weight = float(input("Cân nặng (kg): "))
height = float(input("Chiều cao (m): "))
bmi = weight / (height ** 2)
if bmi < 18.5:
    status = "Gầy"
elif bmi < 25:
    status = "Bình thường"
else:
    status = "Thừa cân"
print(f"BMI = {bmi:.2f} - {status}")
"""

"""
def get_float(prompt):
    while True:
        s = input(prompt).strip().replace(',', '.')
        try:
            value = float(s)
            return value
        except ValueError:
            print("Giá trị không hợp lệ. Vui lòng nhập số hợp lệ.")

def get_int(prompt):
    while True:
        s = input(prompt).strip()
        try:
            value = int(s)
            return value
        except ValueError:
            print("Giá trị không hợp lệ. Vui lòng nhập số nguyên.")

def calc_bmi(weight_kg, height_m):
    if height_m <= 0:
        raise ValueError("Chiều cao phải lớn hơn 0.")
    return weight_kg / (height_m ** 2)

def bmi_category(bmi):
    if bmi < 18.5:
        return "Gầy"
    if bmi < 25:
        return "Bình thường"
    return "Thừa cân"

if __name__ == "__main__":
    # 1 and 2 examples (kept simple)
    a = 10
    b = 3.5
    c = "5"
    d = False
    print(type(a), type(b), type(c), type(d))
    print(a + b)
    print(a // 3)
    print(a % 3)
    print(b ** 2)

    # 3
    c_int = int(c)
    print(f"Kết quả a + int(c) = {a + c_int}")

    # 4 personal info with correct formatting
    name = input("Tên: ").strip().title()
    age = get_int("Tuổi: ")
    height_m = get_float("Chiều cao (m): ")
    print(f"{name}: {age} tuổi, {height_m:.2f} m")

    # 5 BMI with validation
    weight_kg = get_float("Cân nặng (kg): ")
    height_bmi = get_float("Chiều cao để tính BMI (m): ")
    try:
        bmi = calc_bmi(weight_kg, height_bmi)
        status = bmi_category(bmi)
        print(f"BMI = {bmi:.2f} - {status}")
    except ValueError as e:
        print("Lỗi:", e)
"""