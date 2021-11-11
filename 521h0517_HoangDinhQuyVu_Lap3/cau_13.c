#include <stdio.h>
#include <math.h>
int checkArmstrong(int m)// bai 6
{
    int count = 0;
    int sum = 0, middle = 0;
    int number = m;

    
    while (number != 0)
    {
        number = number / 10;
        count++;

    }
    
    //sum = pow(m % 10, count); 
    number = m;// 171
    while (number != 0)// 171 17 1
    {   
        middle = number % 10;//1 7 1
        sum = sum + pow(middle, count);
        number = number / 10;//17 1 0
        
           
    }
    if(sum == m)
    {
        return 1;
    } else  
        {
            return 0;
        }
}
int main()
{   
    int m;
    printf("Enter any number = ");
    scanf("%d", &m);

    int result = checkArmstrong(m);
    if (result)
    {
        printf("%d la Armstrong number", m);
    } else
        {
            printf("%d khong la Armstrong number", m);
        }   
    
    return 0;
}