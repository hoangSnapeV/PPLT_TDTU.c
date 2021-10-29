#include <stdio.h>
int SumOfOdds()
{
    int n;
    int sum = 0;
    printf("Input n = ");
    scanf("%d", &n);
    while (n < 5)
        {
            printf("Input again, n = ");
            scanf("%d", &n);
        }

    for (int i = 3; i < n; i = i + 2)
        {  
            sum += i; 
        }

    return sum;

}
int main()
{
    int result = SumOfOdds();
    printf("Sum of odds = %d\n", result);
}