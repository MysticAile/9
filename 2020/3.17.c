#include <stdio.h>//将字符串排序，选择排序法
#include <string.h>
int main(void)
{
    char *a[] = {"Beijing", "Guangzhou", "Wuhan", "Shenzhen", ""};
    int i, j, k;
    char *sum;
    for (i = 0; strcmp(a[i], "") != 0; i++)
    {
        k = i;
        for (j = i + 1; strcmp(a[j], "") != 0; j++)
        {
            if (strcmp(a[k], a[j]) > 0)
            {
                k = j;
            }
            if (k != i)
            {
                sum = a[k];
                a[k] = a[i];
                a[i] = sum;
            }
        }
    }
    for (i = 0; strcmp(a[i], "")!=0; i++)
    {
        printf("%s\n", a[i]);
    }
}