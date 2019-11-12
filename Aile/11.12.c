#include <stdio.h>
int main(void)
{
    int a;
    printf("Enter a:\n");
    scanf("%d", &a);
    for (a; a < 5; a++)
    {
        switch (a)
        {
        case 4:
            printf("grapes is 10.20\n");
            break;
        case 3:
            printf("oranges is 4.10\n");
            break;
        case 2:
            printf("pears is 2.50\n");
            break;
        case 1:
            printf("apples is 3.00\n");
            break;
        case 0:
            break;
        default:
            printf("0");
            break;
        }
    }
    return 0;
}
