#include <stdio.h>

int tong_tien(int h, int m)
{
    int sum = 1.0;
    int a = 0;
    if(h <= 40)
    {
        sum = h * m;
    } else 
        {
            if (h <= 45)
            {   a = h - 40;
                sum = 40 * m + a * m * 1.8;
            } else  
                {
                    if (h <= 50)
                    {   a = h - 45;
                        sum = 40 * m + 5 * m * 1.8 + a * m * 2.5;
                    } else
                        {
                            a = h - 50;
                            sum = 40 * m + 5 * m * 1.8 + 5 * m * 2.5 + a * m * 2.6;
                        }
                } 
        }


    return sum;
}


int main()
{   
    int m, h;
    printf("Nhap so gio lam viec h =  ");
    scanf("%d", &h);

    printf("Nhap so tien tieu chuan duoc chi tra moi gio m = : ");
    scanf("%d", &m);

    int result = tong_tien(h, m);
    printf("tong tien trong 1 tuan = %d", result);

    return 0;
}