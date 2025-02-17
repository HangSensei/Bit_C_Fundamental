#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
//将课堂上所讲使用函数指针数组实现转移表的代码
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
	printf("Please Select：" );
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
			printf("Please Enter the Operation Number：" );
			scanf("%d %d", &x, &y);
			r = (*p[input])(x, y);
			printf("result = %d\n", r);
		}

	} while (input);
	return 0;
}
*/
//写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1 = AABCD和s2 = BCDAA，返回1
//给定s1 = abcd和s2 = ACBD，返回0.
//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//AABCD右旋一个字符得到DAABC
//src:AABCD   find: BCDAA
// Method 1
/*
char* String_Rotate(char *src, char *find)
{
	char tmp[128] = { 0 };
	strcpy(tmp, src);//tmp = AABCD
	strcat(tmp, src);//tmp = AABCDAABCD
	return strstr(tmp, find);//返回指向 "find"BCDAA 在 "tmp"AABCDAABCD 中首次出现位置的指针
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
	int len = strlen(str);// 获取str的长度
	int j = 0; // index
	for (int i = 0; i < len; i++)// 进行最多len次的循环
	{
		char tmp = str[0];// 将字符串的第一个字符存储在tmp中
		for (j = 0; j < len - 1; j++)// 将str中的每个字符往前移动
		{
			str[j] = str[j + 1];// 移动字符
		}
		str[j] = tmp;// 将tmp的值（即原来的第一个字符）放回到字符串末尾

		//每挪动一次判断当前str是不是find
		if (strcmp(str, find) == 0)// 如果字符串相等，返回1
		{
			return 1;
		}
	}
	return 0;// 如果没有找到匹配的旋转字符串，返回0
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

//有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，请编写程序在这样的矩阵中查找某个数字是否存在。
//要求：时间复杂度小于遍历O(N);
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
//日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个嫌疑犯的一个。
//以下为4个嫌疑犯的供词:
//A说：不是我。
//B说：是C。
//C说：是D。
//D说：C在胡说
//已知3个人说了真话，1个人说的是假话。
//现在请根据这些信息，写一个程序来确定到底谁是凶手。
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

//在屏幕上打印杨辉三角。
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

