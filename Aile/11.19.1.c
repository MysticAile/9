#include <stdio.h>
#include <math.h>
int main(void)
{
    int a , n , x , y , i,z;
    printf("Enter a:\n");
    scanf("%d", &a);
    printf("Enter n:\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        x = pow(10, i);
        z = (x - 1) * a / 9;
        y += z;
    }
    printf("y = %d", y);
    return 0;
}