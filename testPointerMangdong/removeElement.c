#include <stdio.h>
#include <stdlib.h>

int* removeOneElement(int a[], int n, int key, int* x);
void print_array(int* a, int n);


int main()
{
    int a[] = {1, 3, 5, 3, 7, 11, -11, 3, 22, 16, 3};
    int n = sizeof(a) / sizeof(int);
    int x;

    print_array(a, n);
    int* arr = removeOneElement(a, n, 3, &x);
    print_array(arr, x);


    return 0;
}

int* removeOneElement(int a[], int n, int key, int* x)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if(a[i] == key) 
        {
        count++;
        }
    }

    int eleArr = n - count;
    //printf("x = %d", eleArr);
    int* c = calloc(eleArr, sizeof(int));
    *x = eleArr;
    int index = 0;

    for (int i = 0; i < n; i++)
    {
        if(a[i] != key)
        {
            c[index] = a[i];
            //printf("index = %d  c[index] = %d\n", index, c[index]);
            index++;

        }
    }

    return c;
}

void print_array(int* a, int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%d  ", a[i]);

    }
    printf("\n");
}
