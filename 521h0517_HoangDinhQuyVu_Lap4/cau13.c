#include <stdio.h>
#include <stdlib.h>
#define max_ele 20

void print_array(int* a, int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%d  ", a[i]);

    }
    printf("\n");
}

void printOdd_Even(int a[], int n)
{
    int* odd = calloc(max_ele, sizeof(int));
    int* even = calloc(max_ele, sizeof(int));
    int index_odd = 0, index_even = 0;

    for(int i = 0; i < n; i++)
    {
        if(a[i] % 2 == 0)
        {
            even[index_even] = a[i];
            index_even++;
        } else 
            {
                odd[index_odd] = a[i];
                index_odd++;
            }       
    }
    print_array(odd, index_odd);
    print_array(even, index_even);

}

int main()
{

    int a[] = {22, 3 , 5, 7 , 9 , 14, 8};
    int n = sizeof(a) / sizeof(int);

    print_array(a, n);
    printOdd_Even(a, n);


    return 0;
}