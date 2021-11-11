#include <stdio.h>
#include <math.h>

int reverseNumber(int m) // bai 5
{
    int firstDigit = 0, lastDigit = 0;
    int a = 1;
    int n = 0, middle = 0;
    
    n = (int) log10(m);

    for (int i = 1; i <= n; i++)
    {
        a *= 10;
    }

    firstDigit = m;
    lastDigit = m % 10; 

    m = lastDigit * a;

    while (firstDigit >=10)
    {
        firstDigit = firstDigit / 10;
        
        if (firstDigit >= 10)
        {
            middle = firstDigit % 10;
            a = a / 10;
            m = m + a * middle;
        }         
    }
    m = m + firstDigit;
    
    return m;
    
}
int main()
{   
    int m;
    printf("Enter any number = ");
    scanf("%d", &m);
    while (m > 1000000)
        {
            printf("Input again, m = ");
            scanf("%d", &m);
        }
    

    int result = reverseNumber(m);
    printf("After reverseNumber number = %d\n", result);

}
