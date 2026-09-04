#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<Windows.h>
#include<string.h>
#include<time.h>
#include<stdbool.h>


//break语句的作用是跳出循环或switch语句，结束程序的执行。
//continue语句的作用是跳过当前循环的剩余部分,即continue语句后面的代码不会被执行，继续下一次循环。

// int main()
// {
//     int year;
//     while(1)
//     {
//     if((year%4==0&&year%100!=0)||year%400==0)
//         printf("Leap year\n");
//     else
//         printf("Not a leap year\n");
//     }
//         return 0;
// }

// int main()
// {
//     int i=0,a=0,b=2,c=3,d=4;
//     i=(a++&&++b&&d++);
//              a++表示先使用a的值再自增，++b表示先自增再使用b的值,则a++表示左端为0（假），所以右端不再计算，++b/d++不会被执行。
//              若a++&&++b有一个不满足，则这个整体（前面这个式子）为0，不会进行下一步计算
//     printf("%d %d %d %d %d\n",i,a,b,c,d);
//     int x=0,y=1,z=2,m=4;
//     x=(y++||++z||m++);
//              y++表示先使用y的值再自增，++z表示先自增再使用z的值,y++表示左端为1（真），所以右端不再计算，++z/m++不会被执行。
//              若y++||++z有一个满足，则这个整体（前面这个式子）为1，不会进行下一步计算
//     printf("%d %d %d %d %d\n",x,y,z,m);
//     return 0;
// }
//C语言与或非逻辑中的“短路”现象
//即在逻辑运算中，如果第一个条件已经能够确定整个表达式的值，那么后面的条件就不会再被计算。这种现象称为“短路”。
//&&：左边为假（即表达式输出值为0）时，右边的表达式不会被计算。
//||：左边为真（即表达式输出值非0）时，右边的表达式不会被计算.

// int main()
// {
//     int day=0;
//     while( scanf("%d", &day)==1 )
//     {
//     switch(day)
//     {
//         case 1:
//         case 2:
//         case 3:
//         case 4:
//         case 5:
//             printf("工作日\n");
//             break;
//         case 6:
//         case 7:
//             printf("休息日\n");
//             break;
//         default:
//             printf("Invalid day\n");
//     }
//     }
//     return 0;
// }
//switch语句中如果有重复部分可以使用上述方法。原理是没有break语句时，程序会继续执行下一个case的代码，直到遇到break语句或者switch语句结束为止。






// int gcd(int a, int b)
// {
//     int c;
//     while(b!=0)
//     {
//         c=a%b;
//         a=b;
//         b=c;
//     }
//     return a;
// }



// int main()
// {
//     int x,y,z;
//     printf("请输入两个数字：\n");
//     scanf("%d %d",&x,&y);
//     z=gcd(x,y);
//     printf("最大公约数为：%d\n",z);
//     return 0;
// }
//比特练习题求两个数的最大公约数（GCD函数，取模计算）

// int main()
// {
//     int year,stayear,endyear;
//     printf("请输入年份范围： \n");
//     scanf("%d %d",&stayear,&endyear);
//     printf("闰年为：\n");
//     int i;
//     for(i=stayear;i<=endyear;i++)
//     {
//         year=i;
//         if((year%4==0&&year%100!=0)||year%400==0)
//             printf("%d\n",year);
//     }
//     return 0;
// }
//比特练习题求指定年份范围内的所有闰年（for循环，取模计算）

// int main()
// {
//      int num;
//      int stanum,endnum;
//      char choice;
//      do
//      {
//      printf("请输入数字范围: \n");
//      printf("(开始数字最小为2)\n");
//      scanf("%d %d",&stanum,&endnum);
//      printf("素数为：\n");
//      for(num=stanum;num<=endnum;num++)
//      {
//          int count=0;
//          for(int i=2;i<=sqrt(num);i++)
//          {
//             if(num%i==0)
//                 count++;
//          }
//             if(count==0)
//                 printf("%d\n",num);
//      }
//         printf("是否继续？(y/n): ");
//         scanf(" %c", &choice); //使用空格来读取输入的字符，避免读取到换行符。
//      }while(choice=='Y'||choice=='y');
//     return 0;
//  }
// 比特练习题求指定数字范围内的所有素数

// int main()
// {
//     int arr[10]={3,5,99,445,8,564,7,123,0,4};
//     int i,j;
//     for(i=0;i<10;i++)
//     printf("%d ",arr[i]);
//     printf("排序后为: \n");
//     for(i=0;i<10;i++)
//     {
//         for(j=i+1;j<=9;j++)
//         {
//         while(arr[i]<arr[j])
//         {
//             int temp;
//             temp=arr[i];
//             arr[i]=arr[j];
//             arr[j]=temp;
//         }
//         }
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }
//比特练习题冒泡排序

