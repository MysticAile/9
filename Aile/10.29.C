#include<stdio.h>
int main (void)
{
    int a , b, c, d;
    float x ,y;
    printf("Enter a:\n");
    scanf("%d", &a );
    printf("Enter b:\n");
    scanf("%d",&b);
    printf("Enter c:\n");
    scanf("%d",&c);
    printf("Enter d:\n");
    scanf("%d",&d);
    x=a+b+c+d;
    y=(a+b+c+d)/4.0;
    printf("x=%.1f\n" "y=%.1f\n",x, y);
    return 0;
}