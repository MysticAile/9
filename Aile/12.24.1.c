#include<stdio.h>//求(x1,y1),(x2,y2)两坐标点之间的距离
#include<math.h>
double dist (double x1,double y1,double x2,double y2)
{
    double l;
    l = sqrt((y2-y1)*(y2-y1) + (x2-x1)*(x2-x1));
    return l;
}
int main (void)
{
    double x1,x2,y1,y2;
    printf("Enter x1 x2 y1 y2 ");
    scanf("%lf%lf%lf&lf",&x1 , &x2 , &y1 , &y2);
    printf("%lf",dist(x1,x2,y1,y2));
    return 0;
}               