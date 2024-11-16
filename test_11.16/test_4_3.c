#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include <stdio.h>
int main()
{   //7个基本数据类型
	int a = 0;
	printf("%d\n", sizeof(int));//4
	printf("%d\n", sizeof(char));//1
	printf("%d\n", sizeof(short));//2
	printf("%d\n", sizeof(float));//4
	printf("%d\n", sizeof(double));//8
	printf("%d\n", sizeof(long));//sizeof(long)>=sizeof(int),32位：4，64位：8
	printf("%d\n", sizeof(long long));//8
	return 0;
}
//当全局变量和局部变量同名时，局部变量优先
//全局变量
int a = 0;
int main()
{
	int a = 0;//局部变量
	int b = 0, c = 0;
	scanf("%d %d", &b, &c);
	int sum = b + c;
	printf("%d", sum);
	return 0;
}