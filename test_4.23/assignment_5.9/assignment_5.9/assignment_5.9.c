#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

void menu()
{
	printf("*****************************************\n");
	printf("*********  1.play      0.exit   *********\n");
	printf("*****************************************\n");
}

void game()
{
	char mine[ROWS][COLS] = { 0 };

	char show[ROWS][COLS] = { 0 };

	init_board(mine, ROWS, COLS, '0');
	init_board(show, ROWS, COLS, '*');

	set_mine(mine, ROW, COL);
	system("cls");

	display_board(show, ROW, COL);

	find_mind(mine, show, ROW, COL);
}

int main()
{

	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�����������������\n");
			break;
		}
	} while (input);
	return 0;
}