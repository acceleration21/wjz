#include <stdio.h>
struct student
{
    char xingming;
    int yuwen;
    int shuxue;
    int yingyu;
};

int index = 0;
struct student arr[10000];
int main()
{

    while (1)
    {
        printf("1--添加成绩\n");
        printf("2--删除成绩\n");
        printf("3--显示全部成绩\n");
        printf("4--业务1所有总分不及格的学生\n");
        printf("5--业务2每一科都不及格的学生\n");
        printf("6--业务3显示总分最高的学生\n");
        printf("7--业务4：显示平均分最高\n");
        printf("8--退出\n");

        printf("请输入相关的功能编码\n");
        int code;
        scanf("%d", &code);

        if (code == 1)
        {
            printf("请输入学生姓名,语文成绩，数学成绩，英语成绩\n");
            char xingming;
            int yuwen;
            int shuxue;
            int yingyu;
            scanf("%s", &arr[index].xingming);
            scanf("%d", &arr[index], yuwen);
            scanf("%d", &arr[index], shuxue);
            scanf("%d", &arr[index], yingyu);
            index++;

            printf("添加成功，回车退出\n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (code == 2)
        {

            if (index >= 1)
            {
                index--;
                printf("删除成功回车继续\n");
                char x;
                scanf("%c", &x);
                scanf("%c", &x);
            }
            else
            {
                printf("删除失败，回车继续\n");
                char x;
                scanf("%c", &x);
                scanf("%c", &x);
            }
        }
        if (code == 3)
        {
            for (int i = 0; i < index; i++)
            {
                printf("第%d个，姓名%s,语文成绩%d,数学成绩%d,英语成绩%d\n",i+1,arr[i].xingming,arr[i].yuwen,arr[i].yingyu);
            }
        }
        if (code == 4)
        {
        }
        if (code == 5)
        {
        }
        if (code == 6)
        {
        }
        if (code == 7)
        {
        }
        if (code == 8)
        {
            printf("回车退出\n");
            break;
        }
    }

    return 0;
}