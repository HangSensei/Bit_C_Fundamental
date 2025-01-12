#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

void Arrange(int arr[],int len)
{
	int left = 0;
	int right = len - 1;
	while (left < right)
	{
		while ((left < right) && (arr[left] % 2 != 0))
		{
			left++;
		}
		while ((left < right) && (arr[right] % 2 == 0))
		{
			right--;
		}
		int emp = arr[left];
		arr[left] = arr[right];
		arr[right] = emp;

	}

}
void PrintArr(int arr[],int len)
{
	for (int i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main() 
{
	int arr[] = {1, 2, 3, 4, 5, 6, 7};
	int len = sizeof(arr) / sizeof(arr[0]);
	Arrange(arr,len);
	PrintArr(arr,len);

	return 0;
}

