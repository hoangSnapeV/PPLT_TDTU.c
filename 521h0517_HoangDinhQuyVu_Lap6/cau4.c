#include <stdio.h>

int sum_mu(int x, int n)
{
    if (n == 0) return 1;

    return x * sum_mu(x, n - 1);
}

int main()
{
    int result = sum_mu(5, 7);
    printf("sum = %d\n", result);

    return 0;
}