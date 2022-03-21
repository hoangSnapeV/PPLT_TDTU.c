#include <stdio.h>

int read_numbers(char path[]) {

    FILE * file = fopen(path, "r");

    if (file == NULL)
    {
        return -1;
    }
    int sum = 0;
    int count = 0;
    while (1)
    {
        int n;
        int status = fscanf(file, "%d", &n);

        if (status == -1)
        {
            break;
        }
        count++;
        sum += n;

    }
    printf("%d\n", count);
    fclose(file);
    return sum;
}

int main(){

    int sum = read_numbers("test.txt");
    printf("%d\n", sum);

}