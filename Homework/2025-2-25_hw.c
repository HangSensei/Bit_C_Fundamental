#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <assert.h>
/*
char* my_strncpy(char* destination, const char* source, size_t n)
{
	assert(destination && source);
	int i = 0;
	for (; i < n && *(source + i) != '\0'; i++)
	{
		*(destination + i) = *(source + i);
	}
	if (i < n)//just in case don't have '\0'
	{
		*(destination + i) = '\0';
	}
	return destination;
}

char* my_strncat(char* destination, const char* source, size_t n)
{
	assert(destination && source);
	char* begin = destination;
	while (*destination)
	{
		destination++;
	}
	int i = 0;
	for (; i < n && source[i] != '\0'; i++)
	{
		destination[i] = source[i];
	}
	destination[i] = '\0';
	return begin;
}

int main()
{
	char str1[20] = "byte";
	char* str2 = "ordering";
	int n = 8;
	//my_strncat(str1, str2, n);
	//my_strncpy(str2, str1, n);
	//printf("%s\n", str1);
	printf("%s\n", my_strncat(str1, str2, n));

}
*/
/*
void* my_memcpy(void* des, void* source, size_t byte_n)
{
	assert(des && source);
	void* start = des;
	for (int i = 0; i < byte_n; i++)
	{
		((char*)des)[i] = ((char*)source)[i];
	}
	return start;
}
void Print(int* arr2, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr2[i]);
	}
	printf("\n");
}

int main()
{
	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int n = sizeof(arr1) / sizeof(arr1[0]);
	int arr2[20] = { 0 };
	Print(arr2, n);
	int byte_n = 20;
	my_memcpy(arr2, arr1, byte_n);
	Print(arr2, n);
	return 0;
}
*/

void Print(int* arr2, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr2[i]);
	}
	printf("\n");
}

void* my_memmove(void* des, const void* source, size_t byte_n)
{
	assert(des && source);
	void* begin = des;
	if (des < source)
	{
		for (int i = 0; i < byte_n; i++)// 0 - 19 index
		{
			((char*)des)[i] = ((char*)source)[i];
		}
			
	}
	else
	{
		for (int i = byte_n - 1; i >= 0; i--)// 19 - 0 index
		{
			((char*)des)[i] = ((char*)source)[i];
		}
	}
	return begin;
}

int main()
{
	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	Print(arr1, 10);
	my_memmove(arr1 + 2, arr1, 20);
	Print(arr1,10);
}