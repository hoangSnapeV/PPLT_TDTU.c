#include <stdio.h>
int sequential_search(int s1[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if(s1[i] == key) return i;

    }
    
    return -1;
}
int main()
{
    int s1[] = {1, 3, 5, 20 , 60 , 70 , 81, 99};
    int n = sizeof(s1) / sizeof(int);
    int key = 20;

    int index = sequential_search(s1, n, key);
    printf("index = %d\n", index);
    return 0;
}