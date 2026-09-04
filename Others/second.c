#include<stdio.h>

void fun1(int a[], int n, int *even, int *odd)
{
    int i;
    *even = 0;
    *odd = 0;
    for (i = 0; i < n; i++) {
        if (a[i] % 2 == 0)
            (*even)++;
        else
            (*odd)++;
    }
}

int main()
{
    int i,n, even, odd;
    printf("请给出数组大小：\n");
    scanf("%d",&n);
    int a[n];
    printf("请输入数字：\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    fun1(a, n, &even, &odd);
    printf("偶数: %d, 奇数: %d\n", even, odd);
    return 0;
}