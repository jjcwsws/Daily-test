#define _CRT_SECURE_NO_WARNINGS 1

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