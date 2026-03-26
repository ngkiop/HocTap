// #include <stdio.h>

// int main()
// {
//     for (int i = 1; i <= 5; i++)
//     {
//         printf("Lan thu %d: To dang hoc lap trinh C.\n", i);
//     }

//     return 0;
// }


#include<stdio.h>

int main(){
    int n, tong = 0;
    printf("Nhap n tu ban phim: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        tong += i;
    }
    
    printf("Tong tu 1 den %d la: %d", n, tong);

    return 0;

}
