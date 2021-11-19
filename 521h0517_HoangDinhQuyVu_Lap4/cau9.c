#include <stdio.h>

int count_duplNum(int a[], int* n)
{   
    int count = 0;
    for (int i = 0; i < *n; i++)
    {
        for (int j = i + 1; j < *n; j++)
        {   
            if(a[i] == a[j])
            {
                count++;
                break;
            }
        }
        
    }

    return count;
    
}

int main()
{   //22, 3, 4
    int a[] = {22, 22, 16 , 3, 3, 22, 4, 4, 4, 2, 1, 4};
    int n = sizeof(a) / sizeof(int);

    int result = count_duplNum(a, &n);
    printf("count = %d", result);
    return 0;
}