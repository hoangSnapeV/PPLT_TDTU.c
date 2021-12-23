#include <stdio.h>
#include <math.h>
float sum_chuoi(int n, float i)
{
    if(i > n) return 0;

    return (sqrt(i)) + sum_chuoi(n, i + 1);
}

int main()
{
    float result = sum_chuoi(10, 1.0);
    printf("sum = %.3f\n", result);
    return 0;
}