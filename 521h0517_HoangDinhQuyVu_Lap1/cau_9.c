#include <stdio.h>
int comparisonThreeNumbers(int a, int b, int c)// bai 9
{
    int max = a;
    if (max < b)
        {
            max = b;
        }
    if(max < c)
        {
            max = c;
        }
    return max;
}
int main()
{
    int result = comparisonThreeNumbers(1, 2, 3);
    printf("max = %d\n", result);
    int result1 = comparisonThreeNumbers(3, 2, 1);
    printf("max = %d\n", result1);
    int result2 = comparisonThreeNumbers(3, 2, 1);
    printf("max = %d\n", result2);
}