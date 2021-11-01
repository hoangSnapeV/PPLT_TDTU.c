#include <stdio.h>
int checkPrimeNumber(int m)
{   
    int dk1 = (m == 3) || (m == 5) || (m == 7) || (m == 2);
    if (m == 1)
    {
        printf("%d is not prime number", m);
        return 0;
    }
    if (dk1 && m < 10)
    {   
        printf("%d is prime number", m);
    } else 
        {   
            for(int i = 2; i <= 9; i++)
            {
                int dk2 = (m % i) == 0;
                if (dk2)
                {
                    printf("%d is not prime number", m);
                    return 0;
                }
            }
            printf("%d is prime number", m);
        }
}
int main()
{
    int m;
    printf("Enter any number = ");
    scanf("%d", &m);
    while (m < 1)
        {
            printf("Input again, m = ");
            scanf("%d", &m);
        }
    checkPrimeNumber(m);
    
}