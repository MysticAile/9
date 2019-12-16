#include <stdio.h>
#define LEN 5
int main(void)
{
    int i, j, a[LEN], max, n;
    printf("Enter ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 4; i++)
    {
        max = i;
        for (j = i + 1; j < 5; j++)
        {
            if (a[j] > a[max])
                max = j;
        }
        n = a[max];
        a[max] = a[i];
        a[i] = n;
    }
    for (i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}