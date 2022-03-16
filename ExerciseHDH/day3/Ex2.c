#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h>
#include <sys/wait.h>

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

void guessCollatz(int n) {
    //printf("%d, ", n);
    while (n > 1)
    {   
        if (n % 2 == 0)
        {
            printf("%d, ", n);
            n = n / 2;
        } else {
            printf("%d, ", n);
            n = n * 3 + 1;
        }

        
    }
    if (n == 1)
    {
        printf("%d.\n", n);

    }
    
    
}

int main(int argc, char ** argv) {

    if (argc > 2)
    {
        printf("Co qua nhieu doi so");
        return 0;
    }

    
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
        
        pid_t pid;
  
        // khai báo biến toàn cục n
        // lấy giá trị n vào từ lời gọi
        
        /* fork a child process */
        pid = fork();
        if (pid < 0) {
            /* error occurred */
            fprintf(stderr, "Fork Failed");
            return 1;
        } else if (pid == 0) {
            /* child process */
            
            // vòng lặp tính tổng S
            // in ra S
            
            guessCollatz(n);
            printf("Ket thuc tien trinh con\n");

            
        } else {
            /* parent process */
            // tính ước số 
            // in ra
            
            wait(NULL);
            
            
        }

    }
    return 0;
  
}