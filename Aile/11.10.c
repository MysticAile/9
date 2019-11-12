#include <stdio.h>
int main(void)
{
    int a, n, i;
    printf("Enter n:\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("Enter a:\n");
        scanf("%d", &a);
        if (a >= 90)

        {
            printf("mark is A\n", a);
        }
        else if (a >= 80)
        {
            printf("mark is B\n", a);
        }
        else if (a >= 70)
        {
            printf("mark is C\n", a);
        }
        else if (a >= 60)
        {
            printf("mark is D\n", a);
        }
        else if (a < 60)
        {
            printf("mark is E\n", a);
        }
    }
    return 0;
}