#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>

/*
int bin_search(int arr[10], int sz)
{
	int key = 0;
	scanf("%d", &key);
	int left = 0;
	int right = sz - 1;
	int mid = 0;
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (key < arr[mid])
		{
			right = mid - 1;
		}
		else if (key > arr[mid])
		{
			left = mid + 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;

}

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int sz = sizeof(arr) / sizeof(arr[0]);

	int r = bin_search(arr, sz);
	if (r == -1)
	{
		printf("No Value Found");
	}
	else
	{
		printf("Value Found, the Index is %d", r);
	}

	return 0;
}
*/


/*
void Chart(int n) {

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("%d*%d=%d ", j, i, j * i);
		}
		printf("\n");
	}
}

int main() {
	int n = 0;
	scanf("%d", &n);
	Chart(n);
	return 0;

}
*/

/*
int judge(int n)
{
	if ((n % 4 == 0 && n % 100 != 0) || n % 400 == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()

{
	int n = 0;
	scanf("%d", &n);
	int r = judge(n);
	if (r)
	{
		printf("%d is leap year", n);
	}

	else
	{
		printf("%d is not leap year", n);
	}
	return 0;
}
*/

/*
int IsPrime(int i)
{
	for (int j = 2; j <= sqrt(i); j++)
	{
		if (i % j == 0)
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	for (int i = 101; i < 200; i += 2)
	{
		int ret = IsPrime(i);
		if (ret)
		{
			printf("%d ", i);
		}

	}
	return 0;
}

*/

//创建一个整形数组，完成对数组的操作

//实现函数init() 初始化数组为全0
//实现print()  打印数组的每个元素
//实现reverse()  函数完成数组元素的逆置。
//要求：自己设计以上函数的参数，返回值。


void init(int arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		arr[i] = 0;
	}
}
void print(int arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
}
void reinit(int arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		arr[i] = i;
	}
}
void reverse(int arr[], int len)
{
	int left = 0;
	int right = len - 1;
	while (left < right)
	{
		int empty = arr[left];
		arr[left] = arr[right];
		arr[right] = empty;
		left++;
		right--;
	}
}

int main()

{
	int arr[10] = { 11, 13, 15, 17, 19, 21, 23, 25, 27, 29 };
	int len = sizeof(arr) / sizeof(arr[0]);
	init(arr, len);
	printf("init arr: ");
	print(arr, len);
	printf("\nnew arr: ");
	reinit(arr, len);
	print(arr, len);
	reverse(arr, len);
	printf("\nreverse arr: ");
	print(arr, len);
	return 0;
}