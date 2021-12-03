#include <stdio.h>

int main()
{   
    int ms;
    printf("nhap ma so =");
    scanf("%d", &ms);

    if(ms <= 10000 || ms >= 99999)
    {
        printf("nhap du lieu sai");
        return 0;
    }

    int type = (ms / 1000) % 10;

    switch (type)
    {
    case 0:
    case 1:
    case 2:
        printf("hang dong");
        break;
    
    case 3:
    case 4:
    case 5:
        printf("hang bac");
        break;

    case 6:
    case 7:
        printf("hang vang");
        break;
    default:
        printf("hang bach kim");
        break;
    }

    
    
   


    return 0;
}