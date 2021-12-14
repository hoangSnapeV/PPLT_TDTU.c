#include <stdio.h>
#include <string.h>

void str_connect(char s1[], char s2[], int position)
{
    int n1 = strlen(s1);
    int n2 = strlen(s2);
    int i;

    for(i = n1 + n2 + 2; i >= position + n2; i--)
    {
        s1[i] = s1[i - n2 - 1];
    }

    for (i = 0; i < n2; i++)
    {
        s1[position + i] = s2[i];
    }

    s1[position + n2] = ' ';
}

int main()
{
    char s1[100] = "Phuong Lap Trinh";
    str_connect(s1, "Phap ", 7);

    printf("%s", s1);
    return 0;
}