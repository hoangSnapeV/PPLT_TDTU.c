#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define max 100
void vietThuong(char ten[])
{   
    
    for(int i = 0; i < n; i++)
    {
        putchar( tolower(ten[i]) );
    }
    
}
int main()
{   
    char ten[max];
    printf("nhap ten: ");
    fgets(ten, max , stdin);

    printf("ten ban vua nhap: ");

    ten[strlen(ten) - 1] = '\0';

    printf("'");
    fputs(ten, stdout);
    printf("'");

    int length = strlen(ten);
    printf("\ndo dai = %lu\n", length);

    vietThuong(ten);
    printf("\n");
    
}