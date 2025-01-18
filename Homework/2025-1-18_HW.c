#define _CRT_SECURE_NO_WARNINGS 1

# include <stdio.h>
# include <math.h>

//求10 个整数中最大值
/*
int FindMax(int arr[], int num)
{
	int max = arr[0];
	for (int i = 0; i < num; i++)
	{
		if (max <= arr[i])
		{
			max = arr[i];
		}
	}
	return max;
}

int main()
{
	int arr[] = { 12, 23, 99, 43, 56, 69, 100, 81, 97, 109 };
	int n = FindMax(arr,10);
	printf("%d", n);
	return 0;
}
*/

//写一个代码：打印100~200之间的素数

//

int main() {
	int finished = 0; // 0 表示暑假还没结束

	// do...while 循环
	do {
		printf("凉宫度过了一次暑假...\n");

		// 让用户输入是否结束循环
		printf("时间循环结束了吗？（0=未结束, 1=结束）：");
		scanf("%d", &finished);
	} while (finished == 0); // 只要 finished 为 0，就继续循环

	printf("终于迎来了新学期！\n");
	return 0;
}