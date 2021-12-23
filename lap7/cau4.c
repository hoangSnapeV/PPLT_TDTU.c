#include <stdio.h>

void print_arry(int s1[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", s1[i]);
    }
    
    printf("\n");
}

void bubble_sort(int s1[], int n)
{
    for(int i = n - 2; i >= 0; i--)
    {
        for (int j = 0; j <= i; j++)
        {
            if(s1[j] < s1[j + 1])
            {
                int tmp = s1[j];
                s1[j] = s1[j + 1];
                s1[j + 1] = tmp;
            }
        }
        
    }
}

int main()
{
    int s1[] = {33, 4, 22, 16, 1, 5, 11, 2, 10};
    int n = sizeof(s1) / sizeof(int);

    print_arry(s1, n);
    bubble_sort(s1, n);
    print_arry(s1, n);
    return 0;

}