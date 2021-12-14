#include <stdio.h>
#include <string.h>


int find_index(char s1[], char s2[])
{
    int n1 = strlen(s1);
    printf("len n1 = %d", n1);
    int n2 = strlen(s2);

    for (int i = 0; i < n1 - n2 + 1; i++)
    {
        if(s1[i] == s2[0])
        {
            int j = 1;

            while (s1[i + j] == s2[j] && j < n2)
            {
                j++;
            }
            if(j == n2 ) return i;
            i = j;
        }
        
    }
    
    return -1;

}
int main()
{   
    int result = find_index("thu di choi thuyen", "thuyen");

    
    printf("s1 = %s\n", "thu di choi thuyen");


    printf("result = %d", result);
    return 0;
}