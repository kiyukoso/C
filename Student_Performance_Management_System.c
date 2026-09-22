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

int cmp_stu_name(const void* a,const void* b)
{
    stu p1=*(stu*)a;
    stu p2=*(stu*)b;
    return strcmp(p1.name,p2.name);
}

int cmp_stu_num(const void* a,const void* b)
{
    stu p1=*(stu*)a;
    stu p2=*(stu*)b;
    return (p1.st_num<p2.st_num)-(p1.st_num>p2.st_num);
}

int cmp_stu_score(const void* a,const void* b)
{
    stu p1=*(stu*)a;
    stu p2=*(stu*)b;
    return (p1.score<p2.score)-(p1.score>p2.score);
}

void arrange(int num,stu* p,int chocie)
{
    switch(chocie)
    {
        case 1:qsort(p,num,sizeof(p[0]),cmp_stu_name);break;
        case 2:qsort(p,num,sizeof(p[0]),cmp_stu_num);break;
        case 3:qsort(p,num,sizeof(p[0]),cmp_stu_score);break;
    }
}//可以改用函数指针数组 
//typedef int(pt_t)(const void*,const void*);
//pt_t p[]={cmp_stu_name,cmp_stu_num,cmp_stu_score};

void menu1(int num,stu* p);
void print(int num,stu* p);

void ready()
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
    menu1(num,p);
    print(num,p);
    free(p);0.
}

void menu1(int num,stu* p)
{   
    printf("请选择排序模式:\n");
    printf("0.EXIT\n");
    printf("1.名字排序\n");
    printf("2.学号排序:\n");
    printf("3.成绩排序:\n");
    int choice=0;
    scanf("%d",&choice);
    switch(choice)
    {
        case 0:return;break;
        case 1:arrange(num,p,choice);break;
        case 2:arrange(num,p,choice);break;
        case 3:arrange(num,p,choice);break;
        default:printf("无效的选择，请重新输入\n");
    }
}

void print(int num,stu* p)
{
        for(int j=0;j<num;j++)
    {
        printf("%s ",p[j].name);
        printf("%d ",p[j].st_num);
        printf("%d ",p[j].score);
        printf("\n");
    }
}

int main()
{   
    ready();
    return 0;
}