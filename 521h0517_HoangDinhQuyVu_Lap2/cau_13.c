#include <stdio.h>
#include <math.h>
void checkArmstrong(int m)// bai 6
{
    int count = 0;
    int sum = 0, middle = 0;
    int number = 1;

    number = m;
    while (number != 0)
    {
        number = number / 10;
        count++;

    }
    
    sum = pow(m % 10, count); 
    number = m;
    while (number != 0)
    {
        number = number / 10;
        
        middle = number % 10;
        sum = sum + pow(middle, count);   
    }
    if(sum == m)
    {
        printf("Number is a Armstrong");
    } else  
        {
            printf("Number is not a Armstrong");
        }
}
int main()
{   
    int m;
    printf("Enter any number = ");
    scanf("%d", &m);
    checkArmstrong(m);
   
}