#include <stdio.h>

int main()
{

    int cd, cr, chuVi, dienTich;

    printf("Nhap tu ban phim chieu dai hinh chu nhat: ");
    scanf("%d", &cd);

    printf("Nhap tu ban phim chieu rong hinh chu nhat: ");
    scanf("%d", &cr);

    chuVi = (cd + cr) * 2;
    dienTich = cd * cr;

    printf("Chu vi hinh chu nhat la: %d.\n", chuVi);
    printf("Dien tich hinh chu nhat la: %d.\n", dienTich);

    return 0;
}