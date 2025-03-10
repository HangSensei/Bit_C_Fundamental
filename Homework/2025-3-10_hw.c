#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

/*
#define MY_OFFSETOF(st, n) ((size_t)&(((st*)0)->n))

typedef struct
{
	char a;
	int b;
}StructType;

int main()
{
	size_t ret = MY_OFFSETOF(StructType, b);

	printf("%zd", ret);
	
	return 0;
}
*/

#define SWAT_BIT_INT(n) ((((n) & 0x55555555) << 1) | (((n) & 0xaaaaaaaa) >> 1))

int main()
{
	int n = 13;
	int ret = SWAT_BIT_INT(n);
	printf("%d", ret);
	return 0;
}