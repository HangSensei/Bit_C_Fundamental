#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳ˣ���������������⣩
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
//��һ�����������У�ֻ��һ�����ֳ���һ�Σ��������鶼�ǳɶԳ��ֵģ����ҳ��Ǹ�ֻ����һ�ε����֡�
//���磺
//�������У�1 2 3 4 5 1 2 3 4��ֻ��5����һ�Σ��������ֶ�����2�Σ��ҳ�5

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
//��ȡһ���������������������е�ż��λ������λ���ֱ��ӡ������������
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

//�����������������������������Ƹ�ʽ�ж��ٸ�λ��ͬ
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

//����һ������ n ���������32λ�����Ʊ�ʾ��1�ĸ��������и����ò����ʾ��
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

//����������ʱ������������������������

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