// int main()
// {
//     int i;
//     for(i=1234;i!=0;i/=10)
//     {
//         printf("%d ",i%10);
//     }
//     return 0;
// }
//逆序打印每位数字


// int main()
// {
//     int i=0;
//     while(i<=10)
//     {   i++;
//         if(i==6)
//         continue;
//         printf("%d ",i); //使用continue语句跳过6这个数字,而使用break语句则会跳出循环。
//         if(i==8)
//         break; //使用break语句跳出循环，而使用continue语句则会跳过8这个数字。
//     }
//     return 0; 
// }
//break语句的作用是跳出循环或switch语句，结束程序的执行。
//continue语句的作用是跳过当前循环的剩余部分,即continue语句后面的代码不会被执行，继续下一次循环。

// int main()
// {
//     printf("Hello World!\n");
//         goto next;
//     printf("Nihao World!\n");
// //goto语句的作用是跳转到指定的标签处，标签处可以是函数内部的标签，也可以是函数外部的标签。
// //标签的格式为：label:，标签名可以是任意的字符串，但不能是关键字，也不能是数字。
//     next:    
//     printf("Happy World!\n");
//     return 0; 
// }
//goto语句的作用是跳转到指定的标签处，标签处可以是函数内部的标签，也可以是函数外部的标签。
//可以用于一次性跳出多个循坏而不使用多个break，但要少用。
//goto语句的使用需要谨慎，因为它会破坏程序的逻辑结构，容易导致程序的错误。

// int main()
// {
//     char input[20]={0};
//     system("shutdowmn -s -t 60");
//     again:
//     printf("你的电脑将在60秒后关机，是否继续？(y/n): ")；
//     scanf("%s",input);
//     if(strcmp(input,"y")==0)
//     {
//         system("shutdown -a");
//     }
//     else 
//     goto again;
//     return 0; 
// }
//system是<string.h>头文件中的函数，用于执行系统命令。
//shutdown是<shell.h>头文件中的函数，用于关闭电脑。
//shutdown -s -t 60表示在60秒后关机。
//shutdown -a表示取消关机。
//strcmp是<string.h>头文件中的函数，用于比较两个字符串是否相等。
//strcmp返回0表示两个字符串相等，返回非0表示两个字符串不相等。

// int main()
// {
//     int i=0;
//     int num;
//     char choice;
//     int rannum;

//     srand((unsigned int)time(NULL));//或者srand(time(0));
//     printf("----------欢迎来到猜数字游戏！----------\n");
//     printf("----------1.开始游戏----------\n");
//     printf("----------2.退出游戏----------\n");
//     scanf("%d", &i);
//     switch(i)
//     {
//         case 1:
//             printf("游戏开始！\n");
//             break;
//         case 2:
//             printf("游戏结束！\n");
//             return 0;
//         default:
//             printf("输入错误，请重新输入！\n");
//             break;
//     }

//     do
//     {
//         time_t starttime=time(NULL);
//         rannum=rand()%100+1;//随机数函数格式：rand() %（b-a+1) + a生成a~b之间的随机数
//         int allchance=4;
//         printf("请输入你猜的数字：\n");
//         printf("猜测范围为1~100\n");
//         while(allchance>0)
//         {
//             scanf("%d", &num);
//             allchance--;
//             if(num==rannum)
//             {
//                 printf("恭喜你，猜对了！\n");
//                 printf("是否继续？(y/n): ");
//                 scanf(" %c", &choice);
//                 if(choice == 'y' || choice == 'Y')
//                     continue;   // 跳转到 do-while 的 while 判断，条件为真则下一局
//                 else
//                     break;      // 退出整个 do-while
//             }
//             //continue会跳过本次循环进入下个循环
//             else if(num<rannum)
//             {
//                 printf("猜小了！\n");
//                 printf("你还有%d次机会\n",allchance);
//             }
//             else if(num>rannum)
//             {
//                 printf("猜大了！\n");
//                 printf("你还有%d次机会\n",allchance);
//             }
//             if(allchance==0)
//             {
//                 printf("机会用完了，你猜错了！\n");
//                 printf("正确答案是%d\n",rannum);
//                 printf("是否继续？(y/n): ");
//                 scanf(" %c", &choice);
//             }
//         }
//         time_t endtime=time(NULL);
//         printf("你用时%d秒\n",endtime-starttime);
//     }
//     while(choice=='y'||choice=='Y');
//     printf("游戏结束！\n"); 
//     return 0; 
// }
//猜数字游戏
//rand是伪随机，rand生成的随机数种子默认是1，每次运行程序时生成的随机数都是相同的。
//rand是对一个叫种子的基准值进行运算生成的随机数。
//srand是设置随机数种子的函数，srand(time(0))会将当前时间作为随机数种子，每次运行程序时生成的随机数都是不同的。
//rand() %（b-a+1) + a生成a~b之间的随机数。
//time函数用于获取当前时间，一直为变量，适用于随机种子。
//time_t是时间变量名，starttime和endtime用于记录开始和结束时间，计算游戏用时。

