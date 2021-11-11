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
int checkPrimeNumber_c2(int m);
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
    int result = checkPrimeNumber_c2(m);
    printf("number = %d co phai là prime number ? : %d", m, result);
    
}
int checkPrimeNumber_c2(int m)
{
    int n = m / 2;
    int count = 0;

    for (int i = 2; i <= n; i++)
    {
        if (m % i == 0)
        {
            return 0;
        }
        
    }
    return 1;
}