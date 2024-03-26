#define _CRT_SECURE_NO_WARNINGS 1
//int main()
//{
//    test();
//    return 0;
//}
//void test()
//{
//	int input = 0;
//		//是否进入游戏，先进入循环再判断，do-while
//		do
//		{
//			menu();    //打印菜单
//			printf("please input a number:(0/1)->");
//			scanf("%d", &input);
//			switch (input)
//			{
//			case 1:
//				printf("Let's WinWin !\n");        //开始游戏
//				game();                       //先想好怎样使用函数，再去想如何实现（game）函数
//				break;
//			case 0:
//				printf("Bye!\n");        //退出游戏
//				break;
//			default:
//				printf("Wrong!\n");        //非0/1
//				break;
//			}
//		} while (input);        //input为0时退出程序
//}
//#define    _CRT_SECURE_NO_WARNINGS
//#define ROW 9        //便于以后修改棋盘大小
//#define COL 9
//
//#include<stdio.h>
//#include<time.h>        //time(NULL)的头文件
//#include<stdlib.h>        //srand((unsigned int)time(NULL)),rand()的头文件
//#include<windows.h>        //system("cls")的头文件，用于清空屏幕
//
//void InitBoard(char arr[ROW][COL], int row, int col);
//void DisplayBoard(char arr[ROW][COL], int row, int col);
//void PlayerMove(char arr[ROW][COL], int row, int col);
//void ComputerMove(char arr[ROW][COL], int row, int col);
//char Is_Win(char arr[ROW][COL], int row, int col);
//
//void game()
//{
//	char ret = 0;
//	char arr[ROW][COL] = { 0 };
//	srand((unsigned int)time(NULL));
//	InitBoard(arr, ROW, COL);
//	DisplayBoard(arr, ROW, COL);
//	while (1)
//	{
//		printf("It's your turn.\n");
//		PlayerMove(arr, ROW, COL);
//		ret = Is_Win(arr, ROW, COL);
//		if (ret != 'c')
//			break;
//		DisplayBoard(arr, ROW, COL);
//		printf("Please wait for you turn.\n");
//		ComputerMove(arr, ROW, COL);
//		ret = Is_Win(arr, ROW, COL);
//		if (ret != 'c')
//			break;
//		DisplayBoard(arr, ROW, COL);
//	}
//	DisplayBoard(arr, ROW, COL);
//	if (ret == '#')
//		printf("You win!\n");
//	else if (ret == '*')
//		printf("Lose! To be continued...\n");
//	else
//		printf("WinWin!\n");
//}
//
//void InitBoard(char arr[ROW][COL], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			arr[i][j] = ' ';
//		}
//	}
//}
//
//void DisplayBoard(char arr[ROW][COL], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	system("cls");
//	for (i = 0; i <= row; i++)
//	{
//		if (i == 0)
//		{
//			for (j = 0; j < col; j++)
//			{
//				if (j == 0)
//				{
//					printf("    ");
//				}
//				else
//				{
//					printf("   ");
//				}
//				if (j < col)
//					printf("%d", j + 1);
//			}
//			printf("\n");
//		}
//		for (j = 0; j <= col; j++)
//		{
//			if (j == 0)
//			{
//				printf("    ");
//			}
//			else
//			{
//				printf("   ");
//
//			}
//			if (j < col)
//				printf("|");
//		}
//		printf("\n");
//		if (i < row)
//		{
//			for (j = 0; j <= col; j++)
//			{
//				if (j == 0)
//				{
//					printf("%d---", i + 1);
//				}
//				else
//				{
//					printf("---");
//				}
//
//				if (j < col)
//					printf("%c", arr[i][j]);
//			}
//		}
//		printf("\n");
//	}
//}
//
//void PlayerMove(char arr[ROW][COL], int row, int col)
//{
//	int x = 0;
//	int y = 0;
//	while (1)
//	{
//		printf("please input the coordinates->");
//		scanf("%d%d", &x, &y);
//		if (x > 0 & x <= row & y > 0 & y <= col)
//		{
//			if (arr[x - 1][y - 1] == ' ')
//			{
//				arr[x - 1][y - 1] = '#';
//				break;
//			}
//			else
//			{
//				printf("The position has been occupied.\n");
//			}
//		}
//		else
//		{
//			printf("Wrong!\n");
//		}
//	}
//}
//
//void ComputerMove(char arr[ROW][COL], int row, int col)
//{
//	while (1)
//	{
//		int x = rand() % row;
//		int y = rand() % col;
//		if (arr[x - 1][y - 1] == ' ')
//		{
//			arr[x - 1][y - 1] = '*';
//			break;
//		}
//	}
//}
//int Is_Full(char arr[ROW][COL], int row, int col)
//{
//	int i, j;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			if (arr[i][j] == ' ')
//				return 0;
//		}
//		return 1;
//	}
//}
//char Is_Win(char arr[ROW][COL], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)//行
//	{
//		for (j = 0; j + 4 < col; j++)
//		{
//			if (arr[i][j] == arr[i][j + 1] && arr[i][j + 1] == arr[i][j + 2] && arr[i][j + 2] == arr[i][j + 3] && arr[i][j + 3] == arr[i][j + 4] && arr[i][j] != ' ')
//				return arr[i][j];
//		}
//	}
//	for (j = 0; j < row; j++)//列
//	{
//		for (i = 0; i + 4 < row; i++)
//		{
//			if (arr[i][j] == arr[i + 1][j] && arr[i + 1][j] == arr[i + 2][j] && arr[i + 2][j] == arr[i + 3][j] && arr[i + 3][j] == arr[i + 4][j] && arr[i][j] != ' ')
//				return arr[i][j];
//		}
//	}
//	for (i = 0; i + 4 < row; i++)//'\'
//	{
//		for (j = 0; j + 4 < col; j++)
//		{
//			if (arr[i][j] == arr[i + 1][j + 1] && arr[i + 1][j + 1] == arr[i + 2][j + 2] && arr[i + 2][j + 2] == arr[i + 3][j + 3] && arr[i + 3][j + 3] == arr[i + 4][j + 4] && arr[i][j] != ' ')
//				return arr[i][j];
//		}
//	}
//	for (i = 4; i < row; i++)//'/'
//	{
//		for (j = 0; j + 4 < col; j++)
//		{
//			if (arr[i][j] == arr[i - 1][j + 1] && arr[i - 1][j + 1] == arr[i - 2][j + 2] && arr[i - 2][j + 2] == arr[i - 3][j + 3] && arr[i - 3][j + 3] == arr[i - 4][j + 4] && arr[i][j] != ' ')
//				return arr[i][j];
//		}
//	}
//	if (Is_Full(arr, row, col))
//		return 'Q';    //打成平手
//	else
//		return 'C';    //继续游戏
//}

