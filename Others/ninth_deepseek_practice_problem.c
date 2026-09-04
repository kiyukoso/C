//矩阵顺时针旋转：非转置

#include<stdio.h>

void rotate(int m,int a[m][m])
{
    int i,j,temp1;
    for(i=0;i<m;i++)
    {
        for(j=0;j<i;j++)
        {
            temp1=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp1;
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


void printb(int m,int a[m][m])
{
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<(m-1)/2;j++)
        {
            if(j!=((m-1)/2))
            {
                int temp2;
                temp2=a[i][m-j-1];
                a[i][m-j-1]=a[i][j];
                a[i][j]=temp2;
            }
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",a[i][j]);
            //与转置不同处，即转置后将每一行逆序
        }      
        printf("\n");
    }
}


int main()
{
    char choice;
    do {
    
        int m;
        printf("请输入矩阵阶数：\n");
        scanf("%d",&m);
        printf("请输入矩阵：\n");
        int a[m][m];
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
    printf("顺时针旋转后的矩阵为：\n");
    printb(m,a);
    printf("是否继续？(y/n): ");
    scanf(" %c", &choice);
        } while (choice == 'y' || choice == 'Y');
    return 0;
}
