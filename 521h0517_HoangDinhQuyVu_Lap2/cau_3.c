#include <stdio.h>
void tableNumber(int n)
{   
    int table = 1;
    for (int i = 1; i <= 10; i++)
    {   
        for (int j = 1; j <= n; j++)
        {
        table = i * j;
        printf("%d x %d = %d\t", j, i, table);
        }
        printf("\n\n");
    }
        
}
    
int main()
{   
    int n;
    printf("Enter any number = ");
    scanf("%d", &n);
    printf("Table of %d \n", n);

    tableNumber(n);

}