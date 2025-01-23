#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2


int mine_count;

#define SC 1 // start coordinate
//Initialization 11 * 11
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set);

//Print Board 9 * 9
void DisplayBoard(char board[ROWS][COLS], int row, int col);

void SetMine(char mine[ROWS][COLS], int row, int col);

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);

// int GetMineCount(char mine[ROWS][COLS], int x, int y);

