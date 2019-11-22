#include <stdio.h>
#include <math.h>
int main(void)
{
    double x, y, pi;
    pi = 3.14159;
    printf("Enter x:\n");
    scanf("%lf", &x);
    y = sqrt(((sin(60*pi / 180) + 1) * (sin(30*pi / 180) + 1)) / cos(x));
    printf("y=%.2lf", y);
    return 0;
}