// int main()
// {
//     int num=10;
//     int arr[10];
//     int b[5];
//     printf("%d\n",sizeof(int [10]));
//     printf("%d\n",sizeof(arr));
//     printf("%d\n",sizeof(int [5]));
//     return 0;
// }
//int 是数组元素的类型
//int [10]是数组的类型
//int [10]和int [5]类型不一样
//数组不取地址，但是数组元素要取地址
//如&arr[i]就是数组元素要取地址，arr是数组名
//想打印数组地址--printf("%p\n",arr[i]);
//对于数组a[]={1,2,(3,4),5}，总共四个元素
//(3,4)是逗号表达式，结果取后者，所以sizeof(arr)=16

// int main()
// {
//     char a[]="Hello World!";
//     char b[]="############";
//     int left=0;
//     int right=strlen(a)-1;
//     while(left<=right)
//     {
//         b[left]=a[left];
//         b[right]=a[right];
//         printf("%s\n",b);
//         //休眠一秒
//         Sleep(1000); //Sleep函数是<Windows.h>头文件中的函数，用于暂停程序的执行。
//         //Sleep函数的参数是毫秒数，1000毫秒等于1秒。Sleep函数的使用需要谨慎，因为它会破坏程序的逻辑结构，容易导致程序的错误。
//         system("cls");//cls是<stdlib.h>头文件中的函数，用于清屏。
//         left++;
//         right--;
//     }
//     return 0; 
// }
//练习一：多个字符从两端移动，=向中间汇聚。
//！！这个项目不熟练！！多加理解练习。
//此次练习学到了如何使用Sleep函数暂停程序的执行，以及如何使用字符串数组进行字符串的反转。
//学习了使用cls函数清屏。


//练习二：二分查找：给定一个升序的整型数组，在这个数组中查找指定的值n
//找到了就打印n的下标，找不到就打印“找不到”
//代码1：遍历法：
// int main()
// {
//     int arr[]={1,2,3,4,5,6,7,8,9,10};
//     int n=7;
//     int sz=sizeof(arr)/sizeof(arr[0]);
//     int i=0;
//     for(i=0;i<sz;i++)
//     {
//         if(arr[i]==n)
//         {
//             printf("找到了,下标为%d\n",i);
//             break;
//         }
//     }
//     if(i==sz)
//     {
//     printf("找不到\n");
//     }
//     return 0;
// }

//代码2：二分查找法：（二分法）(升序或降序)
// int main()
// {
//     int arr[]={1,2,3,4,5,6,7,8,9,10};
//     int n=7;
//     int sz=sizeof(arr)/sizeof(arr[0]);
//     int left=0;
//     int right=sz-1;
//     int flag=0;
//     while(left<=right)
//     {
//         int mid=left+(right-left)/2;//这种方法算平均数可以防止溢出。
//         if(arr[mid]<n)
//         {
//             left=mid+1;
//         }
//         else if(arr[mid]>n)
//         {
//             right=mid-1;
//         }
//         else
//         {
//             flag=1;
//             printf("找到了,下标为%d\n",mid);
//             break;
//         }
//     }
//     if(flag==0)
//     {
//         printf("找不到\n");
//     }
//     return 0;
// }
//大大提高了运行效率。
//重要知识点：mid=left+(right-left)/2;这种方式算平均数可以防止溢出。

// int main()
// {
//     int startnum=0;
//     int endnum=0;
//     printf("请输入范围：\n");
//     scanf("%d %d",&startnum,&endnum);
//     int flag=0;
//     int i=0;
//     int count=0;
//     for(i=startnum;i<=endnum;i++)
//     {
//         if(i/10==9||i%10==9)
//         count++;
//     }
//     printf("总共出现%d个数字9\n",count);
//     return 0; 
// }
//比特练习题：求一个范围内的数字9出现的次数

// int main()
// {   
//     int n=100;
//     double sum=0.0;
//     for(int i=1;i<=n;i++)
//     {
//         int sign=0;
//         sign=i%2==0?-1:1;
//         sum=sum+sign*(1.0/i);
//         //用1.0去除i，因为i是整数，而sum是浮点数，不能直接相加，需要产生浮点数。
//         //不能用^运算符，因为^运算符是异或运算符，异或运算符的运算结果是0或1，而0或1不能用于浮点数运算。
//     }
//     printf("结果为：%lf\n",sum);
//     return 0; 
// }
//比特练习题：求1/1-1/2+1/3-1/4+...+1/n的和。

// int main()
// {
//     int n=9;
//     int i=0;
//     for(i=1;i<=n;i++)
//     {
//         for(int j=1;j<=i;j++)
//         {
//             printf("%dX%d=%d ",j,i,j*i);
//         }
//         printf("\n");
//     }   
//     return 0; 
// }
// //比特练习题：打印乘法口诀表.

