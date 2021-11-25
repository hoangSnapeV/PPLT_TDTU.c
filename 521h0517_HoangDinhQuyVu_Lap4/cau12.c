#include <stdio.h>
#include <stdlib.h>


void print_array(int* a, int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%d  ", a[i]);

    }
    printf("\n");
}

int* connectTwoArray(int a[], int b[], int n, int m)
{   
    int x = n + m;
    int* c = calloc(x, sizeof(int));
    int index = 0;
    for (int i = 0; i < n; i++)
    {
        c[index] = a[i];
        index++;
    }
    for (int i = 0; i < m; i++)
    {
        c[index] = b[i];
        index++;
    }

    return c;
}

int main()
{
    int a[] = {1, 2, 3, 10};
    int b[] = {4, 5, 6, 7, 8, 9};

    int n = sizeof(a) / sizeof(int);
    int m = sizeof(b) / sizeof(int);
    int ar;
    print_array(a, n);
    print_array(b, m);
    //int* third = 
    int* arr = connectTwoArray(a, b, n, m);
    print_array(arr, n + m);

    return 0;
}