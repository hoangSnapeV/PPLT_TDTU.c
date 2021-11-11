#include <stdio.h>
int SumOfOdds(int n)
{
    int sum = 0;
    for (int i = 3; i < n; i = i + 2)
        {  
            sum += i; 
        }

    return sum;

}
int main()
{   
    int n;
    
    printf("Input n = ");
    scanf("%d", &n);
    while (n <= 0 )
        {
            printf("Input again, n = ");
            scanf("%d", &n);
        }

    int result = SumOfOdds(n);
    printf("Sum of odds = %d\n", result);
}