// int main()
// {
//     _Bool flag=true;
//     bool flag=true;
// }
//bool是C语言中的布尔类型，用于表示真假值，true表示真，false表示假。

// void fun(void)
// {
//     int i=0;
//     scanf("%d",&i);
//     if(i=0)
//     return;
//     //如果i=0，函数会返回，不会执行后面所有的代码。若在循环体中用break只会跳出循环，而return会直接结束函数的执行，避免执行多余的代码。
//     //return可以用于提前结束函数的执行，避免执行多余的代码。
//     //也可以返回值
//     printf("Hello World!\n");
// }
// int main()
// {
//     fun();
//     return 0;
// }
//函数调用.

// void set_a(int a[],int sz)
// {
//     int i=0;
//     for(i=0;i<sz;i++)
//     {
//         a[i]=1;
//     }
// }

// void print_a(int a[],int sz)
// {
//     for(int i=0;i<sz;i++)
//     {
//         printf("%d ",a[i]);
//     }
// }

// int main()
// {
//     int a[10]={0};
//     int sz=sizeof(a)/sizeof(a[0]);
//     set_a(a,sz);
//     print_a(a,sz);
//     return 0;
// }
//数组作为参数传递，修改数组内容不需要返回值，用void
//因为不知道数组大小,所以需要再传一个sz

// int main()
// {
//     printf("%d",printf("%d ",(printf("%d ",43))));
//     return 0;
// }
//printf的返回值规则：其返回值为打印的字符长度
//该例子结果为43 3 2


// void fun(int a);//函数声明

// int main()
// {
//     fun(43);
//     return 0;//函数的调用
// }

// void fun(int a)
// {
//     printf("%d",a); //函数的定义
// }
//单文件函数的定义与声明,先声明可以后定义
//如果没有先声明，则需要在主函数前定义
//多文件时，会把函数和类型的声明放在头文件(.h)
//函数的实现放在源文件(.c)，如own_work中的例子

// #include "test.h"//引用外部文件时需要编译，不能右键runningcode
// // extern int avg;//声明外部变量a,test.c中int a=100，通过extern可以跨文件使用变量

// int main()
// {
//     printf("%d\n",add(1,2));
//     return 0;
// }
//static（静态的），用来修饰局部/全局变量/函数
//extern（外部的），用来声明外部符号/变量，用于在不同文件中共享变量

// void test()
// {
//     static int n=10;
//     //未使用static时，n在printf后生命周期结束，而使用static延长n的生命周期，直到程序结束
//     //但n的作用域不变
//     n++;
//     printf("%d\n",n);
// }

// int main()
// {
//     int i=0;
//     for(i=0;i<5;i++)
//     {
//         test();
//     }
//     return 0;
// }
//static:静态的。
//局部变量例子：n在test函数中是局部变量，每次调用test函数时，n都会重新初始化为10，所以结果是5个11
//若使用static修饰局部变量，则n在test函数中是静态变量，每次调用test函数时，n不会重新初始化为10，所以结果是11~15
//一个全局变量如果被Static修饰，则该变量只能在本文件使用，不能在别的文件使用extern，由外部链接属性变成内部链接属性。



//////////

//栈区存放局部变量、函数参数(int main(){int i=0;return 0;})
//堆区存放动态分配的内存、malloc、calloc、realloc、free
//静态区存放全局变量和静态变量(static int n=100)

//////////


// int fact(unsigned int n)
// {
//     if(n==0)
//     return 1;//递归函数的终止条件：当递归函数调用自身时，必须有一个终止条件，否则会无限递归，导致栈溢出
//     else if(n>=1);
//     return fact(n-1)*n;//递归逻辑
// }

// int main()
// {
//     printf("%d\n",fact(4)); //递归函数的调用
//     return 0; //递归函数的终止条件：当递归函数调用自身时，必须有一个终止条件，否则会无限递归，导致栈溢出
// }
//递归：函数调用自身
//递归函数的终止条件：当递归函数调用自身时，必须有一个终止条件，否则会无限递归，导致栈溢出
//递归函数的参数：递归函数必须有一个参数，用于控制递归的深度，否则会无限递归，导致栈溢出


// void print(int n)
// {
//     if(n>9)
//     {
//     print(n/10);
//     }
//     printf("%d ",n%10);
// }

// int main()
// {
//     int n=1234;
//     print(n);
//     return 0; 
// }
//递归顺序打印数字
//使用递归解决问题时，若层次太深会导致栈溢出
//递归效率一般低于迭代（循环）


// int FB(int n)
// {
//     if(n==1||n==2)
//     return 1;
//     else
//     return FB(n-1)+FB(n-2);
// }

