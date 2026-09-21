// 学生成绩管理系统（结构体 + qsort + 函数指针）
// 背景：某班级有若干学生，每个学生有学号、姓名、三门课成绩。需要按不同规则排序并输出。

// 要求：

// 定义结构体 Student，包含 id、name[20]、score[3]、total（总分）。

// 从键盘输入学生人数 n（动态分配数组，用 malloc）。

// 输入每个学生信息，自动计算总分。

// 提供一个菜单，让用户选择排序方式：

// 按总分从高到低

// 按学号从小到大

// 按姓名升序（用 strcmp）

// 使用 qsort 排序，比较函数用 函数指针数组 管理。

// 输出排序后的结果，并释放内存。

// 提示：

// qsort 的比较函数原型：int (*)(const void*, const void*)

// 函数指针数组：int (*cmp[3])(const void*, const void*) = {cmp_total, cmp_id, cmp_name};

// 字符串比较用 strcmp，注意包含 <string.h>。


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<Windows.h>

typedef struct student
{
    char name[20];
    int st_num;
    int score;
}stu;

void menu1()
{   
    int num=0;
    stu* p=NULL;
    printf("欢迎来到学生成绩管理系统\n");
    printf("请输入学生总人数：\n");
    scanf("%d",&num);
    p = (stu *)malloc(num*sizeof(stu));//创建结构体数组内存
    if (p == NULL)
    {
        return;          // 分配失败
    }
    printf("已确认总人数为:%d \n",num);
    printf("请输入学生对应的姓名,学号与成绩\n");
    for(int i=0;i<num;i++)
    {
        char name[100];
        int st_num,score;
        scanf("%s",name);
        scanf("%d",&st_num);
        scanf("%d",&score);
        strcpy(p[i].name,name);//将字符串赋值给字符数组
        p[i].st_num=st_num;
        p[i].score=score;
    }
    Sleep(1000);
    for(int j=0;j<num;j++)
    {
        printf("%s ",p[j].name);
        printf("%d ",p[j].st_num);
        printf("%d ",p[j].score);
        prntf("\n");
    }//展示未排序前的名单
    free(p);
}

// void arrange()
// {

// }

// void print()
// {

// }

int main()
{   
    menu1();
    // arrange();
    // print();
    // free(p);
    // p=NULL;
    return 0;
}