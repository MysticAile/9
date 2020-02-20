#include <stdio.h>
void swap (char a[]);
int main(void)
{
    char a[]="beijing";
    swap (a);
    puts(a);
}
void swap (char *str)
{
    str[5]='wuhan';
}
