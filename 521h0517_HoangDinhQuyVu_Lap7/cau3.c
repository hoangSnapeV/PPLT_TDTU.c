#include <stdio.h>
void print_arry(int s1[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", s1[i]);
    }
    
    printf("\n");
}
void selection_sort(int s1[], int n)
{   
    
    for (int i = 0; i < n - 1; i++)
    {
        int max_index = i;
        int max = s1[i];
        for (int j = i; j < n; j++)
        {
            if(max < s1[j]) 
            {
                max_index = j;
                max = s1[j];
            }
            
        }

        int tmp = s1[i];
        s1[i] = s1[max_index];
        s1[max_index] = tmp; 

    }
    
}
int main()
{
    int s1[] = {33, 22, 16, 1, 5, 11, 2, 10};
    int n = sizeof(s1) / sizeof(int);

    print_arry(s1, n);
    selection_sort(s1, n);
    print_arry(s1, n);
    
    return 0;
}