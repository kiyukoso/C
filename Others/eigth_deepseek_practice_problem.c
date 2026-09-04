//求矩阵转置

#include<stdio.h>

void rotate(int m,int a[m][m])
{
    int i,j,temp;
    for(i=0;i<m;i++)
    {
        for(j=0;j<i;j++)
        {
            temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
    }
}



void printa(int m,int a[m][m])
{
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}



int main()
{
    int m;;
    printf("请输入矩阵阶数：\n");
    scanf("%d",&m);
    int a[m][m];
    printf("请输入矩阵元素：\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("原矩阵为：\n");
    printa(m,a); 
    rotate(m,a);
    printf("转置矩阵为：\n");
    printa(m,a);
}