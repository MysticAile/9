#include <stdio.h>
#include <math.h>
int main(void)
{
    int i, a, b,c;
    for (i = 100; i < 1000; i++)
    {
        a = pow(i / 100, 3);
        b = pow((i - i / 100) / 10, 3);
        c = pow(i % 10, 3);
        if (i = a + b + c)
        {
            printf("%d", i);
        }
    }
    return 0;
}