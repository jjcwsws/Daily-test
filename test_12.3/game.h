#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROW 9//�û�ʵ�ʲ���ɨ�����еĴ�С
#define COL 9//�û�ʵ�ʲ���ɨ�����еĴ�С
#define ROWS ROW+2//ɨ�����еĴ�С
#define COLS COL+2//ɨ�����еĴ�С
#define COUNT 80;//�����׵ĸ���
//��ʼ��ɨ����
void Initboard(char board[ROWS][COLS],int row, int col,char set);

//��ӡɨ����
void DisPlayboard(char board[ROWS][COLS], int row, int col);

//������
void Setboard(char board[ROWS][COLS], int row, int col);

//�Ų���
void Searchboard(char board[ROWS][COLS],char board1[ROWS][COLS], int row, int col);

