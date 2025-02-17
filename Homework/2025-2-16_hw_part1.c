#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
//������������ʹ�ú���ָ������ʵ��ת�Ʊ�Ĵ���
/*
int add(int a, int b)
{
	return a + b;
}
int sub(int a, int b)
{
	return a - b;
}
int mul(int a, int b)
{
	return a * b;
}
int div(int a, int b)
{
	return a / b;
}
int rem(int a, int b)
{
	return a % b;
}
void menu()
{
	printf("******* Calculator ******\n");
	printf("*************************\n");
	printf("  1:add           2:sub  \n");
	printf("  3:mul           4:div  \n");
	printf("  5:rem           0:exit \n");
	printf("*************************\n");
	printf("Please Select��" );
}

int main()
{
	int input = 0;
	int x = 0;
	int y = 0;
	int r = 0;
	int(*p[6])(int x, int y) = { 0, add, sub, mul, div, rem};
	do
	{
		menu();
		scanf("%d", &input);

		if ((input <= 5 && input >= 1))
		{
			printf("Please Enter the Operation Number��" );
			scanf("%d %d", &x, &y);
			r = (*p[input])(x, y);
			printf("result = %d\n", r);
		}

	} while (input);
	return 0;
}
*/
//дһ���������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//���磺����s1 = AABCD��s2 = BCDAA������1
//����s1 = abcd��s2 = ACBD������0.
//AABCD����һ���ַ��õ�ABCDA
//AABCD���������ַ��õ�BCDAA
//AABCD����һ���ַ��õ�DAABC
//src:AABCD   find: BCDAA
// Method 1
/*
char* String_Rotate(char *src, char *find)
{
	char tmp[128] = { 0 };
	strcpy(tmp, src);//tmp = AABCD
	strcat(tmp, src);//tmp = AABCDAABCD
	return strstr(tmp, find);//����ָ�� "find"BCDAA �� "tmp"AABCDAABCD ���״γ���λ�õ�ָ��
}
int main()
{
	char* str1 = "AABCD";
	char* str2 = "BCDAA";
	char* ret = String_Rotate(str1, str2);
	if (ret != NULL)
	{
		printf("Exist");
	}
	else 
	{
		printf("DO NOT Exist");
	}

	return 0;
}
*/

 //Method 2

/*

int Round_Check(char* str, char* find)
{
	int len = strlen(str);// ��ȡstr�ĳ���
	int j = 0; // index
	for (int i = 0; i < len; i++)// �������len�ε�ѭ��
	{
		char tmp = str[0];// ���ַ����ĵ�һ���ַ��洢��tmp��
		for (j = 0; j < len - 1; j++)// ��str�е�ÿ���ַ���ǰ�ƶ�
		{
			str[j] = str[j + 1];// �ƶ��ַ�
		}
		str[j] = tmp;// ��tmp��ֵ����ԭ���ĵ�һ���ַ����Żص��ַ���ĩβ

		//ÿŲ��һ���жϵ�ǰstr�ǲ���find
		if (strcmp(str, find) == 0)// ����ַ�����ȣ�����1
		{
			return 1;
		}
	}
	return 0;// ���û���ҵ�ƥ�����ת�ַ���������0
}


int main()
{
	char str1[] = "AABCD";
	char str2[] = "BCDAA";
	int ret = Round_Check(str1, str2);
	printf("%d", ret);

	return 0;
}
*/

//��һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ����ģ����д�����������ľ����в���ĳ�������Ƿ���ڡ�
//Ҫ��ʱ�临�Ӷ�С�ڱ���O(N);
/*
int Matrix_Find(int arr[][3], int x, int y, int key)
{
	int i = 0;
	int j = y - 1;
	while (i < x && j >= 0)
	{
		if (arr[i][j] < key)
		{
			i++;
		}
		else if (arr[i][j] > key)
		{
			j--;
		}
		else 
		{
			return 1;
		}
	}
	return 0;
}
int main()
{
	int x = 3;
	int y = 3;
	int key = 8;
	int arr[][3] = { {1, 2, 3},{4, 5, 6},{7, 8, 9} };
	int r = Matrix_Find(arr, x, y, key);
	if (r == 1)
	{
		printf("Exist");
	}
	else
	{
		printf("DNE");
	}
	

	return 0;
}
*/
//�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4�����ɷ���һ����
//����Ϊ4�����ɷ��Ĺ���:
//A˵�������ҡ�
//B˵����C��
//C˵����D��
//D˵��C�ں�˵
//��֪3����˵���滰��1����˵���Ǽٻ���
//�����������Щ��Ϣ��дһ��������ȷ������˭�����֡�
/*
void FindKiller()
{
	for (char killer = 'A';killer <= 'D'; killer++)
	{
		if ((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3)
		{
			printf("%c is the killer\n", killer);
		}
	}
}

int main()
{
	FindKiller();
	return 0;
}
*/

//����Ļ�ϴ�ӡ������ǡ�
//1
//1 1
//1 2 1
//1 3 3 1

/*

void YH_TriAngle(int arr[4][4], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++) 
		{
			if ((j == 0) || (i == j))
			{
				arr[i][j] = 1;
			}
			else
			{
				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
			}
		}
	}
}
void Print(int arr[4][4], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}

int main()
{
	int arr[4][4] = { 0 };
	YH_TriAngle(arr, 4);
	Print(arr, 4);
	return 0;
}
*/

