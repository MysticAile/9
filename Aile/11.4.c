#include(stdio.h)
int main(void)
{
    double x, y;
    printf("Enter x:\n";
    scanf("%lf",&x);
    if(x<=50){
        y = 0.53 * x;
    }
    else{
        y = 0.58 * x - 2.5;
    }
    printf("y=%f\n",x , y);
    return 0;
}