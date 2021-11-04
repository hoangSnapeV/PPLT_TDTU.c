#include <stdio.h>
#include <math.h>

int convertDecToBin(float n)
{   
    int a = 0, bin = 0;

    for (int i = 16; i >= 0; i--)
    {
        a = pow(2, i);
        
        if (n >= a)
        {
            n = n - a;
            bin += pow(10, i);
        }
    }
    
    return bin;
}

int main()
{   
    int n;
    printf("nhap n = ");
    scanf("%d", &n);

    int result = convertDecToBin(n);
    printf("result = %d\n", result);
    return 0;
}

