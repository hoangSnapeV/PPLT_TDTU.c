#include <stdio.h>

long sum_factorial(int n)
{   
    if(n == 0) return 1;

    return n * sum_factorial(n - 1);
}

long tich_chuoi(int n, int i)
{
    if(i > n) return 1;

    return sum_factorial(i) * tich_chuoi(n, i + 1);
}

int main()
{
    long result = tich_chuoi(6, 1);
    printf("tich = %ld\n", result);
    return 0;
}