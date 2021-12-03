#include <stdio.h>
#include <math.h>

int main()
{
    double R, x0, y0;
    double xA, yA;

    printf("Nhap x0: ");
    scanf("%lf", &x0);

    printf("Nhap y0: ");
    scanf("%lf", &y0);

    printf("Nhap R: ");
    scanf("%lf", &R);

    printf("Nhap xA: ");
    scanf("%lf", &xA);

    printf("Nhap yA: ");
    scanf("%lf", &yA);

    double distance_1 = sqrt( (xA - x0) * (xA - x0) +  (yA - x0) * (yA - x0));
    double distance = sqrt(pow(xA - x0, 2) + pow(yA - y0, 2));
    if(distance < R)
    {
        printf("nam trong");
    }

    if(distance == R)
    {
        printf("nam tren");
    }

    if(distance > R)
    {
        printf("nam ngoai");
    }
    return 0;
}