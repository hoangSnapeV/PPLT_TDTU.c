#include <stdio.h>

int searchElement(int a[], int n, int key)
{
    
    for (int i = 0; i < n; i++)
    {
        if(a[i] == key)
        {
            return 1;
        }
    }

    return 0;
}
int check(int value, int key)
{
    if(value)
    {
        printf("co %d in array");
    } else  
        {
            printf("Khoong co %d in array");
        }
}
int main()
{
    int a[] = {22, 3 , 5, 7 , 9 , 14, 8};
    int n = sizeof(a) / sizeof(int);

    int key = 16;
    int result = searchElement(a, n, key);
    check(result, key);
    
    return 0;

}