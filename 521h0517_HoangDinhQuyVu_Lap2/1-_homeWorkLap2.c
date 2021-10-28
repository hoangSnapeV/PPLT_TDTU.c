#include <stdio.h>
int SumOfEvens()//bai 1 giong bài 2(odd khác 1 tí)
    {
        int n;
        int sum = 0;
        printf("Input n = ");
        scanf("%d", &n);
        while (n < 3)
            {
                printf("Input again, n = ");
                scanf("%d", &n);

                }

        for (int i = 2; i <= n; i = i + 2)
            {  
                sum += i; 
            }

        return sum;

    }
int SumOfRange()//bai 4
    {
        int n;
        int sumRange = 0;
        printf("Input n = ");
        scanf("%d", &n);
        while (n < 3)
            {
                printf("Input again, n = ");
                scanf("%d", &n);

                }

        for (int i = 2; i < n; i++)
            {  
                sumRange += i; 
            }

        return sumRange;

    }

int findFirstLast() // bai 5
    {
        int firstDigit = 0, lastDigit = 0, m;
        printf("Enter any number = ");
        scanf("%d", &m);

        firstDigit = m;
        lastDigit = m % 10;
        

        while (firstDigit >=10)
            {
                firstDigit = firstDigit / 10;
            }
        
        printf("firstDigit = %d\n", firstDigit);
        printf("lastDigit = %d\n", lastDigit);
        

    }

int countOfDigits()// bai 8
    {
        int count = 0, m;
    
        printf("Enter any number = ");
        scanf("%d", &m);

        while (m > 0)
            {
                m = m / 10;
                count = count + 1;
                printf("count= %d\n", count);
            }        
        return count;

    }

int calculateProductofDigits()// bai 7
    {
        int firstDigit = 0, m;
        int sum = 0, middle = 0;
        printf("Enter any number = ");
        scanf("%d", &m);

        firstDigit = m;
        

        sum = m % 10;

        while (firstDigit >=10)
            {
                firstDigit = firstDigit / 10;
                
                if (firstDigit >= 10)
                    {
                        middle = firstDigit % 10;
                        sum += middle;
                    }         
            }
        sum += firstDigit;
        return sum;   

    }
int main()
    {   
        //int result = SumOfEvens();
        //printf("Sum of evens = %d\n", result);
        //bài 4
        /*int result_1 = SumOfRange();
        printf("Sum of Range = %d\n", result_1); */

        //findFirstLast(); // bai 5

        /* bai 8
        int result1 = sumOfDigits();
        printf("sum of digits (n) = %d", result1); */

        /* bai 7
        int result = calculateProductofDigits();
        printf("sum= %d", result); */
        

        return 0;
    }
        