#include <stdio.h>//用函数和数组求最大值
#define LEN 5
int i, max=0;
void findmax(int x[], int a)
{
    if (x[i] > max)
    {
        max = x[i];
    }
}
int main(void)
{
    int n[LEN],b[LEN];
    printf("Enter ");
    for (i = 0; i < LEN; i++)
    {
        scanf("%d", &n[i]);
    }
    for (i = 0; i < LEN; i++)
    {
        findmax(n, LEN);
        b[i]=max;
        printf("%d",b[i]);
    }
    printf("\n");
    return 0;
}