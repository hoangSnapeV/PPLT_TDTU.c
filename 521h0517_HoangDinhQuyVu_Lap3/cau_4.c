#include <stdio.h>

int SumOfRange(int n)//bai 4
{

    int sumRange = 0;
    
    for (int i = 2; i < n; i++)
    {  
        sumRange += i; 
    }

    return sumRange;

}

int main()
{
    int n;
    printf("Input n = ");
    scanf("%d", &n);

    while (n <= 0)
    {
        printf("Input again, n = ");
        scanf("%d", &n);
    }

    int result_1 = SumOfRange(n);
    printf("Sum of Range = %d\n", result_1);
}