#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

////void qsort (void* base, size_t num, size_t size, int(*compare)(const void*, const void*));
//待排序数据首元素地址（void*接受任意数据类型的地址）// 元素个数 // 一个元素大小 // 函数指针（提供比较方法）

// qsort_practice_int number.

/*

int comp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;// same value-> return 0, *e1 > *e2 -> return > 0 (e2, e1), *e1 < *e2 -> return < 0 (e1, e2)
}
void print_arr(int arr[], int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}

//qsort函数默认是升序的，降序可以e1和e2位置颠倒

int main()
{
	int arr[] = { 1, 999, 687, 453, 708, 434, 5, 3, 10, 9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]),comp_int);//(待排序数据首元素地址，元素个数，元素大小，自定义比较函数)
	print_arr(arr, sz);
	return 0;
}

*/

// qsort_practice_Struct

/*

struct info
{
	char name[20];
	int id;
};

void print_arr(struct info* arr, int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf("%s %d \n", (arr + i) ->name, (arr + i) ->id);
	}
	printf("\n");
}

int comp_struct_string(const void* e1, const void* e2)
{
	return strcmp(((struct info*)e1)->name, ((struct info*)e2)->name);
}

int main()
{
	struct info arr[] = { {"yan", 75},{"hang", 76},{"rosa", 77}};
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), comp_struct_string);
	print_arr(arr, sz);
	return 0;
}

*/

//bubble_sort_origional

/*

void bubble_sort(int arr[], int sz)
{
	for (int i = 0; i < sz; i++)//10个数字要进行9次排序,<sz or <= sz - 1
	{
		int flag = 1;//假设待排序的数据已经有序
		for (int j = 0; j < sz - 1 - i; j++)//一次冒泡排序的过程,例如第一次9次内部排列（10 - 1 - 0），第二次8次内部排列（10 - 1 - 1）注：i，j从0开始
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;//只要发生交换，flag = 0;
			}
		}
		if (flag)//只要flag == 1，说明一次冒泡排序中没有发生交换，直接结束大循环，不跑剩下的排序
		{
			break;
		}
	}

}

int main()
{
	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	return 0;
}

*/

//bubble_sort simulate qsort

int comp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;// same value-> return 0, *e1 > *e2 -> return > 0 (e2, e1), *e1 < *e2 -> return < 0 (e1, e2)
}


void Swap(char* byte1, char* byte2, int width)
{
	for (int i = 0; i < width; i++)//交换每个byte的数据内容
	{
		char tmp = '0';
		tmp = *byte1;
		*byte1 = *byte2;
		*byte2 = tmp;
		byte1++;
		byte2++;

	}
}
//               arr         sz   sizeof(arr[0])    &comp_int
void bubble_sort(void* base, int sz, int width, int (*comp)(const void* e1, const void* e2))
{
	for (int i = 0; i < sz; i++)//冒泡排序次数（几次冒泡排序大循环）
	{
		int flag = 1;//假设待排序的数据已经有序
		for (int j = 0; j < sz - 1 - i; j++)//一次冒泡排序的过程
		{
			if (comp((char*)base + j * width, (char*)base + (j+1) * width) > 0)//借助comp指针指向的函数比较arr[j],arr[j+1]的大小，返回值>0，交换数据，排成升序。
			{                                                                 //(char*)base + j * width, (char*)base + (j+1) * width,char* 一次解引用1byte，width代表数据类型大小，j代表index位置
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);//交换index j 和 index j+1中的每一个字节
				flag = 0;//只要发生交换，flag = 0;
			}
		}
		if (flag)//只要flag == 1，说明一次冒泡排序中没有发生交换，直接结束大循环，不跑剩下的排序
		{
			break;
		}
	}

}
void print_arr(int arr[], int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void test_bubble_sort_simu()
{
	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz, sizeof(arr[0]), comp_int);
	print_arr(arr, sz);
}

int main()
{
	test_bubble_sort_simu();
	return 0;
}


