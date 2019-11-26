#include <stdio.h>              //百钱百鸡
int main(void)
{
    int a, b, c;
    for (a = 0; a <= 20; a++)
        for (b = 0; b <= 33; b++)
            for (c = 0; c <= 333; c++)
            {
                if (a * 5 + b * 3 + c / 3.0 == 100 && c % 3 == 0 && a + b + c == 100)
                {
                    printf("公鸡: %d,母鸡: %d,雏鸡: %d\n", a, b, c);
                }
            }
    return 0;
}