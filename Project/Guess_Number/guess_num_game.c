#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

void menu()
{
	printf("********************************\n");
	printf("*******     1. Play      *******\n");
	printf("*******     0. Exit      *******\n");
	printf("********************************\n");
	printf("Please Select the Option: \n>>> ");
}

void prompt(int x, int y)
{
	system("cls");//clear screen
	printf("Hint: The Range is %d ~ %d\n", x, y);
	printf("Please Enter the Number You Guess:\n>>> ");
}

void info(int r_num, int c, int d)
{
	printf("Congratulations!\nYou are Right!\n");
	printf("The Correct Number is %d\n", r_num);
	printf("Chance used: %d/%d\n",c,d);
	// Rating system based on used chance / total chance
	if (((double)c / (double)d >= 0.0) && ((double)c / (double)d <= 0.2))
	{
		printf("Rating: 5 Star\n");
	}
	else if (((double)c / (double)d > 0.2) && ((double)c / (double)d <= 0.4))
	{
		printf("Rating: 4 Star\n");
	}
	else if (((double)c / (double)d > 0.4) && ((double)c / (double)d <= 0.6))
	{
		printf("Rating: 3 Star\n");
	}
	else if (((double)c / (double)d > 0.6) && ((double)c / (double)d <= 0.8))
	{
		printf("Rating: 2 Star\n");
	}
	else
	{
		printf("Rating: 1 Star\n");
	}
	printf("\n");
}

void game(int a, int b, int chance, int input)
{
	int r = a + rand() % (b - a + 1);// Generate rand_num from Range a to b
	int guess = 0;
	int count = 0;
	int d = chance;
	//printf("%d\n", r);
	prompt(a, b);

	while (chance)
	{
		
		scanf("%d", &guess);// User input (Select)
		chance--;
		count++;
		printf("Chance Remaining: %d\n", chance);
		// compare 
		if (guess > r)
		{
			printf("Too Big, Try to Guess Smaller\n>>> ");
		}
		else if (guess < r)
		{
			printf("Too Small, Try to Guess Bigger\n>>> ");
		}
		else
		{
			info(r, count, d);
			break;
		}
	}

}

int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;

	do 
	{
		menu();
		
		scanf("%d",&input);// User Menu input (Select)

		int a = 0;
		int b = 0;
		int c = 0;

		switch (input)
		{
		case 1:
			printf("Please Set the Range: \n>>> ");
			scanf("%d %d", &a, &b);// Set the Range
			printf("Please Set the Chance: \n>>> ");
			scanf("%d", &c);// Set the Chance
			game(a, b, c, input);
			break;
		case 0:
			printf("Exit Game");
			break;
		default:
			printf("Wrong Option\nPlease Re Select\n");
			break;
		}

	} while (input);

	return 0;
}