#include <stdio.h>
int checkMaxOf_2Numbers(int a, int b) 
{   
    int max = a;
    if (b > max)
    {
        max = b;
    }
    return max;
}
    
int main()
{
    //printf("");
    int result = checkMaxOf_2Numbers(1, 2);
    printf("max= %d\n", result);

    int result1 = checkMaxOf_2Numbers(2, 1);
    printf("max= %d\n", result1);
}