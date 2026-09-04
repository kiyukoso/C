#include<stdio.h>

void bubbleSort(int arr[],int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            }
        }
    }
}


int main()
{
    int n,i;
    printf("请输入数组大小；\n");
    scanf("%d",&n); 
    int arr[n];
    printf("请输入数组：\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    bubbleSort(arr,n);
    printf("排序后的数组：\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
//数组的冒泡排序