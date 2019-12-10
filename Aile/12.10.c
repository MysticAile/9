#include <stdio.h>//用数组算出最大值
int main(void)
{
    int i, max=0,a;
    int n[5];
    printf("Enter");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &n[i]);
    }
    for (i = 0; i < 5; i++)
    {
        if (n[i] > max)
        {
            max = n[i];
        }
        else
        {
            max = max;
        }
    }
    printf("%d",max);
    return 0;
}