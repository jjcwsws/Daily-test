#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "game.h"
void menu()
{
	printf("*********************************\n");
	printf("*****输入1开始游戏 0退出游戏*****\n");
	printf("*********************************\n");
}
void game()
{
	//需要两个扫雷盘，这里建立两个数组，玩过扫雷的应该都知道，选定一个不是雷的时候
	//出现数字，会表明以该格子为中心周围的8个格子有几个雷，但在扫雷盘边缘时，访问周围8个格子
	//会出现越界，因此需要将在给用户看到的扫雷盘基础上将其扩大

	char board[ROWS][COLS];//布置雷的操作数组
	char board1[ROWS][COLS];//给用户扫雷的操作数组

	//初始化扫雷盘
	//用0，*区分两个扫雷盘，0是将要布置雷的扫雷盘，*代表用户要排查雷的盘
	Initboard(board, ROWS, COLS,'0');
	Initboard(board1, ROWS, COLS,'*');

	//打印扫雷盘
	//DisPlayboard(board, ROW, COL);
	//DisPlayboard(board1, ROW, COL);//给用户玩时，最终可以将这一行和上面两行给注释掉

	//布置雷
	Setboard(board, ROW, COL);
	DisPlayboard(board, ROW, COL);
	DisPlayboard(board1, ROW, COL);
	//排查雷
	Searchboard(board,board1,ROW, COL);
}
int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();//游戏菜单
		printf("请输入一个数：>");
		scanf("%d", &input);
		switch (input)//选择是否开始游戏
		{
		case 0:
			printf("退出游戏\n");
			break;
		case 1:
			printf("开始游戏\n");
			game();//进入游戏
			break;;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (input);
	return 0;
}