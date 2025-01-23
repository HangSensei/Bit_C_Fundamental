#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

//extern int mine_count;

void menu()
{
	//Display Option for Users(Menu) 
	printf("************************************\n");
	printf("*******        1. PLAY       *******\n");
	printf("*******        0. EXIT       *******\n");
	printf("************************************\n");
}

void settings()
{
	printf("Please Set the Number of Mine:\n");
	scanf("%d", &mine_count);
}

void game()
{
	settings();
	char mine[ROWS][COLS] = { 0 };// operation 
	char show[ROWS][COLS] = { 0 };// user interface
	// Initialization
	InitBoard(mine, ROWS, COLS, '0'); // user COULD NOT see
	InitBoard(show, ROWS, COLS, '*'); // user COULD see

	//Print Board
	DisplayBoard(show, ROW, COL);
	//DisplayBoard(mine, ROW, COL); // Display before set, check only

	// Set Mine
	SetMine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL); // Admin display only

	//Find Mine
	FindMine(mine, show, ROW, COL);


}

void operation()
{
	srand((unsigned int)time(NULL));
	int select = 0;
	do
	{
		menu();// Option Selection
		printf("Please Select the Option: >>> ");
		scanf("%d",&select);
		switch (select)
		{
		case 1:
			printf("Minesweeper ---- GAME START !\n");
			game();
			break;
		case 0:
			printf("Game Exit\n");
			break;
		default:
			printf("Not a Valid Option, Please Re-Select\n");
			break;
		}
	} while (select);

}

int main()
{
	operation();
	return 0;
}