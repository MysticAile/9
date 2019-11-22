#include<stdio.h>                //求球的体积

int main(void)
{
    float r, v,pi;
    r = 1.0;
    pi=3.1415926;
    v = 4/3.0*r*r*r*pi;
    printf("v is %f\n", v);
    return 0;
} 