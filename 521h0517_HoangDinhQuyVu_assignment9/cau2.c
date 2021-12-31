#include <stdio.h>
#include <string.h>
#define max 1000

void read_and_conunt(const char file_name[], const char outfile[])
{

    FILE* file = fopen(file_name, "r");
    FILE* file_out = fopen(outfile, "w");
    char line[max];
    while(feof(file) == 0)
    {
        fgets(line, max, file);
        

        if(line[strlen(line) - 1] == 10 || line[strlen(line) - 1] == 13) {
            line[strlen(line) - 1] = '\0';
        }
        if(line[strlen(line) - 1] == 10 || line[strlen(line) - 1] == 13) {
            line[strlen(line) - 1] = '\0';
        } 
        int n = strlen(line);
        printf("%s: %lu\n", line, strlen(line));
        fprintf(file_out, "%d\n", n);
    }
    
    fclose(file);
    fclose(file_out);
    
}

int main()
{
    read_and_conunt("input02.txt", "output02.txt");
    return 0;
}
