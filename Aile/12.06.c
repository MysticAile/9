#include <stdio.h> //判断一个数是不是素数
double isPrime(int x)
{
    int i = 2;
    for (i = 2; i <= x / 2; i++)
    {
        if (x % i == 0)
            return 0;
    }
    if (i > x / 2)
        return 1;
}
int main(void)
{
    int x, a;
    printf("Enter x:\n");
    scanf("%d", &x);
    a = isPrime(x);
    if (a == 1)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }

    return 0;
}
