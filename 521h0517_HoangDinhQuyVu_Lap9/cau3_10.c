#include<stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
    int id;
    char name[100];
    char sex[10];
    int birth_year;
    char phone_number[13];
    int salary;
} Employee;

void print_employer(Employee e)
{
    printf("%d %s %s %d %s %d\n", e.id, e.name, e.sex, e.birth_year, e.phone_number, e.salary);
}

void print_all_Employer(Employee list_e[], int n)
{
    for (int i = 0; i < n; i++)
    {   
        printf("%d - ", i + 1);
        print_employer(list_e[i]);
    }
    
}

void find_ID(Employee list_e[], int n, int ID)
{
    for (int i = 0; i < n; i++)
    {   
        if (list_e[i].id == ID)
        {
            print_employer(list_e[i]); 
            break;
        }
        
    }
}

int count_Male(Employee list_e[], int n)
{   
    int count = 0;
    for (int i = 0; i < n; i++)
    {   
        if(strcmp(list_e[i].sex, "Male") == 0)
        {
            count++;
        }
        
    }
    return count;
}
//


int count_Female(Employee list_e[], int n)
{   
    int count = 0;
    for (int i = 0; i < n; i++)
    {   
        if(strcmp(list_e[i].sex, "Female") == 0)
        {
            count++;
        }
        
    }
    return count;
}

void sort_birthYear_ascending(Employee list_e[], int n)
{      
    Employee temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if(list_e[i].birth_year > list_e[j].birth_year)
            {
                temp = list_e[i];
                list_e[i] = list_e[j];
                list_e[j] = temp;
            }
        }
    }
    
}
//
void sort_salary_ascending(Employee list_e[], int n)
{      
    Employee temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if(list_e[i].salary > list_e[j].salary)
            {
                temp = list_e[i];
                list_e[i] = list_e[j];
                list_e[j] = temp;
            }
        }
    }
    
}

int employee_max_salary(Employee list_e[], int n)
{
    int max = 0;
    int index = 0;
    for (int i = 0; i < n; i++)
    {
        if(max < list_e[i].salary)
        {
            max = list_e[i].salary;
            index = i;
        }
    }
    
    return index;
}

int youngest_employee(Employee list_e[], int n)
{
    int max = list_e[0].birth_year;
    int index = 0;
    for (int i = 1; i < n; i++)
    {
        if(max < list_e[i].birth_year)
        {
            max = list_e[i].birth_year;
            index = i;
        }
    }

    return index;
}

Employee* delete_employee(Employee list_e[], int n, int id, int * x)
{
    Employee* a = calloc(n - 1, sizeof(Employee));

    int index = 0;
    for(int i = 0; i < n; i++)
    {
        if(list_e[i].id != id)
        {
            a[index] = list_e[i];
            index++;
        } else 
            {
                continue;
            }
    }
    *x = index;
    return a;
}
int main()
{
    Employee list_e[] = {
        {13, "Vu", "Male", 2021, "0123456", 45000},
        {2, "Huong", "Female", 2004, "0123456", 20000},
        {3, "Huy", "Male", 1999, "12356", 500},
        {43, "Nhu", "Female", 2004, "223456", 4000},
        {5, "Ti", "Male", 2003, "99999", 420000},
        {6, "Bi", "Male", 2025, "2333356", 490000},
        {27, "Hum Xi Chuong", "Female", 2003, "0123456", 470000},
        {8, "Mam", "Male", 2010, "0123456", 400000},
        {912, "Ho", "Male", 2003, "017723456", 50000},
        {10, "Black Man", "Female", 2000, "0123456", 400600}
    };

    int n = sizeof(list_e) / sizeof(Employee);

    //y 3
    print_all_Employer(list_e, n);
    printf("\n");
    //y4
    // find_ID(list_e, n, 6);

    //y5
    // printf("\nMale = %d", count_Male(list_e, n));
    // printf("\nFemale = %d", count_Female(list_e, n));
    
    //6-7
    // sort_birthYear_ascending(list_e, n);
    // sort_salary_ascending(list_e, n);
    // print_all_Employer(list_e, n);
    
    //8

    // int result = employee_max_salary(list_e, n);
    // printf("employee has max salary :\n");
    // print_employer(list_e[result]);

    //y9

    // printf("\n");
    // print_employer(list_e[youngest_employee(list_e, n)]);

    //y 10
    int id_delete = 101;
    int x;
    Employee* list = delete_employee(list_e, n, id_delete, &x);

    printf("\n%d\n", x);
    for (int i = 0; i < x; i++)
    {   
        printf("%d - ", i + 1);
        print_employer(list[i]);
    }
    
    return 0;
}