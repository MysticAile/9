#include <stdio.h>                              //将24字母按倒序输出
int main(void)
{
    char c;
    for(c = 'z'; c>='a' ;c--)
    {
        printf("%c",c);
    }
    return 0;
}