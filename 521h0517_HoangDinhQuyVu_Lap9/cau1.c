#include<stdio.h>
#include <stdbool.h>
#include <string.h>
typedef struct
{
    int id;
    char name[100];
    bool sex;
    int birth_year;
    char phone_number[13];
    int salary;
} Employee;

void print_employer(Employee e)
{
    printf("%d %s %s %d %s %d\n", e.id, e.name, e.sex ? "Male" : "Female", e.birth_year, e.phone_number, e.salary);
}

Employee create_Employer()
{
    Employee e;

    printf("enter ID: ");
    scanf("%d", &e.id);
    getchar();

    printf("enter name: ");
    fgets(e.name, 100, stdin);
    e.name[strlen(e.name) - 1] = '\0';

    printf("enter gender (0 for female, 1 for male): ");
    int gender;
    scanf("%d", &gender);

    if(gender == 1)
    {
        e.sex = true;
    } else e.sex = false;

    printf("birth year: ");
    scanf("%d", &e.birth_year);
    getchar();

    printf("enter phone number: ");
    fgets(e.phone_number, 13, stdin);
    e.phone_number[strlen(e.phone_number) - 1] = '\0';

    printf("enter salary: ");
    scanf("%d", &e.salary);

    return e;
}

int main()
{   
    Employee list_e[3];
    for (int i = 0; i < 2; i++)
    {
        Employee e = create_Employer();
        list_e[i] = e;
        //print_employer(list_e[i]);
        printf("\n");
    }
    printf("\n");
    
    for (int i = 0; i < 2; i++)
    {
        
        print_employer(list_e[i]);
    }
    
    return 0;
}