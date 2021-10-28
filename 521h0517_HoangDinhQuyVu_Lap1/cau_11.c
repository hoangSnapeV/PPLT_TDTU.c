#include <stdio.h>

int main()
{   char input;
    printf("Enter a character: ");
    scanf("%c", &input);
    
    int dk1 = (input >= '0' && input <= '9');
    int dk2 = (input >= 'a' && input <= 'z');
    int dk3 = (input >= 'A' && input <= 'Z');

    if (dk1 || dk2 || dk3)
        {
            printf("%c is a alphanumeric", input);
        } else 
            {
                printf("%c is not a alphanumeric", input);
            }
    return 0;
}