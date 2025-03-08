#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

/*

size_t byte_ordering_judge()
{
	union byte
	{
		char c;
		int i;
	};
	union byte order;
	order.i = 1;
	if (order.c == 1)
	{
		return 1;
	}
	return 0;
}

int main()
{
	size_t r = byte_ordering_judge();
	printf("%zd", r);

	return 0;
}
*/

/*

int main()
{
	int** p = (int **)malloc(3 * sizeof(int*));
	for (int i = 0; i < 3; i++)
	{
		p[i] = (int*)malloc(5 * sizeof(int));
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			p[i][j] = 5 * i + j;
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%d ",p[i][j]);
		}
		printf("\n");
	}
	for (int i = 0; i < 3; i++)
	{
		free(p[i]);
	}
	free(p);
	p = NULL;
	return 0;
}

*/

int main()
{
	FILE* pr = fopen("data.txt","r");

	if (pr == NULL)
	{
		perror("Fail to Open -r");
		return 1;
	}

	FILE* pw = fopen("data_copy.txt", "w");

	if (pw == NULL)
	{
		perror("Fail to Open -w");
		return 1;
	}

	int ch;
	while ((ch = fgetc(pr)) != EOF)
	{
		fputc(ch, pw);
	}
	fclose(pr);
	fclose(pw);
	pr = NULL;
	pw = NULL;

	return 0;

	
}