#include <stdio.h>

int main()
{
    int a, b, c;
    int max;

    printf("Nhap vao 3 so nguyen (cach nhau boi dau cach): ");
    scanf("%d %d %d", &a, &b, &c);

    max = a;

    if (b > max)
    {
        max = b;
    }

    if (c > max)
    {
        max = c;
    }

    // if (a >= b && a >= c)
    // {
    //     max = a;
    // }
    // else if (b >= a && b >= c)
    // {
    //     max = b;
    // }
    // else
    // {
    //     max = c;
    // }

    // max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

    // In kết quả
    printf("So lon nhat trong 3 so: %d, %d, %d la: %d\n", a, b, c, max);

    return 0;
}