#include <stdio.h>
int theCalculation(int a, int b)//bài 2
    {   
        printf("\nSum of 2 numbers= %d", a + b);
        printf("\nSubtraction of 2 numbers= %d", a - b);
        printf("\nMultiplication of 2 numbers= %d", a * b);
        if (b != 0)
        {   
            float thuong =  a* 1.0 / b;
            printf("\nDivision of 2 numbers= %.2f", thuong);
        } else
            {
                printf("\nDivision is not True");
            }
    }
int main()
{   
    int a, b;
    printf("\nPlease, Input first: ");
    scanf("%d", &a);
    printf("\nPlease, Input second: ");     
    scanf("%d", &b);
    theCalculation(a, b);
}