#include <stdio.h>
int main()
{
    printf("%d ", 2);
    int x = 3, i = 2, a = 0;
    for (x = 3; x <= 500; x += 2)
    {
        a = 0;
        for (i = 2; i < x / 2; i++)
        {
            if (x % i == 0)
            {
                a = 1;
                break;
            }
        }
        if (a == 0)
            printf("%d ", x);
    }
    return 0;
}