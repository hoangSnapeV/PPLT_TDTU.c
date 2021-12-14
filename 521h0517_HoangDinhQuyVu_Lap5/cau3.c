#include <stdio.h>
#include <string.h>

int main()
{
    char name[100];

    printf("Enter your name: ");
    gets(name);

    printf("%s", name);

    int leng = strlen(name);
    int i = 0;

    printf("\nFirst name: ");
    while (name[i] != ' ' && i < leng)
    {
        printf("%c", name[i]);
        i++;
    }

    i = leng - 1;
    printf("\nLast name: ");
    while (name[i] != ' ')
    {
        i--;
    }
    i++;
    while (name[i] != ' ' && i < leng)
    {
        printf("%c", name[i]);
        i++;
    }

    return 0;
    
}