// #include <stdio.h>

// int main()
// {

//     float cd, cr, chuVi, dienTich;

//     printf("Nhap tu ban phim chieu dai hinh chu nhat: ");
//     scanf("%f", &cd);

//     printf("Nhap tu ban phim chieu rong hinh chu nhat: ");
//     scanf("%f", &cr);

//     chuVi = (cd + cr) * 2;
//     dienTich = cd * cr;

//     printf("Chu vi hinh chu nhat la: %.2f.\n", chuVi);
//     printf("Dien tich hinh chu nhat la: %.2f.\n", dienTich);

//     return 0;
// }

// #include <stdio.h>

// int main()
// {

//     float ban_kinh;
//     float chu_vi, dien_tich;
//     const float PI = 3.14;

//     printf("Nhap ban kinh hinh tron: ");
//     scanf("%f", &ban_kinh);

//     chu_vi = 2 * PI * ban_kinh;
//     dien_tich = PI * ban_kinh * ban_kinh;

//     printf("Chu vi hinh tron: %.2f.\n", chu_vi);
//     printf("Dien tich hinh tron: %.2f.\n", dien_tich);

//     return 0;
// }

// #include <stdio.h>

// int main()
// {

//     int so_giay;

//     printf("Nhap so giay: ");
//     scanf("%d", &so_giay);

//     printf("%d giay doi ra: %d phut : %d giay", so_giay, so_giay / 60, so_giay % 60);

//     return 0;
// }

// #include <stdio.h>

// int main()
// {

//     int glv;
//     float tltg;

//     printf("So gio lam viec la: ");
//     scanf("%d", &glv);

//     printf("So tien tra theo gio la: ");
//     scanf("%f", &tltg);

//     printf("Tong tien luong la: %.2f nghin dong", glv * tltg);

//     return 0;
// }

// #include <stdio.h>

// int main()
// {

//     int a, b, tam = 0;
//     printf("Nhap 2 so a va b: ");
//     scanf("%d%d", &a, &b);

//     printf("\n --- So vua nhap --- \n");
//     printf("%d\t%d\n", a, b);

//     tam = a;
//     a = b;
//     b = tam;

//     printf("\n --- A doi cho B --- \n");
//     printf("%d\t%d\n", a, b);

//     return 0;
// }

#include <stdio.h>

int main()
{

    int a, b, c = 0, d, e;

    printf("So tien phai tra: ");
    scanf("%d", &a);

    printf("Tong hoa don la: ");
    scanf("%d", &b);

    c = a - b;
    printf("Tien thua thu ngan tra lai la: %d.\n", c);

    d = c / 50;
    printf("So to 50 nghin can tra la: %d.\n", d);

    e = (c % 50) / 10;
    printf("So to 10 nghin can tra la: %d.\n", e);

    return 0;
}