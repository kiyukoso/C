#include<stdio.h>

#define size 5

double fun(double a[],double average)
{
    int i;
    double s=0;
    for(i=0;i<size;i++)
    {
        s+=a[i];
    }
    average=s/size;
    return average;
}


int main()
{
    double a[size],k,average;
    int i;
    printf("请输入5个整数：\n");
    for(i=0;i<size;i++)
    {
        scanf("%lf",&a[i]);
    }
    k=fun(a,average);
    printf("平均值为：%lf\n",k);
    return 0;
}
//求数组均值