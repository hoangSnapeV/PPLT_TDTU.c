#include <stdio.h>
int checkPrimeNumber(int m)
{   
    int dk1 = (m == 3) || (m == 5) || (m == 7) || (m == 2);
    if (m == 1)
    {
        return 0;
    }
    if (dk1 && m < 10)
    {   
        return 1;
    } else 
        {   
            for(int i = 2; i <= 9; i++)
            {
                int dk2 = (m % i) == 0;
                if (dk2)
                {
    
                    return 0;
                }
            }
            return 1;
        }
}
void printAllPrimeNumbers(int m)
    {
        for(int j = 2; j < m; j ++)
        {
            int result = checkPrimeNumber(j);
            if (result == 1)
            {
                printf("%d  ", j);
            }
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
    
    printAllPrimeNumbers(m);
    
}