#include <stdio.h>
#include <stdlib.h>

void in_mang(int *a, int n);
int* connectTwoArray(int a[], int b[], int n, int m);

int main()
{
    
    int a[] = {9, 8, 7, 6, 5, 4};
    int b[] = {3, 2, 1, 0};
    //printf("%d\n\n", sizeof(b)); deu lay phan tu nhan 4. b co 4 pt * 4. sizeof(int) = 4.
    int n = sizeof(a) / sizeof(int);
    int m = sizeof(b) / sizeof(int);

    int* arr = connectTwoArray(a, b, n, m);

    in_mang(a, n);
    in_mang(b, m);    
    in_mang(arr, n + m);

    return 0;
}

// nhap mang
void in_mang(int* a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int* connectTwoArray(int a[], int b[], int n, int m)
{
    int* c = calloc(n + m, sizeof(int));

    for (int i = 0; i < n; i++)
    {
        c[i] = a[i]; 
    }
    for (int i = 0; i < m; i++)
    {
        c[n + i] = b[i]; 
    }
    
    return c;
}