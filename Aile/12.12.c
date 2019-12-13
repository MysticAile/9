#include <stdio.h> //用函数和数组求最小值
int a, min;
void findmin(void)
{
    if (min < a)
    {
        min = min;
    }
    else
    {
        min = a;
    }
}
int main(void)
{
    int i;
    int n[5];
    printf("Enter ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &n[i]);
    }
    min = n[0];
    for (i = 1; i < 5; i++)
    {
        a=n[i];
        findmin();
    }
    printf("%d", min);
    return 0;
}