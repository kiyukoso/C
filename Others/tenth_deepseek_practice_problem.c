//指针习题，补全下面的 swap 函数
//并在 main 中调用它交换两个整数的值。


#include <stdio.h>

// 请补全函数体，用指针完成交换
void swap(int *x, int *y) {
    // 你的代码：使用临时变量和 *x, *y
    int temp=*x;
    *x=*y;
    *y=temp;
}


int main() {
    int a = 5, b = 8;
    printf("交换前：a = %d, b = %d\n", a, b);
    swap(&a, &b);  // 补全实参
    printf("交换后：a = %d, b = %d\n", a, b);
    return 0;
}