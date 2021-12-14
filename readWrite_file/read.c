#include <stdio.h>

int read_numbers(char path[])
{
    FILE* file = fopen(path, "r");

    if(file == NULL) return -1;

    //scanf("%d", n);
    f


    fclose(file);
}
int main()
{
    int sum = read_numbers("data.txt");
    print("%d\n", sum);

    return 0;
}