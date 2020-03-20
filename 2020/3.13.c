#include <stdio.h>
#include <string.h>
struct brithday
{
    char year[5];
    char mouth[3];
    char day[3];
};
struct a
{
    char name[10];
    struct brithday b;
    char number[12];
};
int main(void)
{
    int n, i, j;
    char abc[9];
    printf("please input people num:");
    scanf("%d",&n);
    struct a a[10], sum;
    for (i = 0; i < n; i++)
    {
        printf("please input %d name:", i);
        scanf("%s", a[i].name);
        printf("please input %d brithbay:yyyymmdd:", i);
        scanf("%s", abc);
        for (j = 0; j < 4; j++)
        {
            a[i].b.year[j] = abc[j];
        }
        for (j = 0; j < 2; j++)
        {
            a[i].b.mouth[j] = abc[j + 4];
        }
        for (j = 0; j < 2; j++)
        {
            a[i].b.day[j] = abc[j + 6];
        }
        printf("please input %d phone number:", i);
        scanf("%s", a[i].number);
    }
    for (i = 1; i < n; i++)
    {
        for (j = 0; j < n - i; j++)
        {
            if (strcmp(a[j].name, a[j + 1].name) > 0)
            {
                sum = a[j];
                a[j] = a[j + 1];
                a[j + 1] = sum;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("name=%s,brithday=%s/%s/%s,phone=%s\n", a[i].name, a[i].b.year, a[i].b.mouth, a[i].b.day, a[i].number);
    }
    return 0;
}0