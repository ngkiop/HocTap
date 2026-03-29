// #include <stdio.h>

// int main()
// {
//     int tuoi;
//     float diem;
//     char ky_tu_dau;

//     printf("Nhap tuoi cua toi: ");
//     scanf("%d", &tuoi);

//     printf("Nhap diem cua toi: ");
//     scanf("%f", &diem);

//     printf("Nhap ky tu dau trong ten toi: ");
//     scanf(" %c", &ky_tu_dau);

//     printf("\n--- Thong tin vua nhap ---\n");
//     printf("Tuoi: %d\n", tuoi);
//     printf("Diem: %.2f\n", diem);
//     printf("Ky tu dau: %c\n", ky_tu_dau);

//     return 0;
// }

#include <stdio.h>

int main()
{

    float chieu_dai, chieu_rong, chuvi, dientich;

    printf("Nhap tu ban phim chieu dai hinh chu nhat: ");
    scanf("%f", &chieu_dai);

    printf("Nhap tu ban phim chieu rong hinh chu nhat: ");
    scanf("%f", &chieu_rong);

    chuvi = (chieu_dai + chieu_rong) * 2;
    dientich = chieu_dai * chieu_rong;

    printf("Chu vi cua hinh chu nhat la: %.2f\n", chuvi);
    printf("Dien tich cua hinh chu nhat la: %.2f\n", dientich);

    return 0;
}