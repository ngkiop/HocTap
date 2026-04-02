// #include <stdio.h>

// int main()
// {

//     float cd, cr, chu_vi, dien_tich;

//     printf("Nhap chieu dai hinh chu nhat: ");
//     scanf("%f", &cd);

//     printf("Nhap chieu rong hinh chu nhat: ");
//     scanf("%f", &cr);

//     chu_vi = (cd + cr) * 2;
//     dien_tich = cd * cr;

//     printf("Chu vi hinh chu nhat la: %.2f.\n", chu_vi);
//     printf("Dien tich hinh chu nhat la: %.2f.\n", dien_tich);

//     return 0;
// }

// #include <stdio.h>

// int main()
// {

//     float do_C, do_F;

//     printf("Nhap nhiet do(C): ");
//     scanf("%f", &do_C);

//     do_F = (do_C * (9 / 5)) + 32;

//     printf("Nhiet do duoc doi thanh(do F): %.2f\n", do_F);

//     return 0;
// }

// #include <stdio.h>

// int main()
// {

//     long long n, binh_phuong, lap_phuong;
//     printf("Nhap vao so nguyen duong n: ");
//     scanf("%d", &n);

//     binh_phuong = n * n;
//     lap_phuong = n * n * n;

//     printf("Binh phuong cua n: %lld\n", binh_phuong);
//     printf("Lap phuong cua n la: %lld\n", lap_phuong);

//     return 0;
// }

// #include <stdio.h>

// int main()
// {

//     float nc, l, tong_luong;

//     printf("Nhap so ngay cong: ");
//     scanf("%f", &nc);

//     printf("Nhap luong mot ngay: ");
//     scanf("%f", &l);

//     tong_luong = nc * l;

//     printf("Tong luong: %.2f", tong_luong);

//     return 0;
// }

// #include <stdio.h>

// int main()
// {

//     int n, t, c, dv, tong;

//     printf("Nhap n co 3 chu so: ");
//     scanf("%d", &n);

//     t = n / 100 ;
//     c = (n / 10) % 10;
//     dv = n % 10;

//     tong = t + c + dv;

//     printf("Tong cua so %d la: %d", n, tong);

//     return 0;
// }

#include <stdio.h>

int main()
{

    int s, gio, phut, giay;

    printf("Nhap tong so giay: ");
    scanf("%d", &s);

    gio = s / 3600;
    phut = (s % 3600) / 60;
    giay = s % 60;

    printf("Ket qua: %d:%d:%d\n", gio, phut, giay);

    return 0;
}