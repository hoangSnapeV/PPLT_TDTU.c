#include <stdio.h>

float cau_a(int n)
{   
    float sum = 0;
    for (float i = 1; i <= n; i++)
    {
        sum += i / 2;
    }
    return sum;
}
//caub
float cau_b(int n)
{   
    float sum = 0;
    for (float i = 1; i <= n; i++)
    {
        sum += (2 * i + 1);
    }
    return sum;
}
//cauc
float cau_c(int n)
{   
    float sum = 0;
    for (float i = 1; i <= n; i++)
    {
        sum = sum + (i + 1) / (i + 2);
    }
    return sum;
}
//caud
int cau_d(int n)
{
    int sum = 0;
    int a = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            a = a * j;
        }
        sum += (a + 1);
        a = 1;
    }
    
    return sum;
}
//caue
int cau_e(int n)
{
    int sum = 1;
    for (int i = 1; i <= n; i++)
    {
        sum = sum * i;
    }
    
    return sum;
}
//cauf
int cau_f(int n)
{
    int sum = 1;
    int a = 1;
    for (int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            a = a * j;
        }
        sum = sum * a;
        a = 1;
    }
    
    return sum;
}
//caug
float cau_g(int n)
{
    float sum = 1.0;
    for (float i = 1; i <= n; i++)
    {
        sum = sum * (2 * i) / 3;
    }
    
    return sum;
}
//cauh
float cau_h(int n)
{
    float sum = 1.0;
    float a = 0.0;
    for (float i = 1.0; i <= n; i++)
    {
        a = (i - 1) / (i + 1);
        sum = a * sum;
        
    }
    
    return sum;
}

int main()
{   
    int  n = 4;
    // float result_a = cau_a(n);
    // printf("result_a = %.2f\n", result_a);
    // printf("\n");

    // float result_b = cau_b(n);
    // printf("result_b = %.0f\n\n", result_b);

    // float result_c = cau_c(n);
    // printf("result_c = %.2f\n", result_c);
    // printf("\n");

    // int result_d = cau_d(n);
    // printf("result_d = %d\n\n", result_d);

    // int result_e = cau_e(n);
    // printf("result_e = %d\n\n", result_e);

    // int result_f = cau_f(n);
    // printf("result_f = %d\n\n", result_f);

    float result_g = cau_g(n);
    printf("result_g = %.2f\n\n", result_g);

    float result_h = cau_h(n);
    printf("result_h = %f\n\n", result_h);
    return 0;
}