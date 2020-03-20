#include<stdio.h>
#define max 100
int main(void)
{
    int i,length;
    char a[max];
    gets(a);
    length=strlen(a);
    for(i=length-1;i>=0;i--)
    printf("%c",a[i]);
    return 0;
}