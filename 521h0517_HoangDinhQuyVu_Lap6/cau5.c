#include <stdio.h>

int NumberOfDigits(int n)
{
    if(n < 10) return 1;   

    return NumberOfDigits(n / 10) + 1;

}
int main()
{   
    int count = 0;
    int result = NumberOfDigits(12341111);
    printf("dem = %d", result);
    return 0;
}