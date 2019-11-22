#include <stdio.h>                             
int main(void)                      
{
    int n, i;
    double b, sum, e, a = 1.0;
    printf("Enter n\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        a = a / i;
        sum += a;
    }
    printf("e =%0.10lf\n", sum + 1);
    return 0;
}