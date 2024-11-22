#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//求和
int main()
{
    long long a = 0;
    scanf("%lld", &a);
    long long sum = (1 + a) * a / 2;
    printf("%lld\n", sum);
    return 0;
}
//求 最大值
//#include <stdio.h>
int main()
{
    int a, b, c, d;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    a = a > b ? a : b;
    a = a > c ? a : c;
    a = a > d ? a : d;
    printf("%d", a);
    return 0;
}
//判断输入的是否是字符
#include <stdio.h>
int main()
{
    char a = '0';
    while (scanf("%c", &a) == 1)
    {
        
        if (('a' <= a && a <= 'z') || ('A' <= a && a <= 'Z'))
        {
            printf("%c is an alphabet.\n", a);
            getchar();
        }
        else
        {
            printf("%c is not an alphabet.\n", a);
            getchar();
        }
    }
    return 0;
}
//三子棋
void menu()
{
	printf("******************\n");
	printf("**1.play  0.exit**\n");
	printf("******************\n");
}
void game()
{
	int a = rand() % 100 + 1;
	int b = 0;	
	while (1)
	{
		printf("请猜数：");
		scanf("%d", &b);
		if (b > a)
		{
			printf("猜大了\n");
		}
		else if (b < a)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜你，猜对了\n");
			break;
		}
	}
}
int main()
{
	int a = 0;
	srand((unsigned int)time(NULL));
	do
	{
		printf("请输入一个数:>");
		scanf("%d", &a);
		switch (a)
		{
		case 0:
			printf("退出游戏\n");
			break;
		case 1:
			printf("开始游戏\n");
			game();
			break;
		default:
			printf("输入错误，请重新再输\n");
			break;
		}
	} while (a);
	return 0;
}