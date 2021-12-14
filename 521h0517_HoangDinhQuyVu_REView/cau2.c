#include <stdio.h>

int reversedNumber(int n)
{   
    int after = 0;
    int y = n;
    int count = 1;

    while(y >= 10)
    {
        y = y / 10;
        count *= 10;
    }
    //printf("%d", count);
    y = 0;

    while (n != 0)
    {
        y += (n % 10) * count;
        n = n / 10;
        count /= 10;
    }
    
    return y;

}



int main()
{
    int n = 72927;
    int result = reversedNumber(n);
    
    if (n == result)
    {
        printf("%d is palindrome number", n);
    } else printf("%d is not palindrome number", n);
    
}