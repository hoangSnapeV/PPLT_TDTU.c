#include <stdio.h>
int kiem_tra(int a, int i) {
    if (i < 0) 
        return 1;
    if ((a+i) < 0 || (a+i) > 10)
        return 0;
    return kiem_tra(a, i - 1);
} 
int main() {
    int n = 10;
    int a[10] = {0, 1, 4,6,7,-8, 0,2,9, 8};

    if (kiem_tra(a, n-1))
        printf("Diem hop le");
    else   
        printf("Co gia tri khong hop le");
    return 0;
}