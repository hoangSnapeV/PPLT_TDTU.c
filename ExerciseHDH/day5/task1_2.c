#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include <unistd.h>
#include <sys/types.h>

#define BUFFER_SIZE 100

int main(int argc, char ** argv) {
    char read_msg[BUFFER_SIZE];
    char target[100];
    char read_msg1[BUFFER_SIZE];
    if (argc > 2)
    {
        printf("Co qua nhieu doi so");
        return 0;
    }

    
    int n;
    int result = check(argv[1]);

    //
    int fd[2];
    pid_t pid;

    if (result)
    {
        n = atoi(argv[1]);
    } else
        {
            return 0;
        }
    
    
    if (n >= 0)
    {
        if (pipe(fd) == -1)
        {
            fprintf(stderr, "Pipe failded");
            return 1;
        }

        pid = fork();
        if (pid < 0) {
        /* error occurred */
            fprintf(stderr, "Fork Failed");
            return 1;
        }
        if (pid > 0)
        { // parents
            close(fd[0]);
            write(fd[1], argv[1], strlen(argv[1]) + 1);
            close(fd[1]);
            //send parent 
            close(fd[1]);
            read(fd[0], read_msg1, BUFFER_SIZE);
            printf("%d! = %s", n, read_msg1);
            close(fd[0]);

        } else 
            {
                //child
                close(fd[1]);
                read(fd[0], read_msg, BUFFER_SIZE);
                int x = atoi(read_msg);
                printf("%d\n", factorial(x));

                sprintf(target,"%d" , factorial(x));
                printf("%s ", target);
                close(fd[0]);


                close(fd[0]);
                write(fd[1], target, BUFFER_SIZE);
                close(fd[1]);   
            }


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

int factorial(int x) {
    int result = 1;
    for (int i = 2; i <= x; i++)
    {
        result *= i;
    }
    return result;
}