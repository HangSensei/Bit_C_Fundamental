#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

////void qsort (void* base, size_t num, size_t size, int(*compare)(const void*, const void*));
//������������Ԫ�ص�ַ��void*���������������͵ĵ�ַ��// Ԫ�ظ��� // һ��Ԫ�ش�С // ����ָ�루�ṩ�ȽϷ�����

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

//qsort����Ĭ��������ģ��������e1��e2λ�õߵ�

int main()
{
	int arr[] = { 1, 999, 687, 453, 708, 434, 5, 3, 10, 9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]),comp_int);//(������������Ԫ�ص�ַ��Ԫ�ظ�����Ԫ�ش�С���Զ���ȽϺ���)
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
	for (int i = 0; i < sz; i++)//10������Ҫ����9������,<sz or <= sz - 1
	{
		int flag = 1;//���������������Ѿ�����
		for (int j = 0; j < sz - 1 - i; j++)//һ��ð������Ĺ���,�����һ��9���ڲ����У�10 - 1 - 0�����ڶ���8���ڲ����У�10 - 1 - 1��ע��i��j��0��ʼ
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;//ֻҪ����������flag = 0;
			}
		}
		if (flag)//ֻҪflag == 1��˵��һ��ð��������û�з���������ֱ�ӽ�����ѭ��������ʣ�µ�����
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
	for (int i = 0; i < width; i++)//����ÿ��byte����������
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
	for (int i = 0; i < sz; i++)//ð���������������ð�������ѭ����
	{
		int flag = 1;//���������������Ѿ�����
		for (int j = 0; j < sz - 1 - i; j++)//һ��ð������Ĺ���
		{
			if (comp((char*)base + j * width, (char*)base + (j+1) * width) > 0)//����compָ��ָ��ĺ����Ƚ�arr[j],arr[j+1]�Ĵ�С������ֵ>0���������ݣ��ų�����
			{                                                                 //(char*)base + j * width, (char*)base + (j+1) * width,char* һ�ν�����1byte��width�����������ʹ�С��j����indexλ��
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);//����index j �� index j+1�е�ÿһ���ֽ�
				flag = 0;//ֻҪ����������flag = 0;
			}
		}
		if (flag)//ֻҪflag == 1��˵��һ��ð��������û�з���������ֱ�ӽ�����ѭ��������ʣ�µ�����
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


