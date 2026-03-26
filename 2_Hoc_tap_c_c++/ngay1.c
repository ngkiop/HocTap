// #include <stdio.h>

// int main(){
    
//     printf("Hello World!\t");
//     printf("23/03/2026\n");

//     return 0;

// }

// #include <stdio.h>

// int main(){
    
//     int nam_kinh_nghiem = 3;
//     printf("Toi da lam trai nganh %d nam\n", nam_kinh_nghiem);
//     printf("Nhung tu hom nay toi quyet tam hoc lai!\n");

//     return 0;

// }

#include <stdio.h>

int main(){

    int a = 22;
    int b = 5;
    int tong, hieu, tich;
    float thuong;

    tong = a + b;
    hieu = a - b;
    tich = a * b;
    thuong = (float)a / b;

    printf("Tong cua %d va %d la: %d\n", a, b, tong);
    printf("Hieu cua %d va %d la: %d\n", a, b, hieu);
    printf("Tich cua %d va %d la: %d\n", a, b, tich);
    printf("Thuong cua %d va %d la: %.2f\n", a, b, thuong);

    return 0;

}

