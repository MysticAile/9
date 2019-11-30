#include <stdio.h>
int isPrime(int x)
{
    int x, i = 2;
    for (i = 2; i < x / 2; i++)
    {
        if (x % i == 0)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
}
int main (void)
{
    int main(void);
    int x = 2, i = 2;
    for (x = 2; x <= 500; x++)
        if (isPrime(x))
        {
            printf("%d", x);
        }
    return 0;
}