// int main()
// {
//     int n;
//     scanf("%d",&n);
//     printf("%d\n",FB(n));
//     return 0;
// }
//递归：斐波那契数列
//但是随着n的增大，递归效率会降低，因为递归函数调用自身时，会占用栈空间，导致栈溢出

// int main()
// {
//     int a=1;
//     int b=1;
//     int c=0;
//     int n;
//     scanf("%d",&n);
//     while(n>=3)
//     {
//         if(n==1||n==2)
//         printf("%d ",1);
//         else
//         {
//         c=a+b;
//         a=b;
//         b=c;
//         }
//         n--;
//     }
//     printf("%d ",c);
//     return 0; 
//迭代效率更快

////////
//青蛙跳台阶问题,求跳到n级台阶的方法数
//规定一次只能跳1级或2级

// int jump(int n)
// {
//     int step;
//     if(n==1)
//     return 1;
//     else if(n==2)
//     return 2;
//     else if(n>=3)
//     step=jump(n-1)+jump(n-2);
//     return step;
// }

// int main()

// {
//     int n;
//     scanf("%d",&n);
//     printf("%d\n",jump(n));
//     return 0; 
// }
/////////

////////
//汉诺塔问题
//汉诺塔问题：有三个柱子，每个柱子上有一个圆盘，圆盘从小到大排列，从最左边的柱子开始，将所有的圆盘移动到最右边的柱子，每次只能移动一个圆盘，且在移动过程中，圆盘不能放在比它大的圆盘上面。



////////

//移位符号移动的是补码
////////
//signed int的原、反、补码相同
//unsigned int的原、反、补码不同
//反码规则：除去最高位的符号位（1为负数，0为正数），其余位取反
//补码规则：反码最后一位加1
//因此，原码取反加1得补码，补码取反加1的原码

////////

// int main()
// {
//     int a=-10;
//     int b=a<<1;
//     printf("%d\n",b);//打印出来的是原码的值
//     printf("%d\n",a);//a的值不变
//     int c=a>>1;
//     printf("%d\n",c);
//     return 0;
// }
//移动的是补码,不能移动负数个位置：>>-1,这是非法的，因为负数不能移动个位置

//-10的原码是：1000000000000000000000001010
//-10的补码是：1111111111111111111111110110

//<<1代表左移一位：1111111111111111111111101100----b的补码
//b的原码是10000000000000000000000000010100
//结果是-20：开头1代表“-”，10100代表1*2^4+0*2^3+1*2^2+0*2^1+0*2^0=20

//>>1表示右移一位：1111111111111111111111111011---c的补码
//c的原码是10000000000000000000000000000101
//结果是-5：开头1代表“-”。

//左移操作符：<<
//右移操作符：>>
//右移动n位，相当于乘以2^n
/////you移动n位，相当于除以2^n
//左移操作符：将y的二进制表示向左移动x位，左边抛弃x位，右边补0
//右移操作符：将y的二进制表示向右移动x位，（算数右移），左边用原该值的符号位填充，右边丢弃x位


// int main()
// {
//     int a=10;//原码=补码：000000000000000000001010
//     int b=-7;
//     //原码：10000000000000000000000000000111
//     //补码：11111111111111111111111111111001
//     int c=a&b;
//     //根据&的运算规则，c的补码=00000000000000000000000000001000;
//     //开头为0，补码=原码;开头为1，则需再次取反+1求原码;
//     printf("%d\n",c);
// }//计算时仍然使用补码计算
//打印仍然使用原码计算

////////
//位操作符
//&：按（二进制）位与运算，对应的二进制位都为1时，结果为1，否则为0
//|：按位或运算，有1则为1，两个位都为0时，结果为0
//^：按位异或运算，两个位相同为0，不同为1;a^a==0、0^a==a
//~：按位取反运算，将二进制数的每一位取反
////////

///////////////////////

//计算逻辑为：根据值求原码————————求补码——————求运算后的码——————转换成对应的原码并打印值

///////////////////////

////////
//位操作符练习题
//交换两个整数（要求不能有第三个变量）
//!异或特点：
//异或运算支持交换律
//a^a==0;0^b==b
//b^a^a==b;a^b^a==b
// int main()
// {
//     int a,b;
//     scanf("%d %d",&a,&b);
//     a=a^b;
//     b=a^b;//b=(a^b)^b==a
//     a=a^b;//a=(a^b)^a==b
//     printf("%d %d\n",a,b);
//     return 0;
// }
////////

// int main()
// {
//     int a=1;
//     int b=2;
//     int c=(a>b,a=b+10,a,b=a+1);
//     //逗号表达式中,需要从左到右依次计算,然后返回最后一个表达式的值
//     printf("%d",c);
//     return 0;
// }
//逗号表达式：表达式中可以有多个表达式，但只有最后一个表达式的值会被返回
//常见的for循环的逗号表达式就是如此:for(i=0,j=1;i<10;i++,j+=2)

