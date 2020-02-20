#include<stdio.h>
void splitfloat(float x , int *intpart , float *fracpart)
{
    *intpart = (int )x;
    *fracpart = x- *intpart;
}
int main(void)
{
    float a ,fracpart;
    int intpart;
    printf("Enter a:");
    scanf("%f",&a);
    splitfloat(a , &intpart, &fracpart);
    printf("zhenshu = %d  xiaoshu = %f",intpart , fracpart);
    return 0;
}