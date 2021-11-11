#include <stdio.h>

int findFirstLast(int m) // bai 5
{
    int firstDigit = 0, lastDigit = 0;
    firstDigit = m;
    lastDigit = m % 10;  

    while (firstDigit >= 10)
        {
            firstDigit = firstDigit / 10;
        }
    
    printf("firstDigit = %d\n", firstDigit);
    printf("lastDigit = %d\n", lastDigit);
}
int main()
{   
    int m;
    printf("Enter any number = ");
    scanf("%d", &m);

    findFirstLast(m);

}
