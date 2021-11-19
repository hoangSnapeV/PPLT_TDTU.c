#include <stdio.h>

void in_mang(int a[], int* n)
{
    for (int i = 0; i < *n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void reverseArray(int a[], int n)
{
    int x = n / 2;

    for(int i = 0; i < x; i++)
    {   
        n = n - 1;

        int b = a[i];
        a[i] = a[n];
        a[n] = b;
        
    }
}
int main()
{
    int a[] = {22, 16 , 3, 2, 1, 4};
    int n = sizeof(a) / sizeof(int);

    in_mang(a, &n);
    
    reverseArray(a, n);
    in_mang(a, &n);

    return 0;
}