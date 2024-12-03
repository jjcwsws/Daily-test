#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "game.h"

//��ʼ��ɨ����
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

//��ӡɨ����
void DisPlayboard(char board[ROWS][COLS], int row, int col)
{
	printf("----------ɨ����Ϸ-----------\n");
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

//������
void Setboard(char board[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int count = COUNT;//�����׵ĸ���,���ﲼ��10����
	while (count)
	{
		x = rand() % row + 1;
		y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';//1�����ף��������ʮ����
			count--;
		}
	}
}

//�Ų���
int CountBoard(char board[ROWS][COLS],int x, int y)
{
	return board[x][y] + board[x][y - 1] + board[x][y + 1] +
		   board[x - 1][y] + board[x - 1][y - 1] + board[x - 1][y + 1] +
		   board[x + 1][y] + board[x + 1][y - 1] + board[x + 1][y + 1]-8*'0';
	      //������Χ8�������м�����
}

void Searchboard(char board[ROWS][COLS], char board1[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	int count = 0;
	int k = COUNT;//���׵ĸ���������k
	int flag = 0;//������ʼ�����ı�־
	
	while (1)//û��ը���ͼ�����Ϸ��ֱ��ȫ���Ų���
	{
		printf("���������꣺");
		scanf("%d%d", &i, &j);
		if(i>=1&&i<=9 && j>=1&&j<=9)//�ж���������Ϸ���
		{
			if (board[i][j] == '1')//�Ƿ�ȵ���
			{
				printf("��ϲ�㣬�㱻ը����\n");
				break;//ը��������Ϸ
			}
			else
			{
				count = CountBoard(board, i, j);//���û��ը������ʾ��Χ�м�����
				board1[i][j] = count;//������Χ�м�����
				DisPlayboard(board1, ROW, COL);//�ڴ�ӡһ��ɨ���̣��鿴�ų��׵����
			}
			flag++;//����һ��û��ը��������+1
			if (flag == row * col - k)//�ж����׵Ĵ��������������Ƿ����׳ɹ�
			{
				printf("��ϲ�㣬���׳ɹ�\n");
				break;
			}
		}
		else
		{
			printf("����Ƿ�������������\n");
		}
		
	}
}