// struct student
// {
//     char name[20];//成员列表,名字
//     int age;//年龄
//     float score;//成绩
// };//";"不能丢
// //结构体的声明

// struct book
// {
//     char title[20];//成员列表,书名
//     float price;//价格
//     int id;//编号
// };//";"不能丢

// struct key
// {
//     double temperature;
//     char season;
//     struct student s;//结构体中包含结构体
// };

// int main()
// {
//     struct student s1={"张三",20,90.5f};//创建并初始化一个结构体变量s1
//     struct key T={28.51,'s',{"张三",20,90.5f}};//结构体中包含结构体的初始化
//     printf("%s %d %.1f\n",s1.name,s1.age,s1.score);//结构体的打印
//     printf("%.2f %c %s %d %.1f\n",T.temperature,T.season,T.s.name,T.s.age,T.s.score);
//     //结构体包含结构体的打印方法
//     //结构体变量名.成员名
//     T.s.age=18;
//     printf("%s %d %.1f\n",s1.name,s1.age,s1.score);
//     printf("%.2f %c %s %d %.1f\n",T.temperature,T.season,T.s.name,T.s.age,T.s.score);
//     return 0;
//     //修改s1中的age时：s1.age=18
//     //修改T中s的age时：T.s.age，但这种方法不会改变s1的age，只会改变T中的s的age！！！
// }
//float型的一定要加f

// int main()
// {
//     char a = 10;
//     //000000000000000000000000000001010
//     //00001010 - a  截断
//     char b = 120;
//     //00000000000000000000000001111000
//     //01111000 - b
//     char c = 0;
//     //
//     c = a + b;
//     //00001010 - a
//     //
//     //01111000 - b
//     //00000000000000000000000000001010
//     //00000000000000000000000001111000
//     //00000000000000000000000010000010
//     //10000010 - c
//     //11111111111111111111111110000010 补码
//     //10000000000000000000000001111101 反码
//     //10000000000000000000000001111110 原码
//     printf("%d\n", c);//-126

//     //%d 是以10进制的形式打印有符号的正数
//     //%u 是以10进制的形式打印无符号的正数
//     return 0;
// }
//整型提升


// int sum(int num)
// {
//     static int count=0;
//     if(num>9)
//         sum(num/10);
//     count+=num%10;
//     return count;
// }

// int main()
// {
//     int num;
//     scanf("%d",&num);
//     printf("%d\n",sum(num));
//     return 0;
// }
//比特练习题：求一个数的每位之和（递归实现）

// int n_k(int n,int k)
// {
//     if(k>1)
//     return n_k(n,k-1)*n;
//     else if(k==0)
//     return 1;
//     else 
//     return n; 
// }

// int main()
// {
//     int n,k;
//     scanf("%d %d",&n,&k);
//     printf("%d\n",n_k(n,k));
//     return 0;
// }
//比特练习题：求n的k次方（递归实现）


// void print(int k)
// {
//     int i=0;
//     for(i=31;i>=0;i--)
//     {
//         printf("%d",(k>>i)&1);//k>>i得到的是移动i位后的补码；然后与i进行&计算，计算的时候用补码，打印用原码
//     }
//     printf("\n");
// }

// int getcount(int m,int n)
// {
//     int count=0;
//     for(int i=31;i>=0;i--)
//     {
//         if(((m>>i)&1)!=((n>>i)&1))
//         count++;
//     }
//     return count;
// }
//!重点：(num>>i)&1可以求出二进制的每一位的值
//也可以用异或的写法
//{
//  int temp=m^n;//把相同的变成0，不同的变成1 
//  int count=0;
//  while(x!=0)
//{
//  count+=x&1;//与(num>>1)&1同理，如果最后一位是1，说明之前这里m、n不相同，然后&1后等于1，count计数
//  x=x>>1;//判断下一位
//}
//}

// int main()
// {
//     int m,n;
//     while(scanf("%d %d",&m,&n)==2)
//     {
//         print(m);
//         print(n);
//         printf("%d\n",getcount(m,n));
//     }
//     return 0;
// }
//比特练习题：求两个数二进制中不同位的个数

// int num(int n)
// {
//     int count=1;
//     while(n>9)
//     {
//         n/=10;
//         count++;
//     }
//     return count;
// }

// void narnum(int stanum,int endnum)
// {
//    int i=0;
//    int n=0;
//    int zzz=0;
//    for(i=stanum;i<=endnum;i++)
//     {
//         int temp=i;
//         n=num(i);
//         int sum=0;
//         for(int j=1;j<=n;j++)
//         {
//             int last=temp%10;
//             temp/=10;
//             sum+=pow(last,n);
//         }
//         if(sum==i)
//         {
//             printf("水仙花数为：%d\n",sum);
//             zzz++;
//         }
//     }
//     if(zzz==0)
//     {
//         printf("没有水仙花数\n");
//     }
// }

