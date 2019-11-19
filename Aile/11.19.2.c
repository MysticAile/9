#include<stdio.h>
#include<math.h>
int main (void)
{
    int n,i=1,x,c;
    float pi=0.0,b;
    printf("Enter n:\n");
    scanf("%d",&n);
    for(c=1;c<=n;c++)
    {
        x = pow(-1,c+1);
        b = 1.0/i;
        pi += x*b;
        i = i+2;
    }
    printf("%lf",pi*4);
    return 0;
}