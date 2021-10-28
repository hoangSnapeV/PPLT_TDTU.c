#include <stdio.h>
#define FAhrenheit 33.8

int convertTemperature()//bài 5
{   
    float a;
    printf("input, do c =");
    scanf("%f", &a);
    float b = a * FAhrenheit;
    printf("%.2f C = %.2f F\n", a, b);

}
int main()
{
    convertTemperature();
}