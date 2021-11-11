#include <stdio.h>

int SumofDigits(int m)// bai 6
{
    int firstDigit = 0;
    int sum = 0, middle = 0;
    

    firstDigit = m;
    sum = m % 10;

    while (firstDigit >=10)
    {
        firstDigit = firstDigit / 10;
        
        if (firstDigit >= 10)
        {
            middle = firstDigit % 10;
            sum += middle;
        }         
    }
    sum += firstDigit;
    return sum;   
}
int main()
{   
    int m;
    printf("Enter any number = ");
    scanf("%d", &m);
    int result = SumofDigits(m);
    printf("sum = %d", result); 
}