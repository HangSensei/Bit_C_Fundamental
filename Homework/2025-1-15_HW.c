#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>



//描述
//判断一个整数是否能5整除是一个挺简单的问题，懒惰的KiKi还是不想自己做，于是找到你帮他写代码，你就帮帮他吧。
//
//输入描述：
//输入包括一个整数M（1≤M≤100, 000）。
//输出描述：
//输出包括一行，如果M可以被5整除就输出YES，否则输出NO（结果大小写敏感）。
//示例1
//输入：
//10
//输出：
//YES
//
//示例2
//输入：
//9
//复制
//输出：
//NO

/*
int main() {
    int a, b;
    while (scanf("%d", &a) != EOF) { // 注意 while 处理多个 case
        // 64 位输出请用 printf("%lld") to
        if (a % 5) {
            printf("NO");
        }
        else {
            printf("YES");
        }
    }
    return 0;
}
*/

//描述
//KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“*”组成的线段图案。
//
//输入描述：
//多组输入，一个整数（1~100），表示线段长度，即“ * ”的数量。
//输出描述：
//针对每行输入，输出占一行，用“ * ”组成的对应长度的线段
// 
//示例1
//输入：
//10
//2
//输出：
//**********
//**

/*
int main() {
    int a, b;
    while (scanf("%d", &a) != EOF) { // 注意 while 处理多个 case
        // 64 位输出请用 printf("%lld") to
        for (int i = 0; i < a; i++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

*/






//写一个代码打印1-100之间所有3的倍数的数字
/*
int main()
{
    for (int i = 0; i <= 100; i+=3)
    {
        if (i % 3 == 0 && i != 0)
        {
            printf("%d ",i);
        }
    }
}
*/




//写代码将三个整数数按从大到小输出。
//例如：
//输入：2 3 1
//输出：3 2 1
/*
int main()
{
    int a = 0;//2
    int b = 0;//3
    int c = 0;//1
    int temp = 0;
    scanf("%d%*c%d%*c%d", &a, &b, &c);
    if (a < b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    if (a < c)
    {
        temp = a;
        a = c;
        c = temp;
    }
    if (b < c)
    {
        temp = b;
        b = c;
        c = temp;
    }
    printf("%d %d %d", a, b, c);
    return 0;
}
*/

