#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	printf("---------Minesweeper---------\n");
	for (int i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (int i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (int j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("-----------------------------\n");
}
// Setting Mine = Finding 10 coordinates randomly on the board.
// x: 1-9
// y; 1-9
void SetMine(char mine[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;// EZ Count  = 10
	int x = 0;
	int y = 0;
	while (count)// the while loop will run 10 times at least
	{
		x = rand() % row + 1; // If any number is divided by 9, the reminder == range [0,8]
		y = rand() % row + 1;// 0 + 1 = 1 ; 8 + 1 = 9, Thus we could get 1 - 9 randomly

		if (mine[x][y] != '1')// avoid duplicate
		{
			mine[x][y] = '1';// set mine (mine = '1')
			count--;
		}
	}
}



// [x-1,y-1]  [x-1,y]  [x-1,y+1]
// [x,y-1]    [x,y]    [x,y+1]
// [x+1,y-1]  [x+1,y]  [x+1,y+1]
// '1' - '0' = 1 (ASCII code 49 - 48 = 1)
static int GetMineCount(char mine[ROWS][COLS], int x, int y)
{
	/*return mine[x - 1][y - 1] 
		+ mine[x - 1][y] 
		+ mine[x - 1][y + 1] 
		+ mine[x][y - 1] 
		+ mine[x][y + 1] 
		+ mine[x + 1][y - 1] 
		+ mine[x + 1][y] 
		+ mine[x + 1][y + 1] 
		- 8 * '0';*/
	int count = 0;
	for (int i = -1; i <= 1; i++)
	{
		for (int j = -1; j <= 1; j++)
		{
			count += (mine[x + i][y + j] - '0');

		}
	}
	return count;
}


void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win < row * col - EASY_COUNT) // total space - num of mine ex: 9 * 9 -10
	{
		printf("Please Enter the Coordinate You Want to Look Up:>>> ");
		scanf("%d %d", &x, &y);
		if (x >= SC && x <= row && y >= SC && y <= col)// SC = 1 (start coordinate)
		{
			if (mine[x][y] == '1')// is mine
			{
				printf("BOOM !---YOU DIED---GAME OVER\n");
				DisplayBoard(mine, ROW, COL);
				break;
			}
			else // not mine
			{
				int count = GetMineCount(mine, x, y);
				show[x][y] = count + '0';
				DisplayBoard(show, ROW, COL);
				win++;
				printf("%d space remaining\n", row * col - win);
			}
		}
		else
		{
			printf("Coordinate NOT VALID, Please Re-enter the coordinate:");
		}
	 }
	if (win == row * col - EASY_COUNT)
	{
		printf("YOU WIN");
		DisplayBoard(mine, ROW, COL);
	}

}