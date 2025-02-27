#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <ctype.h>
#include <limits.h>
/*
int byte_ordering_judge()
{
	int a = 1;
	if ( 1 == *((char*)&a))
	{
		return 1;
	}
	return 0;
}
int main()
{
	int r = byte_ordering_judge();
	printf("%d", r);

	return 0;
}
*/
int my_atoi(const char* str)
{
	assert(str != NULL);
	//判断字符串内容是否为空
	if (*str == '\0')
	{
		return 0;
	}
	//若不为空，而且有空格，跳过空格
	while (isspace(*str))//若存在空格，返回值为非0
	{
		str++;
	}
	int flag = 1;//定义正负数状态
	if (*str == '+')//跳过+
	{
		flag = 1;
		str++;
	}
	else if (*str == '-')//跳过-
	{
		flag = -1;
		str++;
	}
	long long ret = 0;//储存超过INT_MAX的值
	while (*str != '\0')
	{
		if (isdigit(*str))//判断是否是数字
		{
			ret = ret * 10 + flag * (*str - '0');

			if (ret > INT_MAX)
			{
				return INT_MAX;
			}
			if (ret < INT_MIN)
			{
				return INT_MIN;
			}
		}
		else
		{
			printf("invalid transform\n");
			return ret;
		}
		str++;
	}
	if (*str == '\0')
	{
		printf("valid transform\n");
	}
	
	return (int)ret;
}

int main()
{
	//const char* str = "-123a456";
	const char* str = "123abc123";
	//int r = atoi(str);
	int r = my_atoi(str);
	printf("%d\n", r);
	return 0;
}