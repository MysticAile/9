#include <stdio.h> //验证一个数是不是素数
int main(void)
{
    int a, i;
    printf("Enter a:\n");
    scanf("%d", &a);
    for (i = 2; i <= a / 2; i++)
        if (a % i == 0)
            break;
    if (i >= a / 2 && a != 1)
        printf("素数\n", a);
    else
        printf("No\n", a);
    return 0;
}
