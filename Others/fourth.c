#include<stdio.h>

void fun(int a[],int *m,int *k,int n,int i)
{
    *m=0;
    *k=0;
    for(i=0;i<n;i++)
    {
        if(a[i]>=60)
        (*m)++;
        else
        (*k)++;
    }
}




int main()
{
    int n,i,m,k;
    printf("请输入数组大小：\n");
    scanf("%d",&n);
    int a[n];
    printf("请输入分数：\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    fun(a,&m,&k,n,i);
    printf("及格人数为：%d  不及格人数为：%d\n",m,k);
    return 0;
}