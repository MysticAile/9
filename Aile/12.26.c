/*-------------------------------------------------------
【程序设计】
---------------------------------------------------------

题目：求出1000以内前20个不能被2,3,5,7整除的数之和。

要求：使用程序中定义的变量
  
-------------------------------------------------------*/
#include "stdio.h"
void wwjt();

//fun函数功能：求出1000以内，前n个不能被2,3,5,7整除的数，求出这些数的和
int fun(int n)
{

    int i, j = 0, a[20], sum = 0; //前20个不能被2,3,5,7整除的数保存在a数组中，它们的和保存在sum中。
                                  /**********Program**********/
    i = 0;
    for (j = 0; j <= 1000; j++)
    {

        if (j % 2 != 0 && j % 3 != 0 && j % 5 != 0 && j % 7 != 0)
        {
            if (i < 20)
            {
                a[i] = j;
                sum += j;
                i++;
            }
        }
    }

    /**********  End  **********/
    return sum;
}

void main()
{
    printf("和为：%d\n", fun(20));
    wwjt();
}

void wwjt()
{
    FILE *IN, *OUT;
    int i, n;
    IN = fopen("in.dat", "r");
    if (IN == NULL)
    {
        printf("Please Verify The Current Dir..It May Be Changed");
    }
    OUT = fopen("out.dat", "w");
    if (OUT == NULL)
    {
        printf("Please Verify The Current Dir.. It May Be Changed");
    }
    for (i = 0; i < 5; i++)
    {
        fscanf(IN, "%i", &n);
        fprintf(OUT, "%ld\n", fun(n));
    }

    fclose(IN);
    fclose(OUT);
}
