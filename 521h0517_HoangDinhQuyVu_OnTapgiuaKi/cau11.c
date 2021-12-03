#include <stdio.h>
#include <math.h>

float tong_s1(int n)
{   
    float sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + (i + 1) / sqrt(i);
    }
    
    return sum;
}
//s2
int tong_s2(int n)
{   
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    
    return sum;
}
//
float tong_s3(int n)
{   
    float sum = 0.0;
    for (float i = 1; i <= n; i++)
    {
        sum = sum + 1 / i;
        
    }
    
    return sum;
}
//s4
int tong_s2(int n)
{   
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    
    return sum;
}
int main()
{
    int n;
    printf("nhap n = ");
    scanf("%d", &n);

    while (n <= 0)
    {
        printf("nhap lai n =");
        scanf("%d", &n);
    }
    
    float result = tong_s1(n);
    printf("s1 = %.2f\n", result);

    int result_2 = tong_s2(n);
    printf("s2 = %d\n", result_2);
    //s3
    float result_3 = tong_s3(n);
    printf("s3 = %.2f\n", result_3);
    //
    int result_4 = tong_s4(n);
    printf("s4 = %d\n", result_4);
    return 0;
}