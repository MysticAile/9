#include <stdio.h>//输出9*9乘法表
int main(void)
{
    int i, j, k;
    for (i = 1; i <= 9; i++)
    {
        for (j = 1; j <= 9; j++)
        {
            k = i * j;

            if (j >= i)
            {
                printf("%d * %d = %d   ", i, j, k);
            }
            printf("");
            if (j == 9)
            {
                printf("\n");
            }
        }
    }

    return 0;
}