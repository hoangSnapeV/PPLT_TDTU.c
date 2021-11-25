#include <stdio.h>
#define row 2
#define column 5

void print_matrix(int a[row][column])
{   
    //printf("r = %d  c =%d", row1, column1);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
        
    }
}
void matrix(int matrix_1[row][column], int matrix_2[row][column])
{
    int value = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            matrix_1[i][j] = value;
            value++;
        }
        
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            matrix_2[i][j] = value;
            value--;
        }
        
    }

}
int main()
{   
    int matrix_1[row][column];
    int matrix_2[row][column];
    matrix(matrix_1, matrix_2);


    print_matrix(matrix_1);
    printf("\n");
    print_matrix(matrix_2);
    return 0;
}


