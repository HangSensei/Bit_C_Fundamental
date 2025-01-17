#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//描述
//KiKi想知道已经给出的三条边a，b，c能否构成三角形，如果能构成三角形，判断三角形的类型（等边三角形、等腰三角形或普通三角形）。
//输入描述：
//题目有多组输入数据，每一行输入三个a，b，c(0<a,b,c<1000)，作为三角形的三个边，用空格分隔。
//输出描述：针对每组输入数据，输出占一行，如果能构成三角形，等边三角形则输出“Equilateral triangle!”
//等腰三角形则输出“Isosceles triangle!”，其余的三角形则输出“Ordinary triangle!”，反之输出“Not a triangle!”。
//示例1
//输入：
//2 3 2
//3 3 3
//输出：
//Isosceles triangle!
//Equilateral triangle!

/*
#include <stdio.h>

int main() {
	int a, b, c;
	while (scanf("%d %d %d", &a, &b, &c) != EOF) { // 注意 while 处理多个 case
		// 64 位输出请用 printf("%lld") to
		if ((a + b > c) && (a + c > b) && (b + c > a)) {

			if (a == b && b == c && a == c)
			{
				printf("Equilateral triangle!\n");
			}
			else if (a == b || a == c|| b == c)
			{
				printf("Isosceles triangle!\n");
			}
			else {
				printf("Ordinary triangle!\n");
			}

		}
		else {
			printf("Not a triangle!\n");
		}
	}
	return 0;
}
*/

//乘法口诀表
//在屏幕上输出9 * 9乘法口诀表
/*
int main()
{
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("%d*%d=%d ",j,i,i * j);
		}
	printf("\n");
	}

	return 0;
}
*/


//分数求和
//计算1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 …… + 1 / 99 - 1 / 100 的值，打印出结果

/*
int main()
{
	int flag = 1;
	double sum = 0.0;
	for (int i = 1; i <= 100; i++)
	{
		sum += 1.0 / i * flag;
		flag *= -1;
	}
	printf("%lf\n", sum);
	return 0;
}
*/



//数9的个数
//编写程序数一下 1到 100 的所有整数中出现多少个数字9
/*
int main()
{
	int count = 0;
	for ( int i = 1; i <= 100; i++)
	{
		if (i / 10 == 9)
		{
			count++;
		}
		if (i % 10 == 9)
		{
			count++;
		}
	}
	printf("%d", count);
	return 0;
}
*/


//打印1000年到2000年之间的闰年
/*
int main()
{
	for (int i = 1000; i <= 2000; i += 4)
	{
		if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
		{
			printf("%d ",i);
		}
	}
	return 0;
}
*/
//给定两个数，求这两个数的最大公因数
//例如：
//输入：112 264
//输出：8
//
int main()
{
	int a = 0;
	int b = 0;
	int temp = 0;
	scanf("%d %d", &a, &b);

	while (temp = a % b)
	{
		a = b;
		b = temp;
	}
	printf("%d\n", b);

	return 0;
}


