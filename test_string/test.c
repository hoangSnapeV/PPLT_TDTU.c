#include <stdio.h>

int binary_search(int s1[] ,int n, int key, int left, int right)
{
    
    int mid = (left + right) / 2;

    if (s1[mid] == key) return mid;
    if(left > right) return -1;
    if(s1[mid] < key)
    {
        left = mid + 1;
        return binary_search(s1, n, key , left, right);
    } 
    else {
        right = mid - 1;
        return binary_search(s1, n, key , left, right);
    }

}
int main()
{
    int s1[] = {1, 3, 5, 20 , 60 , 70 , 81, 99};
    int n = sizeof(s1) / sizeof(int);
    int key = 70;
    int left = 0;
    int right = n - 1;

    int index = binary_search(s1, n, key, left, right); //n = 7 
    printf("index = %d", index);

    return 0;
}