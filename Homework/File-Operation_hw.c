#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
/*
int main()
{
	//ͬĿ¼
	//FILE* pf = fopen("test.txt", "r");
	//FILE* pf = fopen("C:\\Code\\C\\File-Operation\\test.txt", "r");
	//����·��
	//FILE* pf = fopen("C:\\Code\\test1.txt", "r");
	//���·��, .\\��ǰ·�� ..\\��һ��·��
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


//д�ַ����ļ���
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

//��ȡ�ļ����ַ�
/*
int main()
{
	FILE* pf = fopen("C:\\Code\\C\\File-Operation\\test.txt", "r");
	if (pf == NULL)
	{
		perror("fopen");
		return 1;
	}

	int ret = fgetc(pf);//��ȡ�ɹ�����ASCII CODE�������ȡʧ�ܻ������ļ�ĩβ������EOF
	printf("%d", ret);

	fclose(pf);
	pf = NULL;
	return 0;
}
*/

//д�ַ������ļ���

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

//���ļ��ж�ȡ�ַ���
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

//���ļ���д��ṹ������
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

	fprintf(pf, "arr: %s\nnum: %d\ndigit: %.2lf\n", s.str, s.num, s.digit);//��������������pf�ĳ�stdout�ɴ�ӡ

	return 0;
}
*/

//���ļ��ж�ȡ�ṹ������

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

	fscanf(pf, "%s %d %lf", s.str, &(s.num), &(s.digit));//���������ж�ȡ�������pf�ĳ�stdin���Ӽ��̶�ȡ����
	printf("%s %d %lf", s.str, s.num, s.digit);

	return 0;
}
*/

/*
//�Ѹ�ʽ��������ת�����ַ���
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
	//��str1�ַ�������ȡ�ṹ������
	sscanf(str1, "%s %d %lf\n", t.str, &(t.num), &(t.digit));
	printf("%s %d %lf", t.str, t.num, t.digit);
	return 0;
}
*/
/*
//�����Ƶķ�ʽд
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

//�����Ƶķ�ʽ��
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
