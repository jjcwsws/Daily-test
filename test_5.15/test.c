#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//void test(int* p)
//{
//	(*p)++;
//}
//
//int main()
//{
//	int num = 0;
//	test(&num);
//	test(&num);
//	printf("%d\n", num);
//
//	return 0;
//}
//


//int test(int n)
//{
//	return (n + 1);
//}
//
//int main()
//{
//	int num = 0;
//	num = test(num);
//	num = test(num);
//	printf("%d\n", num);
//
//	return 0;
//}


//可以嵌套调用
//但是不存在嵌套定义

//int test()
//{
//	int a = 0;
//	int b = 0;
//	return a + b;
//}
//
//void fun()
//{
//	test();
//	printf("hehe\n");
//}
//
//
//
//int main()
//{
//	return 0;
//}

//#include <string.h>
//
//int main()
//{
//	//int len = strlen("abcdef");
//	//printf("%d\n", len);
//	//链式访问
//	printf("%d\n", strlen("abcdef"));
//
//	return 0;
//}
//
//int main()
//{
//	printf("%d ", printf("%d ", printf("%d ", 43)));
//
//	return 0;
//}
//

//函数声明
//int Add(int, int);
//int Add(int x, int y);
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	//输入
//	scanf("%d %d", &a, &b);
//	//加法
//	int c = Add(a, b);//函数调用
//	//打印
//	printf("%d\n", c);
//
//	return 0;
//}
//
////函数的定义
//int Add(int x, int y)
//{
//	return x + y;
//}


//函数的定义-定义是一种特殊的声明
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	//输入
//	scanf("%d %d", &a, &b);
//	//加法
//	int c = Add(a, b);//函数调用
//	//打印
//	printf("%d\n", c);
//
//	return 0;
//}
//

//函数的声明和定义其实通常不是这样使用的
//函数的声明是放在头文件中

//#include "add.h"
//
////.lib - 静态库
////导入静态库
//#pragma comment(lib, "add.lib")
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	//输入
//	scanf("%d %d", &a, &b);
//	//加法
//	int c = Add(a, b);//函数调用
//	//打印
//	printf("%d\n", c);
//
//	return 0;
//}
//

//会死递归，导致栈溢出了

//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}
//
//void print(unsigned int n)
//{
//	if (n > 9)
//	{
//		print(n/10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	//输入
//	scanf("%d", &num);//1234
//	
//	print(num);
//
//	return 0;
//}


//编写函数不允许创建临时变量，求字符串的长度。

//求字符串的长度
#include <string.h>

//int my_strlen(char* s)
//{
//	int count = 0;
//	while (*s != '\0')
//	{
//		count++;
//		s++;
//	}
//	return count;
//}


//my_strlen("abc")
//1+my_strlen("bc")
//1+1+my_strlen("c")
//1+1+1+my_strlen("")
//1+1+1+0
//3

//递归
//int my_strlen(char* s)
//{
//	if (*s == '\0')
//		return 0;
//	else
//		return 1 + my_strlen(s + 1);
//}
//
//int main()
//{
//	char arr[] = "abc";
//	//[a b c \0]
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//
//	return 0;
//}



//n! = 1*2*3*4...*n
//循环(迭代)
//int Fac(int n)
//{
//	int r = 1;
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		r = r * i;
//	}
//	return r;
//}

//递归
//int Fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fac(n - 1);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fac(n);
//	printf("%d\n", ret);
//
//	return 0;
//}


//
//求第n个斐波那契数
//1 1 2 3 5 8 13 21 34 55 ...
//前2个的数的和是第三个数
//
//int count = 0;
//int Fib(int n)
//{
//	if (n == 3)
//		count++;
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}

//迭代写法
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	//5 4 3
//	while (n >= 3)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//	//printf("count = %d\n", count);
//	return 0;
//}
//

