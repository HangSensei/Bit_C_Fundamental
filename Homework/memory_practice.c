#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//malloc
/*
int main()
{
	int* p = (int*)malloc(sizeof(int) * 10);//开辟40字节，void*类型强转int*，用p接收
	if (p == NULL)
	{
		perror("malloc");
		return 1;//异常返回
	}

	for (int i = 0; i < 10; i++)
	{
		*(p + i) = i + 1;
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d ",p[i]);
	}
	free(p);//释放申请的内存空间
	p = NULL;//防止野指针
	return 0;//正常返回

}
*/

//calloc

/*
int main()
{
	int* p = (int*)calloc(10, sizeof(int));//申请的内存空间会全部初始化为0

	for (int i = 0; i < 10; i++)
	{
		printf("%d ", p[i]);
	}

	free(p);
	p = NULL;

	return 0;
}
*/

//realloc

int main()
{
	int* p = (int*)malloc(5 * sizeof(int));
	for (int i = 0; i < 5; i++)
	{
		p[i] = i + 1;
	}

	for (int i = 0; i < 5; i++)
	{
		printf("%d ", p[i]);
	}
	printf("\n");

	int* ptr = (int*)realloc(p, 20 * sizeof(int));

	for (int i = 5; i < 20; i++)
	{
		ptr[i] = i + 1;
	}

	for (int i = 0; i < 20; i++)
	{
		printf("%d ", ptr[i]);
	}
	
	free(ptr);

	p = NULL;
	ptr = NULL;

	return 0;
}