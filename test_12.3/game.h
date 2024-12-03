#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROW 9//用户实际操作扫雷盘行的大小
#define COL 9//用户实际操作扫雷盘列的大小
#define ROWS ROW+2//扫雷盘行的大小
#define COLS COL+2//扫雷盘列的大小
#define COUNT 80;//定义雷的个数
//初始化扫雷盘
void Initboard(char board[ROWS][COLS],int row, int col,char set);

//打印扫雷盘
void DisPlayboard(char board[ROWS][COLS], int row, int col);

//布置雷
void Setboard(char board[ROWS][COLS], int row, int col);

//排查雷
void Searchboard(char board[ROWS][COLS],char board1[ROWS][COLS], int row, int col);

