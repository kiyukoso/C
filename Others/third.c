#include<stdio.h>

int fun(int a[],int i,int n)
{
    int j,temp;
    for(i=0;i<n;i++)
        {
            for(j=i+1;j<(n-i);j++)
                {
                    if(a[i]<a[j])
                    {
                        temp=a[i];
                        a[i]=a[j];
                        a[j]=temp;
                    }

                }
        }
        return a[0];
}


int main()
{
    int i,j,n,k;
    printf("请输入数组大小：\n");
    scanf("%d",&n);
    int a[n];
    printf("请输入数字：\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    k=fun(a,i,n);
    printf("最大值为: %d\n",k);
    return 0;
}