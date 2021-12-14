#include <stdio.h>
#define max 100
int main()
{
    char ten[max] = "Hoang Vu ";
    int count =0;
    int i = 0;
    while (1)
    {
        if(ten[i] == '\0')
        {
            break;
        }
        i++;
        count++;
    }
    printf("count = %d", count);
}