#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//malloc
/*
int main()
{
	int* p = (int*)malloc(sizeof(int) * 10);//����40�ֽڣ�void*����ǿתint*����p����
	if (p == NULL)
	{
		perror("malloc");
		return 1;//�쳣����
	}

	for (int i = 0; i < 10; i++)
	{
		*(p + i) = i + 1;
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d ",p[i]);
	}
	free(p);//�ͷ�������ڴ�ռ�
	p = NULL;//��ֹҰָ��
	return 0;//��������

}
*/

//calloc

/*
int main()
{
	int* p = (int*)calloc(10, sizeof(int));//������ڴ�ռ��ȫ����ʼ��Ϊ0

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