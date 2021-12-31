#include <stdio.h>

int read_file_and_sum(const char file_name[])
{
    FILE* file = fopen(file_name, "r");
    int n;
    fscanf(file, "%d", &n);
    int sum = 0;

    for (int i = 1; i <= n; i++ )
    {
        int x;
        fscanf(file, "%d", &x);
        
        sum += x;
    }

    fclose(file);
    return sum;
}

void write_number(const char output[], int number)
{
    FILE* file = fopen(output, "w");
    fprintf(file, "%d", number);
}

int main()
{
    int sum = read_file_and_sum("input1.txt");
    
    write_number("output1.txt", sum);

    return 0;

}