// #include <stdio.h>

// int main()
// {

//     int lua_chon;
//     double so_1, so_2, ket_qua;

//     printf("===== MENU PHEP TINH =====\n");
//     printf("1. Phep cong (+)\n");
//     printf("2. Phep tru (-)\n");
//     printf("3. Phep nhan (*)\n");
//     printf("4. Phep chia (/)\n");
//     printf("Vui long chon (1 den 4): ");
//     scanf("%d", &lua_chon);

//     printf("Nhap so thu nhat: ");
//     scanf("%lf", &so_1);
//     printf("Nhap so thu hai: ");
//     scanf("%lf", &so_2);

//     switch (lua_chon)
//     {
//     case 1:
//         ket_qua = so_1 + so_2;
//         printf("Ket qua: %.2lf + %.2lf = %.2lf\n", so_1, so_2, ket_qua);
//         break;
//     case 2:
//         ket_qua = so_1 - so_2;
//         printf("Ket qua: %.2lf - %.2lf = %.2lf\n", so_1, so_2, ket_qua);
//         break;
//     case 3:
//         ket_qua = so_1 * so_2;
//         printf("Ket qua: %.2lf * %.2lf = %.2lf\n", so_1, so_2, ket_qua);
//         break;
//     case 4:
//         if (so_2 != 0)
//         {
//             ket_qua = so_1 / so_2;
//             printf("Ket qua: %.2lf / %.2lf = %.2lf\n", so_1, so_2, ket_qua);
//         }else{
//             printf("Loi! Khong the chia cho 0.\n");
//         }
//         break;
//     default:
//         printf("Lua chon khong hop le. Vui long chay lai chuong trinh.\n");
//         break;
//     }

//     return 0;
// }

#include <stdio.h>

int main()
{
    char maVe;
    long soLuong, giaVe = 0; // Khởi tạo giá vé bằng 0

    printf("===== MENU GIA VE =====\n");
    printf("Loai S: Thuong (80000 VND)\n");
    printf("Loai A: Vip (120000 VND)\n");
    printf("Loai B: Ghe doi (250000 VND)\n");
    printf("Lua chon ma loai ghe: ");
    scanf(" %c", &maVe);

    printf("So luong ve la: ");
    scanf("%ld", &soLuong);

    switch (maVe)
    {
    case 'S':
    case 's':
        giaVe = 80000; // Chỉ gán đơn giá
        break;
    case 'A':
    case 'a':
        giaVe = 120000; // Chỉ gán đơn giá
        break;
    case 'B':
    case 'b':
        giaVe = 250000; // Chỉ gán đơn giá
        break;
    default:
        printf("\nLoi! Khong co loai ghe nay.\n");
        return 0; // Dừng chương trình luôn nếu nhập sai mã
    }

    // Tính toán và in kết quả tập trung ở đây
    long tongTien = soLuong * giaVe;
    printf("Tong tien ban can thanh toan la: %ld VND.\n", tongTien);

    return 0;
}