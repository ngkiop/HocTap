// #include <stdio.h>

// int main() {

//     int cd, cr;
//     int chuvi, dientich;

//     printf("Nhap chieu dai: ");
//     scanf("%d", &cd);

//     printf("Nhap chieu rong: ");
//     scanf("%d", &cr);

//     chuvi = (cd + cr) * 2;
//     dientich = cd * cr;

//     printf("Chu vi hinh chu nhat la: %d\n", chuvi);
//     printf("Dien tich hinh chu nhat la: %d\n", dientich);

//     return 0;

// }

#include <stdio.h>

int main() {

    float cd, cr;
    float chuvi, dientich;

    printf("Nhap chieu dai: ");
    scanf("%f", &cd);

    printf("Nhap chieu rong: ");
    scanf("%f", &cr);

    chuvi = (cd + cr) * 2;
    dientich = cd * cr;

    printf("Chu vi hinh chu nhat la: %0.2f\n", chuvi);
    printf("Dien tich hinh chu nhat la: %.2f\n", dientich);

    return 0;
    
}