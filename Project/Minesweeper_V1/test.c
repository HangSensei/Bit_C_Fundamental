#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void menu()
{
	//Display Option for Users(Menu) 
	printf("************************************\n");
	printf("************** 1. PLAY *************\n");
	printf("************** 0. EXIT *************\n");
	printf("************************************\n");
}

void game()
{
	char mine[ROWS][COLS] = { 0 };// operation 
	char show[ROWS][COLS] = { 0 };// user interface
	// Initialization
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');

	//Print Board
	DisplayBoard(show, ROW, COL);
	//DisplayBoard(mine, ROW, COL);

	// Set Mine
	SetMine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);

	//Find Mine
	FindMine(mine, show, ROW, COL);


}

void test()
{
	srand((unsigned int)time(NULL));
	int select = 0;
	do
	{
		// Option Selection
		menu();
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
	test();
	return 0;
}