#include <stdio.h>
int main(void)
{
    int a;
    printf("Enter a:\n");
    scanf("%d", &a);
    if (a >= 90)
    {
        printf("A\n", a);
    }
    else if (a < 90 && a >= 80)
    {
        printf("B\n", a);
    }
    else if (a < 80 && a >= 70)
    {
        printf("C\n", a);
    }
    else if (a < 70 && a >= 60)
    {
        printf("D\n", a);
    }
    else if (a < 60)
    {
        printf("E\n", a);
    }
    return 0;
}