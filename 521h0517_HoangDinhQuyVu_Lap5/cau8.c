#include <stdio.h>
#include <string.h>
int finde_index(char s1[], char s2[])
{
    int n1 = strlen(s1);
    int n2 = 1;

    for(int i = 0; i <= n1; i++)
    {
        if(s1[i] == s2[0])
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int result = finde_index("vay la tron nam ben nhau", "y");
    printf("s1= %s\n", "vay la tron nam ben nhau");
    printf("result = %d", result);

    return 0;
}