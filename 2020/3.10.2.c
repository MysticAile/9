#include <stdio.h>
struct student
{
    char name[20];
    int age;
    int s1, s2;
};
void aaa(struct student sss)
{
    sss.age = 33;
}
int main(void)
{
    struct student stu = {"Alxe", 22,98, 100};
    aaa(stu);
    printf("%d", stu.age);
    return 0;
}