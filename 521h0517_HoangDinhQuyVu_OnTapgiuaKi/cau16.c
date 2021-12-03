#include <stdio.h>

int main()
{   
    int n;
    printf("nhap n = ");
    scanf("%d", &n);
    while (n <= 0)
    {
        printf("nhap sai, nhap lai = ");
        scanf("%d", &n);
    }
    

    float s = 0.0;
    float b = 1.0;
    for (float i = 2; i <= 2*n; i = i + 2)
    {   
        
        printf("i = %f", i);
        for (float j = 1; j <= i; j++)
        {
            b = b * j;
            
        }
        printf("b = %f", b);
        printf("\n");
        s = s + 1 / b;
        b = 1;
    }

    printf("s = %.6f", s);
    

    return 0;
}