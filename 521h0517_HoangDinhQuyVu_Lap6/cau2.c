#include <stdio.h> 

long sum_factorial(int n)
{   
    if(n == 0) return 1;

    return n * sum_factorial(n - 1);
}
int main()
{
    long result = sum_factorial(16);
    printf("result = %ld", result);

    return 0;
}