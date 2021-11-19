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

int* dele_dulElment(int a[], int n, int* x)
{
    int count = 0;
    int b[10];
    int index = 0;

    for (int  i = 0; i < n; i++)
    {   
        for (int j = i + 1; j < n; j++)
        {
            if(a[i] == a[j])
            {
                b[index] = a[j];
                index++;
                
            }
        }
    }

    printf("index = %d\n", index);
    print_array(b, index);
    int t = n - index;

    printf("\nx = %d", n);

    printf("\nmang = %d", t);

    int *c = calloc(t, 4);
    int in = 0;

    for (int i = 0; i < index; i++)
    {
        int y = b[i];
        for (int j = 0; i < n; j++)
        {
            if(y != a[j]);
            {
                c[in] = a[j];
                in++;
            }
        }   
    }
    
    return c;
    
}

//in mang

int main()
{
    int a[] = {22, 22, 16 , 3, 3, 22, 4, 4};
    int n = sizeof(a) / sizeof(int);
    print_array(a, n);

    int x;
    // int* arr = 
    dele_dulElment(a, n, &x);

    //print_array(arr, x);

    return 0;
}