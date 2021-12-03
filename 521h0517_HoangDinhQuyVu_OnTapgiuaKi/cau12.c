#include <stdio.h>

int check(int n)
{
    if(n < 0 || n > 10)
    {
        printf("Nhap Sai va Ket thuc chuong trinh");
    }
}
float average(int a, int b, int c, int d)
{
    float agv = (a * 10.0 /100 + b * 20.0 / 100 + c * 20.0 / 100 + d * 50.0 / 100); 
    return agv;
}

void hocLuc(float n)
{
    if(n < 5)
    {
        printf("avg = %.2f - hoc lai", n);
    }
    else if(n < 6.5)
        {
            printf("avg = %.2f - trung binh", n);
        }
        else if(n < 8)
            {
                printf("avg = %.2f - kha", n);
            }
            else if(n < 9)
            {
                printf("avg = %.2f - gioi", n);
            } 
            else
                {
                    printf("avg = %f - xuat sac", n);
                }

}
int main()
{   
    int qt1, qt2, gk, ck;
    printf("nhap diem qua trinh 1: ");
    scanf("%d", &qt1);
    if(qt1 < 0 || qt1 > 10)
    {
        printf("Nhap Sai va Ket thuc chuong trinh");
        return 0;
    }

    printf("nhap diem qua trinh 2: ");
    scanf("%d", &qt2);
    if(qt2 < 0 || qt2 > 10)
    {
        printf("Nhap Sai va Ket thuc chuong trinh");
        return 0;
    }

    printf("nhap diem giua ki: ");
    scanf("%d", &gk);
    if(gk < 0 || gk > 10)
    {
        printf("Nhap Sai va Ket thuc chuong trinh");
        return 0;
    }

    printf("nhap diem cuoi ki: ");
    scanf("%d", &ck);
    if(ck < 0 || ck > 10)
    {
        printf("Nhap Sai va Ket thuc chuong trinh");
        return 0;
    }

    float result = average(qt1, qt2, gk, ck);
    hocLuc(result);

    return 0;




}