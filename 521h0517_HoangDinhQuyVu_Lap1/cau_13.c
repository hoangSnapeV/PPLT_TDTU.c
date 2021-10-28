#include <stdio.h>
int CalculatGrade(float a, float b, float c, float d, float e)// bai 13
{
    float result = (a + b + c + d + e) / 5.0;
    printf("Average of grade = %.2f\n", result);
    if (result > 90)
        {
            printf("Student get Grade A\n");
        } else if (result > 80)
            {
                printf("Student get Grade B\n");
            } else if (result > 70)
                {
                    printf("Student get Grade C\n");
                } else if (result > 60)
                    {
                        printf("Student get Grade D\n");
                    } else if (result > 40)
                        {
                            printf("Student get Grade E\n");
                        } else 
                            {
                                printf("Student get Grade F\n");
                            }
    printf("\n");
    return 0;
}
int main()
    {
    int a, b, c, d, e;
    printf("Input Grade of Physics = ");
    scanf("%d", &a);
    printf("Input Grade of Chemistry = ");
    scanf("%d", &b);
    printf("Input Grade of Biology = ");
    scanf("%d", &c);
    printf("Input Grade of Mathematics = ");
    scanf("%d", &d);
    printf("Input Grade of Computer = ");
    scanf("%d", &e);

    CalculatGrade(a, b, c, d, e);
    }