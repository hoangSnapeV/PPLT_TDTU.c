#include <stdio.h>

int sum_mu(int n)
{
    if (n == 0) return 1;

    return 2 * sum_mu(n - 1);
}

int main()
{
    int result = sum_mu(15);
    printf("sum = %d\n", result);

    return 0;
}