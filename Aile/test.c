#include <stdio.h>

int main(void)
{
    int a, b, c, d, x;
    float y;
    printf("Enter a , b , c ,d:\n");
    scanf("%d%d%d%d", &a, &b, &c, &d);
    x = a + b + c + d;
    y = x / 4.0;
    printf("x=%d , y=%.1f\n", x, y);
    return 0;
}