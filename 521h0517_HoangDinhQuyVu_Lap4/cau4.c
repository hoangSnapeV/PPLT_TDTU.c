#include <stdio.h>

int sumNumber(int a[], int n)
{   
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    return sum;
}

int main()
{
    int a[] = {1, 2, 3, 4, 5, 7};
    int n = sizeof(a) / sizeof(int);

    int result = sumNumber(a, n);
    printf("sum = %d", result);
    

}   