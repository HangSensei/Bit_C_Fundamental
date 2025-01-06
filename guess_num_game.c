#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

void menu()
{
	printf("*********************************\n");
	printf("******1. Game Start *************\n");
	printf("******2. Exit Game **************\n");
	printf("*********************************\n");

}

void game()
{
	int r = 100 + rand() % (200 - 100) + 1;
	int guess = 0;
	int count = 10;

	while (1)
	{
		printf("%d chances remaining\n",count);
		printf("Have a guess, range(100-200)\n");
		scanf("%d", &guess);
		count--;
		
		if (guess < r)
		{
			printf("Too Small\n");
		}
		else if (guess > r)
		{
			printf("Too Large\n");
		}
		else
		{
			printf("You are right\n");
			break;
		}
		if (count == 0)
		{
			printf("No chance remaining\nThe Correct value is %d\n",r);
			break;
		}
	}
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("Please Enter the Number to Select\n");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			game();
			break;
		case 2:
			printf("Game Exit\n");
			break;
		default:
			printf("Wrong Number, Please RE-Enter\n");
			break;
		}
	} while (input);
	return 0;
}