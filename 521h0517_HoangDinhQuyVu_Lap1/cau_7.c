#include <stdio.h>

int checkYear(int year)
{
    int day = 0;
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        {   
            printf("Nam %d la nam nhuan\n", year);
        } else 
            {
                printf("Nam %d la nam khong nhuan\n", year);
            }
}

int main()
    {
        checkYear(1900);
        checkYear(2100);
    }