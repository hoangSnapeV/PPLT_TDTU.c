#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define max 10


int main()
{
    char ten[max];
    printf("nhap ten:");

    //scanf("%s", ten );
    //gets(ten); // k bảo mật với k được 
    fgets(ten, max, stdin);
    ten[strlen(ten) - 1] = '\0';

    //printf("\nten ban la: %s", ten);
    fputs(ten, stdout);
    printf("do dai %lu\n", strlen(ten));
    //strlen = độ dài đến \0 thì vì ậu mới dòng 16.
}