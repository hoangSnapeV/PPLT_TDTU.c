#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct  {
    char id[100];
    char name[100];
    int price;
}product;

void print_product(product);
void print_product_arr(product list[], int n);
void find_product(product list[], int n, char sp[]);
void find_price(product list[], int n, int price);
void sort_increase(product list[], int n);

int main()
{   
    product sp[] = {
        {"1", "water", 4000},
        {"2", "c2", 10000},
        {"3", "aqua", 5000},
        {"4", "chocolate", 7000},
        {"5", "bread", 3000}
    };


    printf("Hi!\n");
    int n = sizeof(sp) / sizeof(product);
    
    // printf("Press enter key to continue...");
    // getchar();      // làm cho chương trình ngưng và nhấn enter
    // system("clear");  // xóa màn hình
    do
    {
        
        int x;
        printf("input key: ");
        do
        {   
            system("clear");
            printf("1. \n");
            printf("2. print list product\n");
            printf("3. The number of products\n");
            printf("4. Find Product\n");
            printf("5. Searching for the price of product \n");
            printf("6. Sort price increase\n");
            printf("7. Quit\n");    

            printf("input key: ");
            scanf("%d", &x);
            getchar();

        } while (x < 1 || x > 7);
        
        switch (x)
        {
            case 1:
                
                break;
            case 2:
                print_product_arr(sp, n);
                break;
            case 3:
                printf("%d", n);
                break;
            case 4:
                find_product(sp, n, "c2");
                break;
            case 5:
                find_price(sp, n, 5000);
                break;
            case 6:
                sort_increase(sp, n);
                break;
            default:
                exit(0);
                break;
        }
        getchar();
    } while (1);
    


    //printf("The previous messages have been cleared\n");

    // print_product_arr(sp, 5);
    // printf("\n");
    // //find_product(sp, 5, "c2");

    // //find_price(sp, 5, 5000);

    //sort_increase(sp, 5);
    // print_product_arr(sp, 5);
    return 0;
}

void print_product(product p)
{
    printf("%s, %s, %d\n", p.id, p.name, p.price);
}

void print_product_arr(product list[], int n)
{
    for (int i = 0; i < n; i++)
    {
        print_product(list[i]);
    }
}

void find_product(product list[], int n, char sp[])
{   
    int key = -1;
    for (int i = 0; i < n; i++)
    {
        if(strcmp(list[i].name, sp) == 0)
        {
            key = i;
            break;
        }
    }

    print_product(list[key]);
}

void find_price(product list[], int n, int price)
{
    for (int i = 0; i < n; i++)
    {
        if(list[i].price >= price)
        {
            print_product(list[i]);
        }
    }
}

void sort_increase(product list[], int n)
{   
    product temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if(list[i].price > list[j]. price)
            {
                temp = list[i];
                list[i]= list[j];
                list[j] = temp;
            }
        }
    }
    

    
}

