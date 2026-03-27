// On tap ngay 4 ve for, while, if.

// #include <stdio.h>

// int main()
// {

//     int n, tong = 0;
//     printf("Nhap so nguyen duong n: ");
//     scanf("%d", &n);

//     // for (int i = 1; i <= n; i++)
//     // {
//     //     if (i % 2 == 0)
//     //     {
//     //         tong += i;
//     //     }
//     // }

//     for (int i = 2; i <= n; i += 2)
//     {
//         tong += i;
//     }

//     printf("Tong cac so chan la: %d", tong);

//     return 0;
// }

// #include <stdio.h>

// int main()
// {

//     int x;
//     printf("Nhap vao bang cuu chuong x tu ban phim: ");
//     scanf("%d", &x);

//     for (int i = 1; i <= 10; i++)
//     {
//         printf("%d x %d = %d\n", x, i, x * i);
//     }

//     return 0;
// }

// #include <stdio.h>

// int main()
// {

//     int n;
//     long long giaithua = 1;

//     printf("Nhap so nguyen duong n: ");
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++)
//     {
//         giaithua *= i;
//     }

//     printf("Giai thua cua n(%d) la: %lld", n, giaithua);

//     return 0;
// }

#include <stdio.h>

int main()
{

    int n;
    printf("Nhap n tu ban phim: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            // printf("So chia het cho ca 3 va 5 la: %d\n", i);

            printf("FizzBuzz.\n");
        }
        else if (i % 3 == 0)
        {
            // printf("So chia het cho 3 la: %d\n", i);
            printf("Fizz.\n");
        }
        else if (i % 5 == 0)
        {
            // printf("So chia het cho 5 la: %d\n", i);
            printf("Buzz.\n");
        }
        else
        {
            // printf("Cac so khong chia het cho 3 va 5 la: %d\n", i);
            printf("%d.\n", i);
        }
    }

    return 0;
}