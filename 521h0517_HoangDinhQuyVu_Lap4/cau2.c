#include <stdio.h>

int maxNumber(int a[], int n)
{   
    int max_num = a[0];
    for (int i = 1; i < n; i++)
    {
        int x = a[i];

        if (x > max_num)
        {
            max_num = x;
        }
    }
    return max_num;
}

int main()
{
    int a[] = {1, 2, 4, 222, 6, 10, 100};
    int n = sizeof(a) / sizeof(int);

    int result = maxNumber(a, n);
    printf("max = %d", result);

}   