#include <stdio.h>
#define Max_col 10
void in_mang(int a[][3], int *n, int *m)
{
    for (int i = 0; i < *n; i++)
    {
        for (int j= 0; j < *m; j++)
        {
            printf("%d ", a[i][j]);      
        }
        printf("\n");
    }
}

int numberMax_array(int a[][3], int n, int m)
{
    int max_num = a[0][0];

    for (int i = 0; i < n; i++)
    {
        for (int j= 0; j < m; j++)
        {
            int x = a[i][j];
            if(x > max_num)
            {
                max_num = x;
            }
        }
        
    }
    return max_num;
}

int main()
{   
    
    int n = 3, m = 3;
    int a[3][3] = {{1, 2, 3}, {4 , 11, 9}, {7, 8, 6}};

    in_mang(a, &n, &m);
    printf("\n");

    int result = numberMax_array(a, n, m);
    printf("max number = %d", result);
}

