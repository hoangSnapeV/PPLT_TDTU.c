#include <stdio.h>

int checkAngles(float a, float b, float c) // bai 12
{
    float sum3angles= a + b + c;
    int dk1 = a != 0 && b != 0 && c != 0;
    if (sum3angles == 180 && dk1)
        {   
            printf("A triangle is True\n");
        } else 
            {
            printf("A triangle is False\n");
            }
    return 0;
}     
int main()
{
    float a, b, c;
    printf("input angle 1= ");
    scanf("%f", &a);
    printf("input angle 2= ");
    scanf("%f", &b);
    printf("input angle 3= ");
    scanf("%f", &c);
    
    checkAngles(a, b, c);

}