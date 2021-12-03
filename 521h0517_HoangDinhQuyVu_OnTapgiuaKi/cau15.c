#include <stdio.h>

void timUocchung(int x, int y)
{   
    int a = 0;
    if(x > y)
    {
        a = y / 2;
    } else a = x / 2;
    int max = 0;
    for(int i = 1; i <= a; i++)
    {   
        int dk1 = x % i == 0;
        int dk2 = y % i == 0;
        if (dk1 && dk2)
        {   
            printf("%d ", i);
        }
        
    }
    printf("\n");
}

int uocCHungMax(int x, int y)
{
    int a = 0;
    if(x > y)
    {
        a = y / 2;
    } else a = x / 2;

    int max = 0;
    for(int i = 1; i <= a; i++)
    {   
        int dk1 = x % i == 0;
        int dk2 = y % i == 0;
        if (dk1 && dk2)
        {   
            if(max < i)
            {
                max = i;
            }

        }
        
    }
    return max;
}

int boiCHungMax(int x, int y)
{
    int max = x * y;
    int a = 0;

    if (x < y)
    {
        a = x;
    } else a = y;

    for (int i = a; i < max; i++)
    {
        if (i % x == 0 && i % y == 0)
        {
            return i;
        }
        
    }
    
    return max;
}
int checkAmi(int x, int y)
{   
    int sum_x = 0, sum_y = 0;

    for (int i = 1; i <= (x / 2); i++)
    {
        if(x % i == 0)
        {
            sum_x += i;
        }
    }

    for (int i = 1; i <= (y / 2); i++)
    {
        if(y % i == 0)
        {
            sum_y += i;
        }
    }

    if(sum_x == y && sum_y == x)
    {
        return 1;
    }

    return 0;
    
}
int main()
{   
    int x, y;
    printf("nhap x = ");
    scanf("%d", &x);
    while (x < 0)
    {
        printf("nhap lai x = ");
        scanf("%d", &x);
    }
    
    printf("nhap y = ");
    scanf("%d", &y);
    while (y < 0)
    {
        printf("nhap lai y = ");
        scanf("%d", &y);
    }

    timUocchung(x, y);

    int result = uocCHungMax(x, y);
    printf("uoc max = %d\n", result);

    int result_c = boiCHungMax(x, y);
    printf("boi min = %d\n", result_c);

    int result_d = checkAmi(x, y);
    printf("phai la cap so amicable num khong? %d", result_d);


    return 0;
}