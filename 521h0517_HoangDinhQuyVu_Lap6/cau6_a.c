#include <stdio.h>

int sum_chuoi(int n, int i)
{
    if(i > n) return 0;

    return (2 * i + 1) + sum_chuoi(n, i + 1);
}

int main()
{
    int result = sum_chuoi(11, 1);
    printf("sum = %d\n", result);
    return 0;
}