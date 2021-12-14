#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int* find_all(char input[], int key, int* n)
{
    int count = 0;
    for (int i = 0; i < strlen(input); i++)
    {
        if(input[i] == key) count++;
    }
    
    if(count == 0) return NULL;

    *n = count;
    
    int* result_all = calloc(count, sizeof(int));
    int index = 0;

    for (int i = 0; i < strlen(input); i++)
    {
        if(input[i] == key) 
        {
            result_all[index] = i;
            index ++;
        }
    }
    
    return result_all;
}
int main()
{
    char input[100] = "hom nay la ngay thu namnnnn";

    int n;
    int* result = find_all(input, 'n', &n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", result[i]);
    }
    
    return 0;
}