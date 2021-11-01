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
int convertDecToBin(int n)
{   
    int a = 0, bin = 0, b = 0;
    
    for (int i = 16; i >= 0; i--)
    {
        a = pow(2, i);
        
        if (n >= a)
        {
            n = n - a;
            bin += pow(10, i);
        }
    }
    int afterbin = 0;
    for (int j = -1; j >= -16; j--)
    {
        b = pow(2, j);
        if (n >= b)
        {
            n = n - b;
            afterbin += pow(10, j);
        }


    }
    return bin;
}

int main()
{   
    int result = convertDecToBin(223);
    printf("result = %d\n", result);
    return 0;
}

