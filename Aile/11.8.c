#include <stdio.h>                               //求闰年
int main(void)
{
    int year;
    printf("Enter year:\n");
    scanf("%d", &year);
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        printf("year is yes\n", year);
    }
    else
    {
        printf("year is no\n", year);
    }
    return 0;
}
