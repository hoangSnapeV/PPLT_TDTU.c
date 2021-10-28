#include <stdio.h>
float perimeterOfRactangle(float a, float b)// bài 3
    {   
        
        float perimeter = (a + b) * 2;
        float acreage = a * b;
        printf("perimeter = %.1f\n", perimeter);
        printf("acreage = %f\n", acreage);

    }
int main()
{   
    float a, b;
    printf("\nInput, legth of ractangle = ");
    scanf("%f", &a);
    printf("Input, wide of ractangle = ");
    scanf("%f", &b);
    perimeterOfRactangle(a, b);
}