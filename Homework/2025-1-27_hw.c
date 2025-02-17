//
//  main.c
//  2025-1-27_HW
//
//  Created by Uperficial on 1/27/25.
//

#include <stdio.h>
#include <math.h>
//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以喝多少汽水（编程实现）。
// Method 1
/*
 int Total(int money)
{
    int total = money;
    int empty = money;
    while (empty > 1)
    {
        total = total + empty / 2;
        empty = empty / 2 + empty % 2;
    }
    return total;
}

int main(void) {
    int money = 0;
    scanf("%d",&money);
    int r = Total(money);
    printf("num of soda could drink is %d bottle\n",r);
    return 0;
}
*/
// Method 2
/*
int Total(int money)
{
   return 2 * money - 1;
}

int main(void)
 {
   int money = 0;
   scanf("%d",&money);
   int r = Total(money);
   printf("num of soda could drink is %d bottle\n",r);
   return 0;
}
*/
// 打印菱形
/*
void Print_Rhombic(int line)
{
    for (int i = 0; i < line; i++)
    {
        for (int j = 0; j < line - 1 - i; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < 2 * i + 1; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int i = 0; i < line - 1; i++)
    {
        
        for (int j = 0; j < i + 1; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < (line - 1 - i) * 2 - 1; k++)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main(void)
{
    int line = 7;
    Print_Rhombic(line);
}
*/

//求出0～100000之间的所有“水仙花数”并输出。
//“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，如:153＝1^3＋5^3＋3^3，则153是一个“水仙花数”。
/*
void daffodils(void)
{
    for (int i = 0; i <= 100000; i++)
    {
        int count = 0;
        int temp = i;
        while (temp != 0)
        {
            count++;
            temp /= 10;
        }
        temp = i;
        int sum = 0;
        while (temp != 0)
        {
            sum += pow(temp % 10,count);
            temp /= 10;
        }
        if (sum == i)
        {
            printf("%d ",i);
        }
    }
}
int main(void)
{
    daffodils();
    return 0;
}
*/

// 求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字，
// 例如：2+22+222+2222+22222
/*
int Sum_term (int n, int a)
{
    int sum = 0;
    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        temp = temp * 10 + a;
        sum += temp;
    }
    return sum;
}

int main(void)
{
    printf("how many terms:\n");
    int n = 0;
    int a = 0;
    scanf("%d",&n);
    printf("value of a:\n");
    scanf("%d",&a);
    int r = Sum_term(n,a);
    printf("%d\n",r);
    return 0;
}
*/

//递归和非递归分别实现求第n个斐波那契数
//例如：
//输入：5  输出：5
//输入：10， 输出：55
//输入：2， 输出：1

// Recursion
/*
int Fib(int n)
{
    if (n <= 2)
    {
        return 1;
    }
    else
    {
        return Fib(n - 1) + Fib(n - 2);
    }
}

int main()
{
    int n = 0;
    scanf("%d",&n);
    int sum = Fib(n);
    printf("%d", sum);
    return 0;
}
*/
// Non Recursion
/*
int Fib(int n)
{
    int a = 1;
    int b = 1;
    int c = 1;
    
    while (n > 2)
    {
        c = a + b;
        a = b;
        b = c;
        n--;
    }
    return c;
}

int main(void)
{
    int n = 0;
    scanf("%d", &n);
    int sum = Fib(n);
    printf("%d\n", sum);
    return 0;
}
*/
//编写一个函数实现n的k次方，使用递归实现。
/*
int Power(int n, int k)
{
    if (k == 1)
    {
        return n;
    }
    else
    {
        return n * Power(n,k - 1);
    }
}

int main(void)
{
    int n = 0;
    int k = 0;
    scanf("%d",&n);
    scanf("%d",&k);
    int r = Power(n,k);
    printf("%d\n",r);
    return 0;
}
*/

//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
//例如，调用DigitSum(1729)，则应该返回1+7+2+9，它的和是19
//输入：1729，输出：19
/*
 int DigitSum(int n)
 {
 if (n < 10)
 {
 return n;
 }
 else
 {
 return DigitSum(n / 10) + n % 10;
 }
 }
 
 int main(void)
 {
 int n = 0;
 scanf("%d",&n);
 int r = DigitSum(n);
 printf("%d\n",r);
 return 0;
 }
 */
// 递归方式实现打印一个整数的每一位
void Print(int n)
{
    if (n < 10)
    {
        printf("%d ",n);
    }
    else
    {
        Print(n / 10);
        printf("%d ", n % 10);
    }
}
int main(void)
{
    int n = 0;
    scanf("%d",&n);
    Print(n);
    return 0;
}
