#include <stdio.h>


int main()
{
    int x;
    printf("nhap so gio = ");
    scanf("%d", &x);

    while (x < 2)
    {
        printf("nhap lai so gio = ");
        scanf("%d", &x);
    }
    
    int sum = 0;
    int a = 1;
    while (a != 0)
    {
        if(x == 2)
        {   
            sum = sum + 20000;
            a = 0;
        }
        else if(x <= 10)
            {   
                a = x - 2;
                sum = sum + 20000 + (x - 2) * 15000;
                a = 0;
            }
            else if (x <= 23)
            {   
                a = x - 10;
                sum = sum + 20000 + 8* 15000 + (x - 10) * 10000;
                a = 0;
            }else
                {   
                    if(x == 24)
                    {
                        sum = 200000;
                        a = 0;
                    } else
                        {
                            int y = x / 24;
                            sum = 200000 * y;
                            x = x - 24 * y;
                            a = 1;
                        }

                    
                }
        //printf("sum = %d\n", sum);
        
    }
    
        
    printf("sum = %d", sum);
}