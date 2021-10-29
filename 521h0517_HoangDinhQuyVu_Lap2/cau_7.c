#include <stdio.h>

int ProductOfDigits(int m)// bai 6
{
    int firstDigit = 0;
    int result = 1, middle = 0;
    

    firstDigit = m;
    result = m % 10;

    while (firstDigit >=10)
    {
        firstDigit = firstDigit / 10;
        
        if (firstDigit >= 10)
        {
            middle = firstDigit % 10;
            result *= middle;
        }         
    }
    result *= firstDigit;
    return result;   
}
int main()
{   
    int m;
    printf("Enter any number = ");
    scanf("%d", &m);
    int result = ProductOfDigits(m);
    printf("Result = %d", result); 
}