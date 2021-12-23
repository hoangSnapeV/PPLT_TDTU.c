#include <stdio.h>

int check_prime(int n, int i)
{
    if (n < 2) return 0;
    if (n % i == 0) return 0;
    if(i > (n / 2)) return 1;

    return check_prime(n, i + 1);
}
int main()
{
    int result = check_prime(10, 2);
    if(result)
    {
        printf("so nguyen to\n");
    } else printf("khong la so nguyen to\n");
    
    for(int i = 0; i < 20; i++ )
    {
      if(check_prime(i, 2)) 
      {
        printf("%d ", i);
      }
    }
    printf("\n");

    return 0;
}