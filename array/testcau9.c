#include <stdio.h>

int count_duplNum(int a[], int* n)
{   

    int b[100];
    
    int count = 0, index = 0 ;
    b[0] = 0;
    for (int i = 0; i < *n; i++)//{22, 22, 16 , 3, 3, 22, 4, 4, 4, 2, 1, 4};
    {
        int y = a[i];
        if(b[i] != 1)
        {
            for (int j = i + 1; j < *n; j++)
            {
                if(y == a[j])
                {   
                    b[j] = 1;
                    
                } else
                    {   
                        if (b[j] != 1)
                        {
                            b[j] = 0;
                        }
                    }

            }  
        }
        
        
    }
    
    for (int i = 0; i < *n; i++)
    {
        if (b[i] == 0
    }
    return count;
}

int main()
{   //22, 3, 4
    int a[] = {22, 22, 16 , 3, 3, 22, 4, 4, 4, 2, 1, 4};
    int n = sizeof(a) / sizeof(int);
    count_duplNum(a, &n);

    return 0;
}