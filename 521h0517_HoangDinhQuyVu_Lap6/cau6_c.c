#include <stdio.h>

long sum_factorial(int n)
{   
    if(n == 0) return 1;

    return n * sum_factorial(n - 1);
}

long sum_chuoi(int n, int i)
{
    if(i > n) return 0;

    return sum_factorial(i) + sum_chuoi(n, i + 1);
}

int main()
{
    long result = sum_chuoi(10, 1);
    printf("sum = %ld\n", result);
    return 0;
}