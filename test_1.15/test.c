//#define _CRT_SECURE_NO_WARNINGS 1
//#pragma warning(disable:6031)
#include "Contact.h"
void menu()//������Ϸ�˵�
{
	printf("*********1.add       2.del*********\n");
	printf("*********3.search    4.modify******\n");
	printf("*********5.show      6.sort********\n");
	printf("*********0.exit *******************\n");
}
void test()
{
	int input = 0;
	//����ͨѶ¼����
	Contact con;
	//��ʼ��ͨѶ¼
	InitContact(&con);
	do
	{
		menu();
		printf("��ѡ������:");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case SORT:
			SortContact(&con);
			break;
		case EXIT:
			printf("�˳�\n");
			break;
		default:
			printf("ѡ���������������\n");
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}