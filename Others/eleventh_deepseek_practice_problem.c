#include<stdio.h>

int findMax(int *arr,int size)
{
    int MAX=*arr;
    int *p;
    for(p=arr+1;p<arr+size;p++)
    {
        if(*p>MAX)
        {
            MAX=*p;
        }
    }
    return MAX;
}
//MAX为数组首个数，然后定义一个指针p,*p为这个地址中存入的值，p为地址,for循环中将数组第二项的地址赋给p，p++代表地址加1也就是变成数组后几项的地址，然后再比较

int main()
{
    int arr[5]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    int max=findMax(arr,size);
    printf("最大值为：%d\n",max);
    return 0;
}