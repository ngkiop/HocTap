// Bai 1
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

// Bai 2
// #include <stdio.h>

// int main()
// {

//     float do_C, do_F;

//     printf("Nhap nhiet do(C): ");
//     scanf("%f", &do_C);

//     do_F = (do_C * (9.0 / 5.0)) + 32;

//     printf("Nhiet do duoc doi thanh(do F): %.2f\n", do_F);

//     return 0;
// }

// Bai 3
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

// Bai 4
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

// Bai 5
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

// Bai 6
// #include <stdio.h>

// int main()
// {

//     int s, gio, phut, giay;

//     printf("Nhap tong so giay: ");
//     scanf("%d", &s);

//     gio = s / 3600;
//     phut = (s % 3600) / 60;
//     giay = s % 60;

//     printf("Ket qua: %d:%d:%d\n", gio, phut, giay);

//     return 0;
// }

// Bai 7
// #include <stdio.h>

// int main()
// {

//     float toan, van, anh, dtb;
//     printf("Nhap diem Toan(he so 2): ");
//     scanf("%f", &toan);

//     printf("Nhap diem Van(he so 2): ");
//     scanf("%f", &van);

//     printf("Nhap diem Anh(he so 1): ");
//     scanf("%f", &anh);

//     dtb = ((toan * 2) + (van * 2) + anh) / 3;

//     printf("Diem trung binh la: %.2f", dtb);

//     return 0;
// }

// Bai 8
// #include <stdio.h>

// int main() {
//     // 1. Khai báo các biến cần dùng
//     float tong_hoa_don, phan_tram_tip, tien_tip, tong_sau_cung, tien_moi_nguoi;
//     int so_nguoi;

//     printf("=== CHUONG TRINH CHIA HOA DON ===\n");

//     // 2. Nhập dữ liệu từ bàn phím
//     printf("Nhap tong so tien tren hoa don: ");
//     scanf("%f", &tong_hoa_don);

//     printf("Nhap phan tram tien tip muon cho (vi du 10, 15): ");
//     scanf("%f", &phan_tram_tip);

//     printf("Nhap so nguoi cung chia se hoa don: ");
//     scanf("%d", &so_nguoi);

//     // 3. Tinh toan
//     tien_tip = tong_hoa_don * (phan_tram_tip / 100.0);
//     tong_sau_cung = tong_hoa_don + tien_tip;
//     tien_moi_nguoi = tong_sau_cung / so_nguoi;

//     // 4. In ket qua ra man hinh
//     printf("\n--- KET QUA ---\n");
//     printf("Tien tip tinh duoc: %.2f\n", tien_tip);
//     printf("Tong so tien phai tra (bao gom tip): %.2f\n", tong_sau_cung);
//     printf("So tien moi nguoi can tra la: %.2f\n", tien_moi_nguoi);

//     return 0;
// }

// Bai 9
// #include <stdio.h>

// int main()
// {
//     float can_nang, chieu_cao, bmi;

//     printf("=== CHUONG TRINH TINH CHI SO BMI ===\n");

//     // Nhập dữ liệu
//     printf("Nhap can nang cua ban (kg): ");
//     scanf("%f", &can_nang);

//     printf("Nhap chieu cao cua ban (met - vi du 1.65): ");
//     scanf("%f", &chieu_cao);

//     // Tính toán
//     bmi = can_nang / (chieu_cao * chieu_cao);

//     // In kết quả
//     printf("\n--- KET QUA ---\n");
//     printf("Chi so BMI cua ban la: %.2f\n", bmi);

//     return 0;
// }

// Bai 10
#include <stdio.h>

int main()
{
    float von_ban_dau, lai_suat_nam, tong_tien, tien_lai;
    int so_nam;

    printf("=== CHUONG TRINH TINH LAI DON ===\n");

    // Nhập dữ liệu
    printf("Nhap so tien gui ban dau: ");
    scanf("%f", &von_ban_dau);

    printf("Nhap lai suat nam (%% - vi du nhap 6.5 neu lai la 6.5%%): ");
    scanf("%f", &lai_suat_nam);

    printf("Nhap so nam gui tien: ");
    scanf("%d", &so_nam);

    // Tính toán
    // Chia 100.0 ở đây để đổi từ phần trăm sang số thập phân (ví dụ 6.5% thành 0.065)
    tien_lai = von_ban_dau * (lai_suat_nam / 100.0) * so_nam;
    tong_tien = von_ban_dau + tien_lai;

    // In kết quả
    printf("\n--- KET QUA ---\n");
    printf("So tien lai nhan duoc: %.2f\n", tien_lai);
    printf("Tong so tien nhan duoc sau %d nam la: %.2f\n", so_nam, tong_tien);

    return 0;
}