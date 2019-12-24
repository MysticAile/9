#include <stdio.h>   //求1000以内素数和
int findsum(void)
{
    int i, sum=0;
    for (i = 1; i <= 1000; i++)
    {
        if (i % 2 != 0)
        {
            sum = sum +i;
        }
    }
    return sum;
}
int main(void)
{
    
    printf("%d", findsum());
    return 0;
}
