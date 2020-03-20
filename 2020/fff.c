#include <stdio.h>
#include <math.h>
int main(void)
{
    float b, c, d;
    int a;
    scanf("%d,%f", &a, &b);
    switch (a)
    {
    case 0:
        if (b <= 1 )
        {
            c = 10.0;
        }
        else
        {
            d = ceil(b - 1.0);
            c = d * 3 + 10.0;
        }
        printf("Price:%.2f\n", c);
        break;
    case 1:
        if (b <= 1)
        {
            c = 10.0;
        }
        else
        {
            d = ceil(b - 1.0);
            c = d * 4 + 10.0;
        }
        printf("Price:%.2f\n", c);
        break;
    case 2:
        if (b <= 1)
        {
            c = 15.0;
        }
        else
        {
            d = ceil(b - 1.0);
            c = d * 5 + 15.0;
        }
        printf("Price:%.2f\n", c);
        break;
    case 3:
        if (b <= 1 )
        {
            c = 15.0;
        }
        else
        {
            d = ceil(b - 1.0);
            c = d * 6.5 + 15;
        }
        printf("Price:%.2f\n", c);
        break;
    case 4:
        if (b <= 1 )
        {
            c = 15.0;
        }
        else
        {
            d = ceil(b - 1.0);
            c = d * 10 + 15.0;
        }
        printf("Price:%.2f\n", c);
        break;
    default:
        printf("Error in Area\n");
    }
    return 0;
}
