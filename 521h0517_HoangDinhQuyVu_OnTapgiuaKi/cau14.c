#include <stdio.h>
#include <math.h>

int reserveNumber(int x)
{   
    int a = 0, count = 1;
    int y = x;
    
    while (y >= 10)
    {
        y = y / 10;
        count *= 10;
    }

    y = 0;
    while (x > 0)
    {
        a = x % 10;
        y = y + a * count;
        x = x / 10;
        count = count / 10;
    }
    

    return y;
}

int perfectNumber(int x)
{
    int a = x / 2;
    int sum = 0;

    for (int i = 1; i <= a; i++)
    {
        if(x % i == 0)
        {
            sum += i;
        }
    }
    if (sum == x)
    {
        return 1;
    }
    return 0;
}

int kiemTraSoNguyenTo(int x)
{
    int a = x / 2;
    for (int i = 2; i <= a; i++)
    {
        if(x % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int checkArmstrong(int x)
{
    int count = 1;
    int y = x;
    while (y > 10)
    {
        y = y / 10;
        count++;
    }
    int z = x;
    int sum = 0;
    int a = 0;
    while (z > 0)
    {
        a = z % 10;
        sum = sum + pow(a, count);

        z = z / 10;
    }
    
    if(sum == x)
    {
        return 1;
    }

    return 0;
}
int main()
{
    int x;
    printf("nhap x = ");
    scanf("%d", &x);
    int count = 1;

    while (x <= 0)
    {   if(count <= 5)
        {
            printf("lan %d - nhap x =", count);
            scanf("%d", &x);
            count++;
        }
        else return 0;
    }


    int result  = reserveNumber(x);
    printf("so bi dao: %d\n", result);
    printf("\n");

    int result_b = perfectNumber(x);
    printf("so %d hoan hao khong? %d\n", x, result_b);
    //

    if(result == x)
    {
        printf("%d la so xung\n", x);
    } 
    else
        {
            printf("%d khong la so xung\n", x);
        }
    
    printf("\n\n");
    //
    int check = kiemTraSoNguyenTo(x);
    if(check == 1)
    {
        printf("%d la so nguyen to", x);
    }
    else
        {   
            printf("%d khong la so nguyen to\n", x);

            for (int i = 2; i < x; i++)
            {   
                int a = kiemTraSoNguyenTo(i);
                if(a == 1)
                {
                    printf("%d ", i);
                }
            }
            
        }        

    //caue   

    int check_a = checkArmstrong(x);

    if(check_a == 1)
    {
        printf("%d la so armstrong", x);
    }
    else
    {
        printf("%d khong la so armstrong", x);
    }

    return 0; 
}
