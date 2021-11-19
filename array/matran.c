#include <stdio.h>
#include <stdlib.h>
#include <time.h>



// int random(int min, int max);
// int taomang(int col, int row);
// int inMang();

int main()
{
    int col = 10, row = 10;
    int matrix[col][row];
    srand((unsigned int)time(NULL));
    

    for(int i = 0; i < col; i++)
    {
        for(int j = 0; i < row; j++)
        {
            matrix[i][j] = ran_dom(-1000, 1000);
        }
    }
    
}
int ran_dom(int min, int max)
{
    return min + (int)(rand()*(max-min+1.0)/(1.0+RAND_MAX));
}

