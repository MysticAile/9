#include <stdio.h>     //求m到n之间的和
#include <math.h>
int sum;
void findsum(int m, int n)
{
    if (m < 0 && n > 0)
    {
        sum = fabs(m) + n;
    }
    else
    {
        sum = fabs(n - m);
    }
}
int main(void)
{
    int m, n;
    printf("Enter two number ");
    scanf("%d%d", &m, &n);
    findsum(m, n);
    printf("%d", sum);
    return 0;
}