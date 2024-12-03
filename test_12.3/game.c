#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "game.h"

//初始化扫雷盘
void Initboard(char board[ROWS][COLS], int row, int col,char set)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			board[i][j] = set;
		}
	}
}

//打印扫雷盘
void DisPlayboard(char board[ROWS][COLS], int row, int col)
{
	printf("----------扫雷游戏-----------\n");
	int i = 0;
	for (i = 0; i <= row; i++)
	{
		printf("%2d ", i);
	}
	printf("\n");
	for (i = 1; i <=row; i++)
	{
		printf("%2d ", i);
		int j = 0;
		for (j = 1; j <=col; j++)
		{
				printf("%2c ", board[i][j]);
		}
		printf("\n");
	}
}

//布置雷
void Setboard(char board[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int count = COUNT;//布置雷的个数,这里布置10个雷
	while (count)
	{
		x = rand() % row + 1;
		y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';//1代表雷，随机布置十个雷
			count--;
		}
	}
}

//排查雷
int CountBoard(char board[ROWS][COLS],int x, int y)
{
	return board[x][y] + board[x][y - 1] + board[x][y + 1] +
		   board[x - 1][y] + board[x - 1][y - 1] + board[x - 1][y + 1] +
		   board[x + 1][y] + board[x + 1][y - 1] + board[x + 1][y + 1]-8*'0';
	      //返回周围8个格子有几个雷
}

void Searchboard(char board[ROWS][COLS], char board1[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	int count = 0;
	int k = COUNT;//将雷的个数给变量k
	int flag = 0;//排雷起始次数的标志
	
	while (1)//没被炸死就继续游戏，直到全部排查完
	{
		printf("请输入坐标：");
		scanf("%d%d", &i, &j);
		if(i>=1&&i<=9 && j>=1&&j<=9)//判断输入坐标合法性
		{
			if (board[i][j] == '1')//是否踩到雷
			{
				printf("恭喜你，你被炸死了\n");
				break;//炸死结束游戏
			}
			else
			{
				count = CountBoard(board, i, j);//如果没被炸死，显示周围有几个雷
				board1[i][j] = count;//表明周围有几颗雷
				DisPlayboard(board1, ROW, COL);//在打印一下扫雷盘，查看排除雷的情况
			}
			flag++;//排雷一次没被炸死，次数+1
			if (flag == row * col - k)//判断排雷的次数来控制最总是否排雷成功
			{
				printf("恭喜你，排雷成功\n");
				break;
			}
		}
		else
		{
			printf("坐标非法，请重新输入\n");
		}
		
	}
}