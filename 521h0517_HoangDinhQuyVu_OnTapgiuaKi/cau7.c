#include <stdio.h>
#include <math.h>

int main()
{
    int x;
    printf("nhap x = ");
    scanf("%d", &x);

    int y1 = 2 * pow(x, 3) + 5 * x * x + 7 * x + 15;
    printf("y1 = %d\n", y1);

    float y2 = pow(sin(x), 2) + pow(cos(2 * x), 2) + pow(tan(x * 3), 2);
    printf("y2 = %.2f\n", y2);

    int y3 = pow(x + 10, x + 5);
    printf("y3 = %d\n", y3);

    float y4 = 3 * pow(exp(1), cos(x +1));
    printf("y4 = %.2f\n", y4);

    float y5 = log10(x + 100);
    printf("y5 = %.2f\n", y5);
    return 0;
}