// int main()
// {
//     int stanum,endnum;
//     printf("请输入范围：\n");
//     scanf("%d %d",&stanum,&endnum);
//     narnum(stanum,endnum);
//     return 0;
// }
//比特练习题：求水仙花数
//“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，如:153＝1^3＋5^3＋3^3，则153是一个“水仙花数”。

// int main()
// {
//     int a=10;
//     int* p=&a;//p就是指针变量，用来存放地址，类型叫“int* ”
//     printf("%p\n",p);//打印指针变量的值，即a的地址
//     char ch='x';
//     char* px=&ch;
//     printf("%p\n",px);//打印指针变量的值，即ch的地址
//     printf("%d\n",*p);//*是解引用操作符，*p的意思是通过p里面的地址去找到p所指向的对象，也就是a，即*p==a
//     *p=10;
//     printf("%d\n",a);//发现a的值变了，说明*p就是a，也就是说可以通过*p控制a的值

//     return 0;
// }
//内存单元（一个字节）的编号==地址==指针
//int说明p指向的对象类型，*表示p是一个指针变量，&表示取地址运算符

// int main()
// {
//     int a=10;
//     int* p=&a;

//     char ch='x';
//     char* pc=&ch;

//     printf("%zu\n",sizeof(int*));
//     printf("%zu\n",sizeof(char*));

//     return 0;
// }
//指针变量大小（所占空间）
//32/64位的机器，地址是32/64个bit位，需要4/8个字节的空间，指针变量的大小是4/8个字节
//指针变量的大小与所指向的对象类型无关，都是4/8个字节，只与机器的位数有关

// int main()
// {
//     int a=0x11223344;
//     int *p=&a;
//     *p=0;//将四个字节段全部改为0,a变为0x00000000
//     int b=0x55667788;
//     char* pc=&b;
//     *pc=0;//将b的最低字节改为0,b变为0x55667700
//     return 0;
// }
//指针类型变量的意义,决定了使用该指针变量的权限

// int main()
// {
//     int a=0x11223344;
//     int* pi=&a;
//     char* pc=(char*)&a;
//     printf("%p\n",pi);
//     printf("%p\n",pi+1);//由于int型缘故，+1后，地址应该加4字节
//     printf("%p\n",pc);
//     printf("%p\n",pc+1);//由于char型缘故，+1后，地址应该加1字节
//     return 0;
// }
//指针加减整数

// int main()
// {
//     char ch='x';
//     // int* pc=&ch;//错误，类型不匹配
//     void* pv=&ch;//可使用
//     printf("%p\n",pv);
//     // printf("%c\n",*pv);//错误，void*型指针不能直接解引用
//     printf("%c\n",*(char*)pv);//正确，需要强制类型转换
//     return 0;
//}
//void*型指针，void*型指针是万能指针，可以指向任意类型的变量，但不能直接解引用，需要强制类型转换

// int main()
// {
//     int a[5]={1,2,3,4,5};
//     int* p=a;//不需要取地址符&，a就是数组首元素的地址
//     int i=0;
//     for(i=0;i<5;i++)
//     {
//         printf("%p ",p);//p内存的地址不会变
//         printf("%d\n",*(p+i));//p+i是下标为i的元素地址，再用*解引用得到值
//     }
//     printf("\n");
//     int* pi=a;
    
//     for(pi=a;pi<&a[5];pi++)
//     {
//         printf("%p ",pi);//指针自增改变p内存的地址
//         printf("%d\n",*pi);//通过指针自增
//     }
//     return 0;
// }
//指针+/-整数运算，结果为指针

// int main()
// {
//     int a[10]={0};
//     int* p=a;
//     int* pa=&a[9];
//     printf("%d\n",pa-p);//pa-p是指针-指针运算,p+p=pa
//     return 0;
// }
//指针-指针运算,结果为整数
//前提是两个指针指向同一个数组的元素，结果为两个指针之间的元素个数

// size_t mystrlen(char* p)
// {
//     char* pa=p;
//     while(*(++p));//\0的ASCII码是0，*p!='\0'等价于*p，若为\0则为假，跳出循环
//     return p-pa;
// }//strlen函数的实现，返回字符串长度

// int main()
// {
//     char a[]="abcdef";
//     printf("%zu\n",mystrlen(a));
//     return 0;
// }

// int main()
// {
//     int a[]={1,2,3,4,5};
//     int* p=a;
//     int sz=sizeof(a)/sizeof(a[0]);
//     while(p<&a[sz])//有效下标为0~sz-1，&a[sz]是数组最后一个元素的下一个地址
//     {
//         printf("%d ",*p);
//         p++;
//     }
//     return 0;
// }
//指针的大小关系运算

// int main()
// {
//     const int a=10;
//     //a=100；报错，不可修改，但a仍然是变量
//     printf("%d\n",a);
//     return 0;
// }
//const修饰变量

