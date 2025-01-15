//#define _CRT_SECURE_NO_WARNINGS 1
//#pragma warning(disable:6031)
#include "Contact.h"
void menu()//简易游戏菜单
{
	printf("*********1.add       2.del*********\n");
	printf("*********3.search    4.modify******\n");
	printf("*********5.show      6.sort********\n");
	printf("*********0.exit *******************\n");
}
void test()
{
	int input = 0;
	//定义通讯录变量
	Contact con;
	//初始化通讯录
	InitContact(&con);
	do
	{
		menu();
		printf("请选择数字:");
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
			printf("退出\n");
			break;
		default:
			printf("选择错误，请重新输入\n");
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}