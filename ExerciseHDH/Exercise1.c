#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char ** argv) {

    if (argc > 2)
    {
        printf("Co qua nhieu doi so");
        return 0;
    }

    int sum = 0;
    int n;
    int result = check(argv[1]);

    if (result)
    {
        n = atoi(argv[1]);
    } else
        {
            return 0;
        }
    
    
    if (n > 0)
    {
        for (int i = 1; i < n; i++)
        {
            sum += i;
        }
        printf("Sum = %d", sum);
    } else
        {
            printf("Doi so khong phai la so nguyen duong");
        }

    return 0;
  
}

int check(char name[]) {
    int n = strlen(name);
    for (int i = 0; i < n; i++)
    {
        if (isdigit(name[i]) == 0) 
        {
            return 0;
        }
        
    } 
    return 1;
}