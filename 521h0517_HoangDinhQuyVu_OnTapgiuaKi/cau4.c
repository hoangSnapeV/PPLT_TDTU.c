#include <stdio.h>
#include <math.h>

int kiemTra(int a, int b, int c)
{
    int dk1 = a + b > c;
    int dk2 = a + c > b;
    int dk3 = b + c > a;
    
    return (dk1 && dk2 && dk3);
}

int chuvi(int a, int b, int c)
{
    if(kiemTra(a, b, c) == 1)
    {
        return (a + b + c);
    }
    return 0;
}
float dientich(float a, float b, float c)
{   
    if(kiemTra(a, b, c) == 0)
    {
        return 0;
    }
    float p = (a + b + c) / 2 * 1.0;
    float s = sqrt(p * (p - a) * (p - b) * (p - c) );

    return s;
}

int tamGiacDeu(int a, int b, int c)
{
    return (a == b && a == c && b == c);
}

int tamGiacCan(int a, int b, int c)
{
    return (a == b || a == c || b == c);
}


int main()
{
    int a, b, c;

    printf("nhap a = ");
    scanf("%d", &a);

    printf("nhap b = ");
    scanf("%d", &b);

    printf("nhap c = ");
    scanf("%d", &c);

    if(kiemTra(a, b, c) == 0)
    {
        printf("tam giac khong hop le\n");
    }

    //chu vi, s // y 2
    int result1 = chuvi(a, b, c);
    printf("chu vi = %d\n", result1);

    float result2 = dientich(a, b, c);
    printf("dien tich = %f\n", result2);

    // y3 
    if(kiemTra(a, b, c) == 1)
    {
        if(tamGiacDeu(a, b, c) == 1)
        {
            printf("La tam giac deu");
        } 
        else if(tamGiacCan(a, b, c) == 1)
            {
                printf("La tam giac can");
            } 
            else printf("La tam giac thuong");
    }
    



    return 0;
}