#include <stdio.h>

int checkPerfectNumber(int m)
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
        return 1;
    } else
        {
            return 0;
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

    int result = checkPerfectNumber(m);
    if (result)
    {
        printf("%d la perfect number", m);
    } else
        {
            printf("%d khong la perfect number", m);
        }   
    
    return 0;
    
}