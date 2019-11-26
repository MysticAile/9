#include <stdio.h> //验证一个数是不是素数
int main(void)
{
    int a, i;
    for (a = 1; a <= 500; a++)
        for (i = 2; i <= a / 2; i++)
            if (a % i == 0)
                if (i >= a / 2 && a != 1)
                    printf("%d\n", a);
    return 0;
}
