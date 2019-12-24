#include<stdio.h>//求二维数组里面的最大值
int findmax (int a[][3],int b)
{
    int max , i , j;
    max = a[0][0];
    for(i=0;i<b;i++)
    {
        for(j=0;j<3;j++)
        {
            if(a[i][j]>max)
            {
                max = a[i][j];
            }
        }
    }
    return max;
}
int main (void)
{
    int n[2][3],i , j,max;
    printf("Enter ");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&n[i][j]);
        }
    }
    max = findmax (n,2);
    printf("Max is %d",max);
    return 0;
}