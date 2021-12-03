#include <stdio.h>


int main() 
{
    int tien;
    printf("nhap so tien: ");
    scanf("%d", &tien);

    if(tien % 10000) 
    {
        printf("Nhap du lieu sai va ket thuc chuong trinh");
        return 0;
    }
    
    if(tien >= 500000)
    {
        int count  = tien / 500000;
        printf("Doi duoc %d to 500000\n", count);
        tien -= count * 500000;
    }   

    if(tien >= 100000)
    {
        int count  = tien / 100000;
        printf("Doi duoc %d to 100000\n", count);
        tien -= count * 100000;
    }

    if(tien >= 50000)
    {
        int count  = tien / 50000;
        printf("Doi duoc %d to 50000\n", count);
        tien -= count * 50000;
    }
    if(tien >= 20000)
    {
        int count  = tien / 20000;
        printf("Doi duoc %d to 20000\n", count);
        tien -= count * 20000;
    }
    if(tien >= 10000)
    {
        int count  = tien / 10000;
        printf("Doi duoc %d to 10000\n", count);
        tien -= count * 10000;
    }

    return 0;
}