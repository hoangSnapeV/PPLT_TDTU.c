#include <stdio.h>
void tableNumber(int n)
{   
    int table = 1;
    for (int i = 1; i <= 10; i++)
    {
        table = i * n;
        printf("%d x %d = %d\n", n, i, table);
        
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