#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
// Recursion
void Digit(int n)
{
	if (n < 10)
	{
		printf("%d ",n);
	}
	else
	{
		Digit(n / 10);
		printf("%d ", n % 10);
	}
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	Digit(n);
	return 0;
}

