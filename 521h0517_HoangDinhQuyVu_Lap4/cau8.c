#include <stdio.h>

void in_mang(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void remove_array(int a[], int* n, int p)
{   
    for (int i = p + 1; i < *n; i++)
    {
        a[i - 1] = a[i];
    }

    *n = *n - 1;
}

int main()
{
    int a[] = {22, 16 , 3, 22, 4, 2, 1, 4};
    int n = sizeof(a) / sizeof(int);

    in_mang(a, n);

    remove_array(a, &n, 0);

    in_mang(a, n);

    return 0;
}

