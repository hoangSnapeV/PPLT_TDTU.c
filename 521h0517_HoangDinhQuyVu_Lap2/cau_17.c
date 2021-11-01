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
void allPerfectNumbers(int m)
{   
    int j = 1;
    while (j < m)
    {   
        int result = checkPerfectNumber(j);
        if (result == 1)
        {
            printf("%d\n", j);
        }
        j++;
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

    
    allPerfectNumbers(m);

}