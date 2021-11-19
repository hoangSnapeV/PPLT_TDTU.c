#include <stdio.h>
#include <stdlib.h>

int* nhap_mang(int* n);
void in_mang(int *a, int n);
int main()
{
    int n;
    int* my_array = nhap_mang(&n);
    in_mang(my_array, n);


    return 0;
}

int* nhap_mang(int* n)
{   
    printf("nhap n: ");
    scanf("%d", n);

    int* a = calloc(*n, sizeof(int));

    for (int i = 0; i < *n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    return a;
}

// nhap mang
void in_mang(int* a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}