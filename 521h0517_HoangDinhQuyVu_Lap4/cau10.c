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

void dele_allDulpi(int a[], int n)
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
    

    print_array(a, n);
    
}
//in mang

int main()
{
    int a[max_el] = {22, 16 , 4, 3, 22, 3, 4, 22};
    int n = 8;
    print_array(a, n);

    dele_allDulpi(a, n); 
    
    
    return 0;
}