#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <assert.h>
//模拟实现strlen
/*
size_t my_strlen(char* str)
{
	assert(str);
	char* p = str;
	while (*str)
	{
		str++;
	}
	return str - p;
}

int main()
{
	char str[20] = "hello bit";
	printf("%zd", my_strlen(str));
	return 0;
}
*/

//模拟实现strcpy
/*
char* my_strcpy(char* str2, char* str1)
{
	assert(str2 && str1);
	char* r = str2;//point to initial address
	while (*str2++ = *str1++)
	{
		;
	}
	return r;
}

int main()
{
	char str1[10] = "damn";
	char str2[10] = { 0 };
	printf("%s\n", my_strcpy(str2, str1));
	return 0;
}
*/

//模拟实现strcmp
/*

int my_strcmp(const char* str1, const char* str2)
{
	assert(str1 && str2);
	while (*str1 == *str2)
	{
		if (*str1 == '\0')
		{
			return 0;
		}
		str1++;
		str2++;
	}
	return *str1 - *str2;
}
int main()
{
	char str1[] = "damn";
	char str2[] = "damp";
	printf("%d\n", my_strcmp(str1, str2));
	return 0;
}
*/

//模拟实现strcat
/*
char* my_strcat(char* str1, char* str2)
{
	assert(str1 && str2);
	char* r = str1;//point to initial address
	while (*str1)
	{
		str1++;
	}
	
	while (*str1++ = *str2++)
	{
		;
	}
	return r;
}

int main()
{
	char str1[10] = "damn ";
	char str2[10] = "bro";
	printf("%s\n", my_strcat(str1, str2));
	return 0;
}
*/

//模拟实现strstr
const char* my_strstr(const char* str1, const char* str2)
{
	//pointers initialization
	const char* s1 = NULL;
	const char* s2 = NULL;
	const char* cur = str1;

	assert(str1 && str2);

	if (*str2 == '\0')
	{
		return str1;
	}

	while (*cur)
	{
		s1 = cur;
		s2 = str2;
		while (*s1 && *s2 && (*s1 == *s2))
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return cur;
		}
		cur++;
	}
	return NULL;
}

int main()
{
	char str1[] = "chronological";
	char str2[] = "log";
	const char* ret = my_strstr(str1, str2);
	if (ret == NULL)
	{
		printf("DNE\n");
	}
	else
	{
		printf("%s\n", ret);
	}

	return 0;
}