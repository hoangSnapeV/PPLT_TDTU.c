#include <stdio.h>
#define Max 1000

void nhap_mang(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}
void print_mang(int a[], int n)
{   
    for (int i = 0; i < n; i++)
    {
       printf("%d ", a[i]); 
    }
    
}
int sumEven(int a[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if ((a[i] % 2) == 0)
        {
            sum += a[i];
        }
    }
    return sum;
}
int main()
{   
    int a[Max];
    int n;

    printf("nhap n: ");
    scanf("%d", &n);

    nhap_mang(a, n);
    print_mang(a, n);

    int result = sumEven(a, n);
    printf("\nsum of evens = %d\n", result);
    
    return 0;
}