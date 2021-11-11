#include <stdio.h>
int SumOfEvens(int n)//bai 1 giong bài 2(odd khác 1 tí)
{
    int sum = 0;
    
    for (int i = 2; i < n; i = i + 2)
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
    while (n <= 0)
        {
            printf("Input again, n = ");
            scanf("%d", &n);
        }
        
    int result = SumOfEvens(n);
    printf("Sum of evens = %d\n", result);
}