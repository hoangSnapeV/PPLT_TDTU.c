#include <stdio.h>
long factorialOfNumber(int m)
{
    long result = 1;
    for (int i = 1; i <= m; i++)
    {
        result *= i;
    }
    return result;
}

int main()
{
    int m;
    printf("Enter any number = ");
    scanf("%d", &m);
    while (m < 0)
    {
        printf("Input again, m = ");
        scanf("%d", &m);
    }
    long result_1 = factorialOfNumber(m);
    printf("factorialOfNumber = %d", result_1);
}
