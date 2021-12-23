#include <stdio.h>

int sum_dequy(int s1[], int n) {
    if (n == 0) return 0;
    return s1[n-1] + sum_dequy(s1, n - 1);
}

int check_hople(int s2[], int i) {

    if (i < 0) return 1;

    int x = (s2[i] < 0) || (s2[i] > 10);
    if(x) return 0;

    return check_hople(s2, i - 1);
}

int main()
{
    int s1[] = {0, 14, 2, 4, 30, 5, 6, 7, 12, 11};
    int n = 10;
    int s2[] = {0, 1, 2, 4, 3, -10, 6, 8, 2, 1};

    printf("sum = %d\n", sum_dequy(s1, n - 1));

    printf("check = %d\n", check_hople(s2, n - 1));
    //s1[8] + 9
    //s1[7] + 8
    //
    //if i < 0 => 

    return 0;
}