#include <stdio.h>
#include <string.h>

int main()
{
    char s1[100];
    char s2[100];

    printf("nhap s1: ");
    fgets(s1, 100, stdin);
    s1[strlen(s1) - 1] = '\0';

    printf("nhap s2: ");
    gets(s2);
    s2[strlen(s2) - 1] = '\0';

    printf("s1 = %s\n", s1);
    printf("s2 = %s\n", s2);

    int n1 = strlen(s1);
    int n2 = strlen(s2);

    s1[n1] = ' ';
    for (int i = 0; i < n2; i++)
    {
        s1[n1 + i + 1] = s2[i];
    }

    printf("\ns1 = %s", s1);
    

    return 0;
}