#pragma once

#include <stdio.h>//调用输入输出函数的头文件
#include <stdlib.h>//调用srand()和rand()函数的头文件
#include <time.h>//调用time()函数的头文件
#include <windows.h>//调用system("cls")的头文件

//宏定义棋盘的大小
#define ROW 3
#define COL 3

//初始化棋盘
void init_board(char board[ROW][COL], int row, int col);

//打印棋盘
void display_board(char board[ROW][COL], int row, int col);

//玩家下棋
void player_move(char board[ROW][COL], int row, int col);

//电脑下棋
void computer_move(char board[ROW][COL], int row, int col);

//判断棋盘状态
int is_full(char board[ROW][COL], int row, int col);

//判断游戏状态
char is_win(char board[ROW][COL], int row, int col);

#include "game.h"

//初始化棋盘
void init_board(char board[ROW][COL], int row, int col)
{
    int i = 0;
    int j = 0;
    for (i = 0;i < row;i++)
    {
        for (j = 0;j < col;j++)
        {
            board[i][j] = ' ';
        }
    }
}

//打印棋盘
void display_board(char board[ROW][COL], int row, int col)
{
    int i = 0;
    int j = 0;
    for (i = 0;i < row;i++)
    {
        for (j = 0;j < col;j++)
        {
            printf(" %c ", board[i][j]);
            if (j < col - 1)
                printf("|");
        }
        printf("\n");
        if (i < row - 1)
        {
            for (j = 0;j < col;j++)
            {
                printf("---");
                if (j < col - 1)
                    printf("|");
            }
            printf("\n");
        }
    }
}

//玩家下棋
void player_move(char board[ROW][COL], int row, int col)
{
    int x = 0;
    int y = 0;
    printf("玩家下棋>\n");

    while (1)
    {
        printf("请输入要下棋的坐标>");
        scanf("%d%d", &x, &y);
        //1.坐标的合法性
        //2.坐标是否被占用
        if (x >= 1 && x <= row && y >= 1 && y <= col)
        {
            if (board[x - 1][y - 1] == ' ')
            {
                board[x - 1][y - 1] = '*';
                break;
            }
            else
                printf("该坐标已被占用，请重新输入\n");
        }
        else
            printf("坐标非法，请重新输入\n");
    }
}

//电脑下棋
void computer_move(char board[ROW][COL], int row, int col)
{
    printf("电脑下棋>\n");
    while (1)
    {
        int x = rand() % row;
        int y = rand() % col;

        if (board[x][y] == ' ')
        {
            board[x][y] = '#';
            break;
        }
    }
}

//判断棋盘状态
//棋盘已满 返回1
//棋盘未满 返回0
int is_full(char board[ROW][COL], int row, int col)
{
    int i = 0;
    int j = 0;
    for (i = 0;i < row;i++)
    {
        for (j = 0;j < col;j++)
        {
            if (board[i][j] == ' ')
                return 0;
        }
    }
    return 1;
}

//判断游戏状态
//返回*  玩家赢
//返回#  电脑赢
//返回Q  平局
//返回C  继续游戏
char is_win(char board[ROW][COL], int row, int col)
{
    int i = 0;
    //任意一行全为*，则玩家赢
    //任意一行为#，则电脑赢
    for (i = 0;i < row;i++)
    {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
            return board[i][0];
    }
    //任意一列全为*，则玩家赢
    //任意一列为#，则电脑赢
    for (i = 0;i < col;i++)
    {
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
            return board[0][i];
    }
    //正对角线元素相等
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
        return board[1][1];
    //斜对角线元素相等
    if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[1][1] != ' ')
        return board[1][1];

    if (is_full(board, ROW, COL) == 1)
        return 'Q';

    return 'C';
}
