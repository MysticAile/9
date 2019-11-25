#include <stdio.h>
int main(void)
{
    int a, b, c;
    for (a = 1; a <= 20; a++)
        for (b = 1; b <= 33; b++)
            for (c = 1; c <= 300; c++)
            {
                if (a * 5 + b * 3 + c / 3 == 100)
                    

                if (a + b + c == 100)
                    

                if (c % 3 == 0)
                    

                {
                    printf("公鸡: %d,母鸡: %d,雏鸡: %d\n", a, b, c);
                }
            }
    return 0;
}