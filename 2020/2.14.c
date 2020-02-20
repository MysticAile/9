#include <stdio.h>
int main(void)
{
    int lower, upper;
    float celsius, fahr;
    printf("Enter lower and upper :");
    scanf("%d%d", &lower, &upper);
    fahr = lower;
    if (lower >= upper || lower >100 || upper > 100)
    {
        printf("Invalid\n");
    }
    else
    {
        printf("fahr celsius\n");
        while (fahr <= upper)
        {
            celsius = 5.0 * (fahr - 32) / 9;
            printf("%-1.1lf  %-1.1lf\n", fahr, celsius);
            fahr = fahr + 2;
        }
    }
    return 0;
}