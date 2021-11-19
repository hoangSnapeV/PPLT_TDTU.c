#include <stdio.h>

//1a
float cau1_a(float n)
{
    float sum = 0;
    for (float i = 1; i <= n; i++)
    {
        sum = (sum + i / 2 )* 1.0;
    }
    return sum;
}

//1b
int cau1_b(int n)
{
    int sum_a = 0;
    for (int i = 1; i <= n; i++)
    {
        sum_a = sum_a + i * 2 + 1;
        
    }
    return sum_a;
}

//1c
int cau1_c(int n)
{
    int sum_c = 0;
    for (int i = 1; i <= n; i++)
    {   
        int a = 1;
        for (int j = i ; j > 0; j--)
        {   
            
            a =  a * j;
            
        }
        sum_c = sum_c + a + 1; 
        
    }
    return sum_c;
}

//1d
int cau1_d(int n)
{
    int sum_d = 1;
    for (int i = 1; i <= n; i++)
    {   
        int a = 1;
        for (int j = i ; j > 0; j--)
        {   
            
            a =  a * j;
            
        }
        sum_d = sum_d * a ; 
        
    }
    return sum_d;
}

//1e
float cau1_e(int n)
{
    float sum_e = 1;
    for (int i = 1; i <= n; i++)
    {   
        sum_e = sum_e * i * 2 / 3 ; 
    }
    return sum_e;
}
int main()
{   
    // //1a
    // float result = cau1_a(4.0);
    // printf("sum = %f \n", result);

    // //1b
    // int result1_b = cau1_b(5);
    // printf("sum = %d \n", result1_b);

    // //1c
    // int result1_c = cau1_c(5);
    // printf("sum = %d \n", result1_c);

    // // 1d
    // int result1_d = cau1_d(4);
    // printf("sum_d = %f \n", result1_d);

    // 1e
    float result1_e = cau1_e(5);
    printf("sum = %f \n", result1_e);

}