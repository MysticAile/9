#include <stdio.h>
struct Stu_Info
{
    char no[10];
    char name[20];
    float chinese;
    float math;
    float english;
    float ave;
};
typedef struct Stu_Info STU;

int main(void)
{
    float ave, sum = 0;
    int n,i,j;
    struct Stu_Info stu[10];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("please input student no:", i);
        scanf("%s", stu[i].no);
        scanf("%s", stu[i].name);
        scanf("%f", &stu[i].chinese);
        scanf("%f", &stu[i].math);
        scanf("%f", &stu[i].english);
        sum = stu[i].chinese + stu[i].math + stu[i].english;
        stu[i].ave = sum / 3;
    }
    int min_index;
    for(i=0;i<n-1;i++)
    {
        min_index=i;
        for(j=i+1;j<n-1;j++)
        {
            if(stu[j].ave<stu[min_index].ave)
            {
                min_index=j;
            }
        }
        if(min_index!=i)
        {
            STU tmp;
            tmp=stu[i];
            stu[i]=stu[min_index];
            stu[min_index]=tmp;
        }
    }
    for(i=0;i<n;i++)
    {
        printf("name=%s,ave=%.1lf\n",stu[i].name,stu[i].ave);
    }
    int max = 0;
    for (i = 1; i < n; i++)
    {
        if (stu[i].ave > stu[max].ave)
        {
            max = i;
        }
    }
    printf("max name = %s , ave = %.1f\n", stu[max].name, stu[max].ave);
    return 0;
}
