#include <stdio.h>
int main(void)
{
    int a, mark;
    printf("Enter a:\n");
    scanf("%d", &a);
        if (a >= 90)

        {
            mark=4;
        }
        else if (a >= 80)
        {
            mark=3;
        }
        else if (a >= 70)
        {
            mark=2;
        }
        else if (a >= 60)
        {
            mark=1;
        }
        else if (a < 60)
        {
            mark=0;
        }
    switch (mark)
    {
    case 4:
        printf("Excellent");
        break;
    case 3:
        printf("Good");
        break;
    case 2:
        printf("Aveage");
        break;
    case 1:
        printf("Poor");
        break;
    case 0:
        printf("Failing");
        break;
    default:
        printf("Error");
        break;
    }
    return 0;
}
