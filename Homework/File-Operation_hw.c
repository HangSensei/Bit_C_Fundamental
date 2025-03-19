#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
/*
int main()
{
	//同目录
	//FILE* pf = fopen("test.txt", "r");
	//FILE* pf = fopen("C:\\Code\\C\\File-Operation\\test.txt", "r");
	//绝对路径
	//FILE* pf = fopen("C:\\Code\\test1.txt", "r");
	//相对路径, .\\当前路径 ..\\上一级路径
	//FILE* pf = fopen(".\\..\\..\\test1.txt", "r");
	if (pf == NULL)
	{
		perror("fopen");
		return 1;
	}
	else
	{
		printf("file open successed\n");
	}
	return 0;
}
*/


//写字符到文件中
/*
int main()
{
	FILE* pf = fopen("C:\\Code\\C\\File-Operation\\test.txt", "w");
	if (pf == NULL)
	{
		perror("fopen");
		return 1;
	}

	for (int i = 'a'; i <= 'z'; i++)
	{
		fputc(i, pf);
	}

	fclose(pf);
	pf = NULL;
	return 0;
}
*/

//读取文件中字符
/*
int main()
{
	FILE* pf = fopen("C:\\Code\\C\\File-Operation\\test.txt", "r");
	if (pf == NULL)
	{
		perror("fopen");
		return 1;
	}

	int ret = fgetc(pf);//读取成功返回ASCII CODE，如果读取失败或遇到文件末尾，返回EOF
	printf("%d", ret);

	fclose(pf);
	pf = NULL;
	return 0;
}
*/

//写字符串到文件中

/*
int main()
{
	FILE* pf = fopen("C:\\Code\\C\\File-Operation\\test.txt", "w");
	if (pf == NULL)
	{
		perror("fopen");
		return 1;
	}
	fputs("hello world\n", pf);
	fputs("nmsl\n", pf);

	fclose(pf);
	pf = NULL;
	return 0;
}
*/

//在文件中读取字符串
/*

int main()
{
	FILE* pf = fopen("C:\\Code\\C\\File-Operation\\test.txt", "r");
	if (pf == NULL)
	{
		perror("fopen");
		return 1;
	}
	char str[8] = { 0 };
	fgets(str, 8, pf);



	fclose(pf);
	pf = NULL;
	return 0;

	return 0;
}
*/

//在文件中写入结构体数据
/*
typedef struct 
{
	char str[20];
	int num;
	double digit;
}S;

int main()
{
	S s = {"Max", 50, 2.7};

	FILE* pf = fopen("C:\\Code\\C\\File-Operation\\test.txt", "w");
	if (pf == NULL)
	{
		perror("fopen");
		return 1;
	}

	fprintf(pf, "arr: %s\nnum: %d\ndigit: %.2lf\n", s.str, s.num, s.digit);//输出所有输出流，pf改成stdout可打印

	return 0;
}
*/

//在文件中读取结构体数据

/*
typedef struct
{
	char str[20];
	int num;
	double digit;
}S;

int main()
{
	S s = {0};

	FILE* pf = fopen("C:\\Code\\C\\File-Operation\\test.txt", "r");
	if (pf == NULL)
	{
		perror("fopen");
		return 1;
	}

	fscanf(pf, "%s %d %lf", s.str, &(s.num), &(s.digit));//从所有流中读取输出，将pf改成stdin，从键盘读取数据
	printf("%s %d %lf", s.str, s.num, s.digit);

	return 0;
}
*/

/*
//把格式化的数据转换成字符串
typedef struct
{
	char str[20];
	int num;
	double digit;
}S;

int main()
{
	S s = { "Max", 50, 2.7 };

	char str1[30] = {0};
	sprintf(str1, "%s %d %lf\n", s.str, s.num, s.digit);
	printf("%s\n",str1);

	S t = { 0 };
	//从str1字符串中提取结构体数据
	sscanf(str1, "%s %d %lf\n", t.str, &(t.num), &(t.digit));
	printf("%s %d %lf", t.str, t.num, t.digit);
	return 0;
}
*/
/*
//二进制的方式写
int main()
{
	FILE* pf = fopen("bin.txt", "wb");
	if (pf == NULL)
	{
		perror("fopen");
		return 1;
	}

	int arr[] = { 1, 2, 3, 4, 5 };
	//fwrite(arr, sizeof(arr[0]), 5, pf);
	fwrite(arr, sizeof(arr[0]) * 5, 1, pf);

	fclose(pf);
	pf = NULL;
	
	return 0;
}
*/

//二进制的方式读
int main()
{
	FILE* pf = fopen("bin.txt", "rb");
	if (pf == NULL)
	{
		perror("fopen");
		return 1;
	}

	int arr[10] = {0};
	//fwrite(arr, sizeof(arr[0]), 5, pf);
	fread(arr, sizeof(int), 5, pf);
	
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}


	fclose(pf);
	pf = NULL;

	return 0;
}
