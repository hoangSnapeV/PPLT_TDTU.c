#include <stdio.h>

int main()  
{   
    int d;
    printf("nhap d = ");
    scanf("%d", &d);

    int money = 0;
    if(d <= 1)
    {   
        money = d * 18000;
    } 
    else if(d <= 10)
        {
            money = 18000 + (d - 1) * 8000;
        }
        else if(d <= 30)
            {
                money = 18000 + 9 * 8000 + (d - 10) * 6000;
            } 
            else 
                {
                    money = 18000 + 9 * 8000 + 20 * 6000 + (d - 30) * 4000 ;
                }
                
    printf("money = %d", money);


    return 0;
}