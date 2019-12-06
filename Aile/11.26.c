#include <stdio.h> //输出100以内素数
int isPrime(int x)
{
    int i = 2;
    for (i = 2; i <= x / 2; i++)
    {
        if (x % i == 0)
        {
            return 0;
        }
    }
    if (i >= x / 2)
        return 1;
}
int main(void)
{
    int main(void);
    int x = 2, i = 2, num = 0;
    for (x = 2; x <= 100; x++)
        if (isPrime(x))
        {
            printf("%-5d ", x);
            num++;
            if (num % 10 == 0)
                printf("\n");
        }

    return 0;
}