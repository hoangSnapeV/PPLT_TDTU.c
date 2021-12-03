#include <stdio.h>
#include <math.h>

int main()
{   
    int x, y;
    printf("nhap x = ");
    scanf("%d", &x);

    printf("nhap y = ");
    scanf("%d", &y);

    float s = (3 * pow(x, 3) * y - x * x * 1 / 2 + x * y * 1 / 5) * 6 * x * pow(y, 3) *1.0;
    printf("s = %.2f", s);

    return 0;
}
