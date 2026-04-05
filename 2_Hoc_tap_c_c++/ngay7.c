// #include <stdio.h>

// int main()
// {

//     float diem;
//     printf("Nhap diem: ");
//     scanf("%f", &diem);

//     if (diem >= 0 && diem <= 10)
//     {
//         if (diem > 9.0)
//         {
//             printf("Xuat Sac.\n");
//         }
//         else if (diem >= 8.0)
//         {
//             printf("Gioi.\n");
//         }
//         else if (diem >= 6.5)
//         {
//             printf("Kha.\n");
//         }
//         else if (diem >= 5)
//         {
//             printf("Trung Binh.\n");
//         }
//         else
//         {
//             printf("Yeu.\n");
//         }
//     }
//     else
//     {
//         printf("Diem khong hop le. Yeu cau nhap lai.\n");
//     }

//     return 0;
// }

// #include <stdio.h>

// int main()
// {

//     float thu_nhap, tien_thue;
//     printf("Nhap vao thu nhap cuu ban (trieu dong): ");
//     scanf("%f", &thu_nhap);

//     if (thu_nhap >= 0)
//     {
//         if (thu_nhap > 15)
//         {
//             tien_thue = (10 * 0.1) + ((thu_nhap - 15) * 0.2);
//             printf("Tien thue la: %.2f\n", tien_thue);
//         }
//         else if (thu_nhap > 5)
//         {
//             tien_thue = (thu_nhap - 5) * 0.1;
//             printf("Tien thue la: %.2f\n", tien_thue);
//         }
//         else
//         {
//             printf("Khong phai nop thue\n");
//         }
//     }
//     else
//     {
//         printf("Thu nhap khong hop le\n");
//     }

//     return 0;
// }

#include <stdio.h>

int main()
{

    int so_dien;
    float tong_tien;

    printf("Nhap vao so dien: ");
    scanf("%d", &so_dien);

    if (so_dien >= 0)
    {
        if (so_dien > 100)
        {
            tong_tien = (50 * 1500) + (50 * 2000) + ((so_dien - 100) * 3000);
        }
        else if (so_dien > 50)
        {
            tong_tien = (50 * 1500) + ((so_dien - 50) * 2000);
        }
        else
        {
            tong_tien = so_dien * 1500;
        }
        printf("Tong tien dien la: %.2f\n", tong_tien);
    }
    else
    {
        printf("So dien khong hop le.\n");
    }

    return 0;
}