#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
   int val = 1;
   char str[20];
   
   strcpy(str, "abv");
   val = atoi(str);
   printf("Gia tri duoi dang chuoi = %s, \nGia tri duoi dang so nguyen = %d\n", str, val);

   printf(isalpha("abv"));
}