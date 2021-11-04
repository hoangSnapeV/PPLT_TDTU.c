#include <stdio.h>

void checkPerfectNumber(int m)
{   
    int sum = 0;
    for (int i = 1; i < m; i++)
    {
        if ((m % i) == 0)
        {
            sum += i;
        }
    }
    if (sum == m)
    {
        printf("%d is a perfect number", m);
    } else
        {
            printf("%d is not a perfect number", m);
        }
}
int main()
{
    int m;
    printf("Enter any number = ");
    scanf("%d", &m);
    while (m > 10000000)
    {
        printf("Input again, m = ");
        scanf("%d", &m);
    }

    checkPerfectNumber(m);
    
}