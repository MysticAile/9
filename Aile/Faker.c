#include <stdio.h>
int main()
{
    int x = 0;
    printf("Enter x:\n");
    scanf("%d", &x);
    int ret = 0;
    int digit = 0;
    while (x > 0)
    {
        digit = x % 10;
        ret = ret * 10 + digit;
        x /= 10;
    }
    printf("%d\n", ret);
    system("pause");
    return 0;
}