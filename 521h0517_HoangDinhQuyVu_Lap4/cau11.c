#include <stdio.h>
#include <stdlib.h>
#define max_el 50

void print_array(int* a, int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%d  ", a[i]);

    }
    printf("\n");
}

int* dele_allDulpi(int a[], int n, int* x)
{   
    int i = 0, j = 0, k = 0;
    for ( i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if(a[i] == a[j])
            {
                for(k = j; k < n - 1; k++)
                {
                    a[k] = a[k + 1];
                }

                n--;
                
                j--;
                //printf("n = %d ,k = %d , j = %d, i = %d ,a[%d] = %d, a[%d] = %d\n", n, k, j, i, i, a[i], j, a[j]);
            }
        }
        
    }
    *x = n;
    
    int * c = a;
    return c;
    
}
//in mang

void count_frequency(int a[], int c[], int n, int x)
{
    int count = 0;

    for(int i = 0; i < x; i++)
    {   
        int c0 = c[i];
        
        for(int j = 0; j < n; j++)
        {   
            if(c0 == a[j])
            {
                count++;
            }
        }
        printf("%d lap lai %d lan\n", c0, count);
        count = 0;
    }
}
int main()
{
    int a[max_el] = {22, 16 , 4, 3, 22, 3, 4, 22};
    int n = 8;
    int x;
    print_array(a, n);

    int* arr = dele_allDulpi(a, n, &x);
    print_array(arr, x);
    printf("\n");

    count_frequency(a, arr, n, x);
    
    
    return 0;
}

