#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include <stdio.h>
//int max(int x, int y)
//{
//	return (x > y) ? x : y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int ret=max(a,b);
//	printf("%d", ret);
//	return 0;
//}
int swap1(int x, int y)
{
	int temp = x;
	x = y;
	y = temp;
}
int swap(int* x, int* y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}
int main()
{
	int a = 0;
	int b = 0;
	scanf("a=%d b=%d", &a, &b);
	int ret1 = swap1(a, b);
	printf("a=%d b=%d\n", a, b);

	int ret = swap(&a, &b);
	printf("a=%d b=%d\n", a, b);
	
	return 0;
}
//多组输入，输出图形
#include <stdio.h>
int main()
{
	int a = 0;
	int i = 0;
	while (~scanf("%d", &a))
	{
		for (i = 0; i < a; i++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}