#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

//extern int mine_count;
void clc()
{
	int emp = 0;
	scanf("%d", &emp);
	Sleep(500);// sleep 500ms
	system("cls");//clear screen
}
void gradewin(int num)
{
	int c = num;
	int d = ROWS * COLS;
	printf("Number of Space Clear: %d/%d\n", num, ROW * COL);
	printf("Rating: 5 Star\n");
}
void gradelose(int num)
{
	int c = num;
	int d = ROWS * COLS;
	printf("Number of Space Clear: %d/%d\n", num, ROW * COL);

	if (((double)c / (double)d >= 0.0) && ((double)c / (double)d <= 0.2))
	{
		printf("Rating: 1 Star\n");
	}
	else if (((double)c / (double)d > 0.2) && ((double)c / (double)d <= 0.4))
	{
		printf("Rating: 2 Star\n");
	}
	else if (((double)c / (double)d > 0.4) && ((double)c / (double)d <= 0.6))
	{
		printf("Rating: 3 Star\n");
	}
	else if (((double)c / (double)d > 0.6) && ((double)c / (double)d <= 0.8))
	{
		printf("Rating: 4 Star\n");
	}
	else
	{
		printf("Rating: 5 Star\n");
	}
	printf("\n");
}

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
	int count = mine_count;// EZ Count  = 10
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
	static int num = 0;
	
	while (win < row * col - mine_count) // total space - num of mine ex: 9 * 9 -10
	{
		printf("Please Enter the Coordinate You Want to Look Up : >>> ");
		scanf("%d %d", &x, &y);

		if (x >= SC && x <= row && y >= SC && y <= col)// SC = 1 (start coordinate)
		{
			if (mine[x][y] == '1')//coord is mine
			{
				printf("BOOM !---YOU DIED---GAME OVER\n");
				gradelose(num);
				DisplayBoard(mine, ROW, COL);
				printf("Plese Enter Any Number to Restart Game:\n");
				clc();
				break;
			}
			else //coord is not mine
			{
				int count = GetMineCount(mine, x, y);
				show[x][y] = count + '0';
				DisplayBoard(show, ROW, COL);
				win++;
				num++;
				printf("%d space remaining\n", row * col - win);
			}
		}
		else // corrd out of board range
		{
			printf("Coordinate NOT VALID ! \n");
		}
		
	}

	if (win == row * col - mine_count && mine_count < row * col)
	{
		printf("YOU WIN\n");
		gradewin(num);
		DisplayBoard(mine, ROW, COL);
		clc();
	}

}