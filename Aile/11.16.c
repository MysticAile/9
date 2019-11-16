#include <stdio.h>
int main(void)
{
    int n, i, a = 1, b, sum;
    printf("Enter n\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        a = a * i;
        b = a;
        sum += b;
    }
    printf("sum =%d\n", sum);
    return 0;
}