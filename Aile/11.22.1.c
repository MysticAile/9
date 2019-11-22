#include <stdio.h>        //求一个数各位加起来的和
int main(void)
{
    int a, b, sum=0;
    printf("Enter a:\n");
    scanf("%d", &a);
    while(a > 0)
    {
        sum = a % 10;
        b += sum;
        a = a/10;
    }
    printf("%d", b);
    return 0;
}