// int main()
// {
//     const int a=10;
//     const int* p=&a;
//     printf("%d\n",*p);
//     //*p=100;报错，不能通过p修改a的值
//     //const放在*左边的时候，修饰的是指针变量指向的内容，约束的是右边的*p(即a),不能通过指针变量修改它指向的内容，但是指针变量的指向可以修改
//     int m=100;
//     p=&m;
//     printf("%d\n",*p);
//     int* const pa=&a;
//     *pa=100;//const放在*右边的时候，修饰指针变量本身，约束p，能通过指针变量修改它指向的内容，但是指针变量的指向不可以修改
//     printf("%d\n",a);
//     return 0;
// }
//const修饰指针变量，const修饰的是指针变量所指向的内容，而不是指针变量本身
//const :常属性的；修饰的变量不能被改变

// int main()
// {
//     // int a=10;
//     // int* p;
//     // *p=20;//p是野指针
//     // printf("%d",*p);

//     // int a[10]={0};
//     // int* p=a;
//     // for(int i=0;i<=11;i++)
//     // {
//     //     *(++p)=i;//越界，野指针
              //*(++p):先+再用p，即*(p+1)
              //*(p++):先用p再+，即先*p再*(p+1)
//     //     printf("%d ",*(++p));
//     // }

//     return 0;
// }
//野指针:指针所指向的位置未知，其指向的内容不属于当前程序
//成因：指针变量未初始化;当指针指向的范围超过数组的范围的时候，p就是野指针;指针指向的空间释放了
//避免形成野指针方法:
//1.若不知道该指针取谁的地址，可以赋值NULL来初始化;例如：int* p=NULL
//2.小心指针越界
//3.指针变量不再使用时，及时置NULL。指针使用之前检查有效性
//4.不要返回指针所处函数外的局部变量的地址

//#define NDBUGE//加入这一句后，会禁用所有的assert语句
// #include<assert.h>

// int main()
// {
//     int a=10;
//     int* p=&a;
//     *p=100;
//     assert(p!=NULL);
//     printf("%d\n",*p);
//     p=NULL;
//     assert(p!=NULL);
//     printf("haha\n");
//     return 0;
// }
//assert断言：assert.h头文件定义了宏assert(),用于在运行时确保程序符合指定条件，如果不符合，就报错终止运行
//assert用于检查错误非常好用

//#include<assert.h>

// size_t my_strlen(const char* p)
// {
//     assert(p!=NULL)
//     char* pa=p;
//     while(*(p++));//先解引用p再p++
//     return p-pa-1;//p为最后一个有效字符时，*（p++)为'\0'，但此时p的地址相较于开始多计入了一位'\0'，因此要减1
//     //若为（++p），则不需要减1
// }

// int main()
// {
//     char a[]="abcdef";
//     printf("%zu\n",my_strlen(a));
//     return 0;
// }
//strlen函数完善版

// void exchange(int* a,int* b)
// {
//     int temp=0;
//     temp=*a;
//     *a=*b;
//     *b=temp;
// }
// //通过得到a,b的地址，交换两个地址中存放的值

// int main()
// {
//     int a=1;
//     int b=0;
//     exchange(&a,&b);
//     printf("%d %d",a,b);
//     return 0;
// }
//指针用于交换两个值(传地址)

void reverse(int* p,int start,int end)
{
    while(start<end)
    {
        int temp=p[start];
        p[start]=p[end];
        p[end]=temp;
        start++;
        end--;//由外向内靠近
    }
}

// void rotate(int* p,int n,int k)
// {
//     if(n==0)
//     return;
//     k%=n;
//     reverse(p,0,n-1);//反转整个数组:reverse([A][B]) = [ reverse(B) ][ reverse(A) ]
//     reverse(p,0,k-1);//反转前k个元素，反转reverse(B) → 变回 [ B ]
//     reverse(p,k,n-1);//反转后n-k个元素，反转reverse(A) → 变回 [ A ]
// }
// //[A]为前n-k个元素
// //[B]为后k个元素

// int main()
// {
//     int n=0;
//     scanf("%d",&n);
//     int a[n];
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     printf("原数组为:\n");
//     for(int j=0;j<n;j++)
//     {
//         printf("%d ",a[j]);
//     }
//     printf("\n");
//     printf("请输入循环右移的长度:\n");
//     int k;
//     scanf("%d",&k);
//     rotate(a,n,k);
//     printf("新数组为:\n");
//     for(int j=0;j<n;j++)
//     {
//         printf("%d ",a[j]);
//     }
//     return 0;
// }
//deepseek练习题：编写一个函数 void rotate(int arr[], int n, int k)，实现将长度为 n 的一维整型数组中的元素循环右移 k 个位置。
// 示例：
// 输入：arr = [1, 2, 3, 4, 5], k = 2
// 输出：[4, 5, 1, 2, 3]
//后k个元素需要往前跳n-k步