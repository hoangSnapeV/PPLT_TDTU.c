#include <stdio.h>

int main()  
{
    int tien, choose;
    printf("nhap tien = ");
    scanf("%d", &tien);

    printf("nhap lu chon = ");
    scanf("%d", &choose);

    int tienMatHang = 0, du = 0;
    int count = 0;
    switch (choose)
    {
    case 1:
        tienMatHang = 9000;
        break;
    case 2:
        tienMatHang = 11000;
        break;
    case 3:
        tienMatHang = 10000;
        break;
    case 4:
        tienMatHang = 13000;
        break;
    default:
        tienMatHang = 5000;
        break;
    }

    if(tien >= tienMatHang)
    {   
        count = tien / tienMatHang;
        du  = tien - count * tienMatHang;
    } else 
        {
            printf("loi va ket thuc");
            return 0;
        }

    switch (choose)
    {
    case 1:
        printf("Tra xanh c2 - %d chai - tien du: %d", count, du);
        break;
    case 2:
        printf("String - %d chai - tien du: %d", count, du);
        break;
    case 3:
        printf("Pepsi - %d chai - tien du: %d", count, du);
        break;
    case 4:
        printf("Warrior - %d chai - tien du: %d", count, du);
        break;
    default:
        printf("Nuoc suoi - %d chai - tien du: %d", count, du);
        break;
    }
    
    return 0;
}