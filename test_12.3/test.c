#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "game.h"
void menu()
{
	printf("*********************************\n");
	printf("*****����1��ʼ��Ϸ 0�˳���Ϸ*****\n");
	printf("*********************************\n");
}
void game()
{
	//��Ҫ����ɨ���̣����ｨ���������飬���ɨ�׵�Ӧ�ö�֪����ѡ��һ�������׵�ʱ��
	//�������֣�������Ըø���Ϊ������Χ��8�������м����ף�����ɨ���̱�Եʱ��������Χ8������
	//�����Խ�磬�����Ҫ���ڸ��û�������ɨ���̻����Ͻ�������

	char board[ROWS][COLS];//�����׵Ĳ�������
	char board1[ROWS][COLS];//���û�ɨ�׵Ĳ�������

	//��ʼ��ɨ����
	//��0��*��������ɨ���̣�0�ǽ�Ҫ�����׵�ɨ���̣�*�����û�Ҫ�Ų��׵���
	Initboard(board, ROWS, COLS,'0');
	Initboard(board1, ROWS, COLS,'*');

	//��ӡɨ����
	//DisPlayboard(board, ROW, COL);
	//DisPlayboard(board1, ROW, COL);//���û���ʱ�����տ��Խ���һ�к��������и�ע�͵�

	//������
	Setboard(board, ROW, COL);
	DisPlayboard(board, ROW, COL);
	DisPlayboard(board1, ROW, COL);
	//�Ų���
	Searchboard(board,board1,ROW, COL);
}
int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();//��Ϸ�˵�
		printf("������һ������>");
		scanf("%d", &input);
		switch (input)//ѡ���Ƿ�ʼ��Ϸ
		{
		case 0:
			printf("�˳���Ϸ\n");
			break;
		case 1:
			printf("��ʼ��Ϸ\n");
			game();//������Ϸ
			break;;
		default:
			printf("�����������������\n");
			break;
		}
	} while (input);
	return 0;
}