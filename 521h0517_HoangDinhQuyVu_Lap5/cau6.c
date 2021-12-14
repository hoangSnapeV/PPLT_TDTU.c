#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int find_chara(char s1[], char key)
{
    int count = 0;
    for(int i = 0; i < strlen(s1); i++)
    {
        if(s1[i] == key)
        {
            return i;
        }
    }

    return -1;
}
int main()
{
    char s1[100];

    printf("nhap a string: ");
    
    fgets(s1, 100, stdin);
    s1[strlen(s1) - 1] = '\0';

    int lengh = strlen(s1);
    //printf("len = %d", lengh);
    //printf("%d", s1[0]);

    int result = find_chara(s1, 'k');
    printf("\nresult = %d", result);



    return -1;
}