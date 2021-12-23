#include <stdio.h>

float sum_chuoi(int n, float i)
{
    if(i > n) return 0;

    return (i / 2) + sum_chuoi(n, i + 1);
}

int main()
{
    float result = sum_chuoi(5, 1.0);
    printf("sum = %.3f\n", result);
    return 0;
}