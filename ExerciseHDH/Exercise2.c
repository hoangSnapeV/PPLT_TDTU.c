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

    int n;
    
    if (check(argv[1])
)
    {
        n = atoi(argv[1]);
    } else
        {
            return 0;
        }
    
    
    if (n > 0)
    {
        printUoc(n);
        integerAnalysis(n);
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

void printUoc(int n) {
    printf("Cac uoc so cua %d : ", n);
    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0) 
        {
            printf("%d, ", i);
        }
        
    }
    printf("%d", n);
    printf("\n");
}

// b
void integerAnalysis(int n) {
    printf("%d = ", n);
    int i = 2;
    while (n > 1)
    {
        
        if (n % i == 0)
        {   
            n = n / i;
            if (n == 1)
            {
                printf("%d", i);
            } else printf("%d * ", i);

        } else
            {
                i++;
            } 
    }
    printf("\n");
}