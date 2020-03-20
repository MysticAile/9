#include <stdio.h>
#include<string.h>
#define MAXN 50
struct Stu
{
    char no[5];
    char name[10];
    int scores[3];
};
typedef struct Stu STU;
void input(STU *stu, int n);
int update(STU *stu, int n);
void output(STU *stu, int n);
int main(void)
{
    STU stu[MAXN];
    int n;
    scanf("%d", &n);
    input(stu, n);
    update(stu, n);
    output(stu, n);
    return 0;
}
void input(STU *stu, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("please input %d no:", i);
        scanf("%s", stu[i].no);
        printf("please input %d name:", i);
        scanf("%s", stu[i].name);
        int j;
        for (j = 0; j < 3; j++)
        {
            printf("please input %d stu %d score:", i, i);
            scanf("%d", &(stu[i].scores[j]));
        }
    }
}
int update(STU *stu, int n)
{
    char u_no[10];
    int i;
    int u_scoreid, u_score;
    printf("please input new no:");
    scanf("%s", u_no);
    printf("please input update score index:");
    scanf("%d", &u_scoreid); 
    printf("please input new score:");
    scanf("%d", &u_score);
    for (i = 0; i < n; i++)
    {
        if (strcmp(stu[i].no, u_no) == 0)
        {
            stu[i].scores[u_scoreid] = u_score;
            return i;
        }
    }
    printf("no found %s\n", u_no);
    return -1;
}
void output(STU *stu, int n)
{
    {
        int i;
        for (i = 0; i < n; i++)
        {
            printf("%d:no = %s", i, stu[i].no);
            printf("name = %s", stu[i].name);
            int j;
            for (j = 0; j < 3; j++)
            {
                printf("\t%d\t", stu[i].scores[j]);
            }
            printf("\n");
        }
    }
}