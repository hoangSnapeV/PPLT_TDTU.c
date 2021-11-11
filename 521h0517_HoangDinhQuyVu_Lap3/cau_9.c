#include <stdio.h>
#include <math.h>

int swapFirstLast(int m) // bai 5
{
    int firstDigit = 0, lastDigit = 0;
    int a = 1;
    int n = 0;
    n = (int) log10(m);

    for (int i = 1; i <= n; i++)
    {
        a *= 10;
    }

    firstDigit = m;
    lastDigit = m % 10; 

    while (firstDigit >= 10)
        {
            firstDigit = firstDigit / 10;
        }

    if (firstDigit != lastDigit)
    {
        m = m - (firstDigit * a) - lastDigit;
        
        m = m + lastDigit * a + firstDigit;
    }

    return m;
    
}
int main()
{   
    int m;
    printf("Enter any number = ");
    scanf("%d", &m);

    int result = swapFirstLast(m);
    printf("After swap number = %d\n", result);

}
