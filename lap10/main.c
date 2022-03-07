#include <stdio.h>

int cau_1(int x)
{   
    if (x == 0)
    {
        return 4;
    
    } else if(x == 1)
        {
            return 7;
        } 
    return 4 * cau_10(x);
}
int cau_2(int x)
{   
    if (x == 0)
    {
        return 4;
    
    } else if(x == 1)
        {
            return 7;
        } 
    return cau_10(x - 1);
}
int cau_10(int x)
{
    if (x == 0)
    {
        return 4;
    } else if(x == 1)
        {
            return 7;
        } 
    
    // int a = 4 * cau_10(x);
    // int b = cau_10(x - 1);
    return 4 * cau_1(x) - cau_2(x);
    
      
    
}

int main()
{
    int x = 3;
    //scanf("%d", &x);
    int result = cau_10(x + 1);
    printf("%d\n", result);
    //printf("%d\n", x);
    return 0;
}