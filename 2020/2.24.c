#include <stdio.h>
int month_day(int year, int month, int day)
{
    int i, leap,k;
    int a[2][13] =
        {
            {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
            {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};
    leap = (year % 4 == 0 && year % 100 != 0 || year % 400 == 0);
    for (i = 1; i < month; i++)
    {
        k = day + a[leap][i];
    }
    return k;
}
int main(void)
{
    int year, month, day;
    scanf("%d/%d/%d", &year, &month, &day);
    month_day(year, month, day);
    printf("%d", day);
    return 0;
}