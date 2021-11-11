#include <stdio.h>

int countOfDigits(int m)// bai 8
{
    int count = 0;

    while (m > 0)
    {
        m = m / 10;
        count = count + 1;
        //printf("count= %d\n", count);
    }        
    return count;
}

int main()
{
    int m;

    printf("Enter any number = ");
    scanf("%d", &m);

    int result = countOfDigits(m);
    printf("result = %d", result);
}
