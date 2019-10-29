#include <stdio.h>

int main(void)
{
    int t;
    float h;
    printf("Enter t:\n");
    scanf("%d", &t);
    h = 1 / 2.0 * 10 * t * t;
    printf("h=%f\n", h);
    return 0;
}