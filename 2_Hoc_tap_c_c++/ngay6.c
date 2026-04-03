// #include <stdio.h>

// int main()
// {

//     int n;
//     printf("Nhap so nguyen duong n: ");
//     scanf("%d", &n);

//     if (n % 2 == 0)
//     {
//         printf("So %d la so chan.\n", n);
//     }
//     else
//     {
//         printf("So %d la so le.\n", n);
//     }

//     return 0;
// }

// #include <stdio.h>

// int main()
// {

//     int n;
//     printf("Nhap 1 so nguyen n: ");
//     scanf("%d", &n);

//     if (n > 0)
//     {
//         printf("Day la so duong.\n");
//     }
//     else if (n < 0)
//     {
//         printf("Day la so am.\n");
//     }
//     else
//     {
//         printf("Day la so 0.\n");
//     }

//     return 0;
// }

// #include <stdio.h>

// int main()
// {

//     int diem;
//     printf("Nhap diem: ");
//     scanf("%d", &diem);

//     if (diem >= 0 && diem <= 10)
//     {
//         if (diem >= 5)
//         {
//             printf("Ban da do.\n");
//         }
//         else
//         {
//             printf("Ban da truot.\n");
//         }
//     }
//     else
//     {
//         printf("Sai nhap lai diem.\n");
//     }

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int a, b;
//     printf("Nhap so a: ");
//     scanf("%d", &a);

//     printf("Nhap so b: ");
//     scanf("%d", &b);

//     if (a > b)
//     {
//         printf("%d lon hon %d\n", a, b);
//     }
//     else
//     {
//         printf("%d khong lon hon %d\n", a, b);
//     }

//     return 0;
// }

#include <stdio.h>

int main()
{
    int so_dien, tien_dien, so_dien_thua;
    printf("Nhap so dien: ");
    scanf("%d", &so_dien);

    if (so_dien <= 0)
    {
        printf("Nhap sai so dien.\n");
    }
    else if (so_dien <= 50)
    {
        tien_dien = so_dien * 1500;
        printf("Tien dien la: %d", tien_dien);
    }
    else
    {
        so_dien_thua = so_dien - 50;
        tien_dien = (50 * 1500) + (so_dien_thua * 2000);
        printf("Tien dien la: %d", tien_dien);
    }

    return 0;
}