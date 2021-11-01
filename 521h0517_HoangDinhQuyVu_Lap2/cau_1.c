#include <stdio.h>
int SumOfEvens()//bai 1 giong bài 2(odd khác 1 tí)
{
    int n;
    int sum = 0;
    printf("Input n = ");
    scanf("%d", &n);
    while (n < 3)
        {
            printf("Input again, n = ");
            scanf("%d", &n);
        }
    
    for (int i = 2; i < n; i = i + 2)
        {  
            sum += i; 
        }

    return sum;

}
int main()
{
    int result = SumOfEvens();
    printf("Sum of evens = %d\n", result);
}