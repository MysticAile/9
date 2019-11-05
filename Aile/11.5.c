#include <stdio.h>
int main(void)
{
    float a, b, c, d,  cost;
    int e;
    printf("Enter a:\n");
    scanf("%f", &a);
    printf("Enter c:\n");
    scanf("%f", &c);
    if (a <= 3)
    {
        b = 10;
    }
    if (3 < a && a <= 10)
    {
        b = 10 + 2 * (a - 3);
    }
    if (a > 10)
    {
        b = 10 + 3 * (a - 3);
    }
    if ("e%5=0")
    {
        d = e / 5 * 2;
    }
    else
    {
        d = e / 5 * 2;
    }
    cost = b + d;
    printf("cost=%f", cost);
}
