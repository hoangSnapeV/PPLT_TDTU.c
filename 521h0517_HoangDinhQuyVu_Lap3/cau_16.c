#include <stdio.h>
#include <math.h>
int checkArmstrong(int m)// bai 6
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
        return 1;
    } else  
        {
            return 0;
        }
}

void printAllArmstrongNumbers(int m)
{   
    
    for (int i = 2; i < m; i++)
    {
        int result = checkArmstrong(i);
        if (result == 1)
        {
            printf("%d  ", i);
        }
    }
}
int main()
{   
    int m;
    printf("Enter any number = ");
    scanf("%d", &m);
    while (m < 3)
    {
        printf("Input again, m = ");
        scanf("%d", &m);
    }
    printAllArmstrongNumbers(m);
   
}