#include <stdio.h>
#include <string.h>
#define max 100
int main()
{
    char ten[max] = "Hoang Vu";
    
    int i = 0;
    int leng = strlen(ten);

    for(int j = 0; j < leng; j++)
    {
        printf("%c", ten[j]);
    }
    
    //printf("%d", leng);

    printf("\nafter reverse: ");
    for(int j = leng - 1; j >=0; j--)
    {
        printf("%c", ten[j]);
    }



    return 0;
}
