// #include <stdio.h>

// int main()
// {
//     int nam;
//     printf("Nhap vao 1 nam bat ky: ");
//     scanf("%d", &nam);

//     if ((nam % 400 == 0) || (nam % 4 == 0 && nam % 100 != 0))
//     {
//         printf("Nam %d la nam nhuan.\n", nam);
//     }
//     else
//     {
//         printf("Nam %d khong phai la nam nhuan.\n", nam);
//     }

//     return 0;
// }

// #include <stdio.h>

// int main()
// {

//     int so;
//     printf("Nhap vao 1 so nguyen (10 - 50): ");
//     scanf("%d", &so);

//     if (so >= 10 && so <= 50)
//     {
//         if (so % 2 == 0)
//         {
//             printf("So %d la so chan.\n", so);
//         }
//         else
//         {
//             printf("So %d la so le.\n", so);
//         }
//     }
//     else
//     {
//         printf("Nhap lai so trong khoang duoc neu.\n");
//     }

//     return 0;
// }

#include <stdio.h>

int main()
{

    float soTien;
    int soDiem;

    printf("Nhap vao so tien mua hang (USD): ");
    scanf("%f", &soTien);
    printf("Nhap vao so diem thanh vien: ");
    scanf("%d", &soDiem);

    // if (soTien >= 0 && soDiem >= 0)
    // {
    //     if (soTien > 500 && soDiem > 100)
    //     {
    //         printf("Ban dat Hang Kim Cuong.\n");
    //     }
    //     else if ((soTien > 200 && soDiem > 50) || (soTien > 400))
    //     {
    //         printf("Ban dat Hang Vang.\n");
    //     }
    //     else if (soTien > 100 || soDiem > 20)
    //     {
    //         printf("Ban dat Hang Bac.\n");
    //     }
    //     else
    //     {
    //         printf("Ban dat Hang Pho Thong.\n");
    //     }
    // }
    // else
    // {
    //     printf("Nhap sai. De nghi chay lai.\n");
    // }

    if (soTien < 0 || soDiem < 0)
    {
        printf("Nhap sai. De nghi chay lai.\n");
        return 1; // Kết thúc chương trình sớm vì có lỗi
    }

    if (soTien > 500 && soDiem > 100)
    {
        printf("Ban dat Hang Kim Cuong.\n");
    }
    else if ((soTien > 200 && soDiem > 50) || (soTien > 400))
    {
        printf("Ban dat Hang Vang.\n");
    }
    else if (soTien > 100 || soDiem > 20)
    {
        printf("Ban dat Hang Bac.\n");
    }
    else
    {
        printf("Ban dat Hang Pho Thong.\n");
    }

    return 0;
}