#include <stdio.h>
int binary_search(int s1[], int  n, int key)
{
    int left = 0;
    int right = n - 1;
    

    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (s1[mid] == key) return mid;
        if(s1[mid] < key) left = mid + 1;
        else right = mid -1;
    }
    return -1;
}
int main()
{
    int s1[] = {1, 3, 5, 20 , 60 , 70 , 81, 99};
    int n = sizeof(s1) / sizeof(int);
    int key = 5;

    int index = binary_search(s1, n, key); //n = 7 
    printf("index = %d", index);


}