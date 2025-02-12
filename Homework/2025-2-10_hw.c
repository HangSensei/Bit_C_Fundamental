#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//递归和非递归分别实现求n的阶乘（不考虑溢出的问题）
/*
int Factorial(int n)
{
	if (n == 1)
	{
		return n;
	}
	else
	{
		return n * Factorial(n - 1);
	}
}

int main()
{
	int n = 0;
	scanf("%d",&n);
	int r = Factorial(n);
	printf("%d", r);

	return 0;
}
*/
/*
int Fact(int n)
{
	int ret = 1;
	for (int i = 1; i <= n; i++)
	{
		ret = ret * i;
	}
	return ret;
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int sum = Fact(n);
	printf("%d", sum);
	return 0;
}
*/
//在一个整型数组中，只有一个数字出现一次，其他数组都是成对出现的，请找出那个只出现一次的数字。
//例如：
//数组中有：1 2 3 4 5 1 2 3 4，只有5出现一次，其他数字都出现2次，找出5

// solution: 1 ^ 1 = 0, 0 ^ 1 = 1...
/*
int SingleDog(int arr[], int len)
{
	int r = 0;
	for (int i = 0; i < len; i++)
	{
		r ^= arr[i];
	}
	return r;

}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 1, 2, 3, 4 };
	int len = sizeof(arr) / sizeof(arr[0]);
	int n = SingleDog(arr, len);
	printf("%d is the Single Dog Num",n);
	return 0;
}
*/

//
/*
int main()
{
	int a = 10;
	int b = -10;
	printf("a = %d b = %d\n", a, b);
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("a = %d b = %d\n", a, b);
	return 0;
}
*/
//获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列
/*
void count_one(int n)
{
	for (int i = 30; i >= 0; i -= 2)
	{
		printf("%d ", (n >> i) & 1);
	}
	printf("\n");
	for (int i = 31; i >= 1; i -= 2)
	{
		printf("%d ", (n >> i) & 1);
	}
}

int main()
{
	int num = 0;
	scanf("%d", &num);
	count_one(num);
	return 0;
}
*/

//输入两个整数，求两个整数二进制格式有多少个位不同
/*
int main() {
	int a, b;
	while (scanf("%d %d", &a, &b) != EOF) {
		int d = a ^ b;
		int count = 0;
		while(d != 0)
		{
			d = d & (d - 1);
			count++;
		}
		printf("%d\n", count);
	}
	return 0;
}

*/

//输入一个整数 n ，输出该数32位二进制表示中1的个数。其中负数用补码表示。
/*


int NumberOf1(int n) {
	int count = 0;
	while (n)
	{
		n = n & (n - 1);
		count++;
	}
	return count;
}

*/

//不允许创建临时变量，交换两个整数的内容

/*
int main()
{
	int a = 10;
	int b = -10;
	printf("a = %d b = %d\n", a, b);
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("a = %d b = %d\n", a, b);
	return 0;
}
*/