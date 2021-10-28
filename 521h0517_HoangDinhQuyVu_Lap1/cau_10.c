#include <stdio.h>
int checkNumber(int a) // bai 10 le chan
{
    if (a % 2 == 1 )   // % chia lay du and / chia lay nguyen 
        {
            printf("so %d is odd\n", a);
        } else 
            {
                printf("so %d is even\n", a);
            }
}

int main()
{
    checkNumber(88);
    checkNumber(99);
}
