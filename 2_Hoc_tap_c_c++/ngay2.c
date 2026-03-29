#include <stdio.h>

int main()
{
    int tuoi;
    float diem;
    char ky_tu_dau;

    printf("Nhap tuoi cua toi: ");
    scanf("%d", &tuoi);

    printf("Nhap diem cua toi: ");
    scanf("%f", &diem);

    printf("Nhap ky tu dau trong ten toi: ");
    scanf(" %c", &ky_tu_dau);

    printf("\n--- Thong tin vua nhap ---\n");
    printf("Tuoi: %d\n", tuoi);
    printf("Diem: %.2f\n", diem);
    printf("Ky tu dau: %c\n", ky_tu_dau);

    return 0;
}