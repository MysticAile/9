#include <stdio.h>
int main(void)
{
    int a, b;
    double price;
    for (b = 1; b < 5; b++)
    {
        printf("[1] apples\n");
        printf("[2] pears\n");
        printf("[3] oranges\n");
        printf("[4] grapes\n");
        printf("[0] exit \n");

        printf("Enter a:\n");
        scanf("%d", &a);
        if (a == 0)
            break;
        switch (a)
        {
        case 4:
            price = 10.20;
            break;
        case 3:
            price = 4.10;
            break;
        case 2:
            price = 2.50;
            break;
        case 1:
            price = 3.00;
            break;
        case 0:
            break;
        default:
            price = 0;
            break;
        }
        printf("price=%lf\n", price);
    }
    return 0;
}
