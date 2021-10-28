#include <stdio.h>
int converdays(int day)
{
    int year = day / 365;
    int week = (day - year * 365) / 7;
    int dayle = day - year * 365 - week * 7;
    printf("%d days = %d years, %d weeks, %d days\n", day, year, week,  dayle);
    return 0;
} 
int main()
{
    converdays(365);
    converdays(364);
}