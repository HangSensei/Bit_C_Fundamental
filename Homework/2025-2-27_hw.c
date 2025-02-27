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
	//�ж��ַ��������Ƿ�Ϊ��
	if (*str == '\0')
	{
		return 0;
	}
	//����Ϊ�գ������пո������ո�
	while (isspace(*str))//�����ڿո񣬷���ֵΪ��0
	{
		str++;
	}
	int flag = 1;//����������״̬
	if (*str == '+')//����+
	{
		flag = 1;
		str++;
	}
	else if (*str == '-')//����-
	{
		flag = -1;
		str++;
	}
	long long ret = 0;//���泬��INT_MAX��ֵ
	while (*str != '\0')
	{
		if (isdigit(*str))//�ж��Ƿ�������
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