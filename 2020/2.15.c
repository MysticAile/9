#include<stdio.h>
int main(void)
{
    int lower,upper;
    scanf("%d %d",&lower,&upper);
    if(upper<lower || upper>100 || lower>100)printf("Invalid.");
    else
    {
        printf("fahr celsius\n");
        for(;lower<=upper;lower=lower+2)
        {
            printf("%d",lower);
            printf("%6.1lf\n",5*(lower-32)/9.0);
        }
    }
    return 0;
}
