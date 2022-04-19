#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int check(char name[]) {

    int n = strlen(name);
    for (int i = 0; i < n; i++)
    {
        if (isdigit(name[i]) == 0) 
        {
            return 0;
        }
        
    } 
    return 1;
}

void reverseArray(int arr[], int count) {

    for (int i = 0; i < count - 1; i++)
    {
        for (int j = i + 1; j < count; j++)
        {
            if (arr[i] > arr[j]) 
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            
        }
        
    } 

}

void printArray(int arr[], int count) {
    

    for (int i = 0; i < count; i++)
    {
        printf("%d ",arr[i]);
        
    }
    printf("\n");
}

int main(int argc, char ** argv) {

    
    int count = 0;
    for (int i = 0; i < argc; i++)
    {
        if (check(argv[i]))
        {
            count++;
        }
        
    }

    //create array
    int array[count];
    int index = 0;

    for (int i = 0; i < argc; i++)
    {
        if (check(argv[i]))
        {
            array[index] = atoi(argv[i]);
            index++;
        }
        
    }
    
    printArray(array, count);
    //
    reverseArray(array, count);
    printArray(array, count);

    return 0;
  
}
