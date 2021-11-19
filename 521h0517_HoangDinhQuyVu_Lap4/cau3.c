#include <stdio.h>

int minNumber(int a[], int n)
{   
    int min_num = a[0];
    for (int i = 1; i < n; i++)
    {
        int x = a[i];

        if (x < min_num)
        {
            min_num = x;
        }
    }
    return min_num;
}

int main()
{
    int a[] = {1, 2, 4, 222, -44 ,6, 10, 100, -66};
    int n = sizeof(a) / sizeof(int);

    int result = minNumber(a, n);
    printf("min = %d", result);

}   