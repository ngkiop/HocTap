// #include <stdio.h>

// int main() {

//     int n;
//     printf("Nhap so nguyen n: ");
//     scanf("%d", &n);

//     if (n % 2 == 0) {
//         printf("%d la so chan.\n", n);
//     } else {
//         printf("%d la so le.\n", n);
//     }

//     return 0;

// }

// #include <stdio.h>

// int main()
// {

//     float diem;
//     printf("Nhap diem cua toi: ");
//     scanf("%f", &diem);

//     if (diem < 0 || diem > 10)
//     {
//         printf("Diem khong hop le.\n");
//     }
//     else if (diem >= 5)
//     {
//         printf("Chuc mung ban da dau.\n");
//     }
//     else
//     {
//         printf("Rat tiec, ban phai hoc lai.\n");
//     }

//     return 0;
// }

#include <stdio.h>

int main()
{
    int a, b;
    printf("Nhap so a va b: ");
    scanf("%d%d", &a, &b);

    if (a > b)
    {
        printf("%d lon hon %d.\n", a, b);
    }
    else if (a < b)
    {
        printf("%d nho hon %d.\n", a, b);
    }
    else
    {
        printf("%d bang %d.\n", a, b);
    }

    return 0;
}