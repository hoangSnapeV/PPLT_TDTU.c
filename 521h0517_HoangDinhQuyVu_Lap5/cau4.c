#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

char* chuan_hoa(const char name[])
{
    int n = strlen(name);
    char* output = calloc(n, sizeof(char));

    int index = 0;
//"   hoang dinh quy   vu  "
    for(int i = 0; i < n; i++)
    {   
        char x = name[i];
        if(x != ' ')
        {
            
            if(index == 0 || output[index - 1] == ' ')
            {
                output[index] = toupper(x);
            } else
                {
                    output[index] = tolower(x);
                }

            index++;
        } else if(index != 0 && name[i + 1] != ' ' && i < n - 1)
            {
                output[index] = x;
                index++;
            }
    }
    output[index] = '\0';

    return output;

}
int main()
{
    char name[] = "   hoang dinh quy   vu  ";
    char* format_right = chuan_hoa(name);

    printf("'%s' - %lu\n", name, strlen(name)); 
    printf("'%s' - %lu\n", format_right, strlen(format_right));

    return 0;
}