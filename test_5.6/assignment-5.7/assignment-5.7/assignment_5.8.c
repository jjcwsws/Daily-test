#define _CRT_SECURE_NO_WARNINGS 1

#pragma once

#include <stdio.h>//�����������������ͷ�ļ�
#include <stdlib.h>//����srand()��rand()������ͷ�ļ�
#include <time.h>//����time()������ͷ�ļ�
#include <windows.h>//����system("cls")��ͷ�ļ�

//�궨�����̵Ĵ�С
#define ROW 3
#define COL 3

//��ʼ������
void init_board(char board[ROW][COL], int row, int col);

//��ӡ����
void display_board(char board[ROW][COL], int row, int col);

//�������
void player_move(char board[ROW][COL], int row, int col);

//��������
void computer_move(char board[ROW][COL], int row, int col);

//�ж�����״̬
int is_full(char board[ROW][COL], int row, int col);

//�ж���Ϸ״̬
char is_win(char board[ROW][COL], int row, int col);

#include "game.h"

//��ʼ������
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

//��ӡ����
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

//�������
void player_move(char board[ROW][COL], int row, int col)
{
    int x = 0;
    int y = 0;
    printf("�������>\n");

    while (1)
    {
        printf("������Ҫ���������>");
        scanf("%d%d", &x, &y);
        //1.����ĺϷ���
        //2.�����Ƿ�ռ��
        if (x >= 1 && x <= row && y >= 1 && y <= col)
        {
            if (board[x - 1][y - 1] == ' ')
            {
                board[x - 1][y - 1] = '*';
                break;
            }
            else
                printf("�������ѱ�ռ�ã�����������\n");
        }
        else
            printf("����Ƿ�������������\n");
    }
}

//��������
void computer_move(char board[ROW][COL], int row, int col)
{
    printf("��������>\n");
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

//�ж�����״̬
//�������� ����1
//����δ�� ����0
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

//�ж���Ϸ״̬
//����*  ���Ӯ
//����#  ����Ӯ
//����Q  ƽ��
//����C  ������Ϸ
char is_win(char board[ROW][COL], int row, int col)
{
    int i = 0;
    //����һ��ȫΪ*�������Ӯ
    //����һ��Ϊ#�������Ӯ
    for (i = 0;i < row;i++)
    {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
            return board[i][0];
    }
    //����һ��ȫΪ*�������Ӯ
    //����һ��Ϊ#�������Ӯ
    for (i = 0;i < col;i++)
    {
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
            return board[0][i];
    }
    //���Խ���Ԫ�����
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
        return board[1][1];
    //б�Խ���Ԫ�����
    if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[1][1] != ' ')
        return board[1][1];

    if (is_full(board, ROW, COL) == 1)
        return 'Q';

    return 'C';
}