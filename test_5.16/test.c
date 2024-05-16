#define _CRT_SECURE_NO_WARNINGS 1

//scanf
//printf
//库函数 - C语言的编译器提供的现成的函数,直接可以使用
//scanf的作用是输入数据，数据从键盘读取到内存中
//printf的作业是输出数据，数据从内存打印(输出)到屏幕上
//使用的时候要包含头文件stdio.h
#include <stdio.h>

//
// %c - 字符
// %d - 整型
// %s - 字符串
// %f - float
// %lf - double
// %p - 地址的打印
// 
//int main()
//{
//	//int a = 0;
//	//scanf("%d", &a);
//	//printf("%d", a);
//
//	char ch = 0;
//	scanf("%c", &ch);
//	printf("%c", ch);
//
//	return 0;
//}
//


//int main()
//{
//	{
//		int a = 100;
//	}
//	printf("%d\n", a);
//
//	return 0;
//}



//int a = 2023;
//
//void test()
//{
//	printf("2---> %d\n", a);
//}
//
//int main()
//{
//	printf("1---> %d\n", a);
//	test();
//
//	return 0;
//}


//需要声明外部符号
//extern int g_val;
//
//int main()
//{
//	printf("%d\n", g_val);
//
//	return 0;
//}



//int main()
//{
//	{
//		int a = 3;
//		int b = 5;
//		int c = a + b;
//		printf("%d\n", c);
//	}
//	//...
//
//	return 0;
//}

//int a = 10;
//
//int main()
//{
//	//
//	//....
//	//
//	return 0;
//}


//int main()
//{
//	int a = 3;
//	printf("%d\n", a);
//	a = 10;
//	printf("%d\n", a);
//
//	return 0;
//}

//int main()
//{
//	//常属性
//	//这里的a是具有常属性的，不能改变，但是本质上还是变量
//
//	//const int a = 3;
//
//	//printf("%d\n", a);
//	//a = 10;
//	//printf("%d\n", a);
//
//	//数组
//	//const int n = 10;
//	////int arr[n];
//	//int arr[n];
//
//	return 0;
//}
//

//3. #define 定义的标识符常量
//#define SIZE 10
//#define MAX 10000
//#define CH 'W'
//
//
//int main()
//{
//	//10;
//	//int a = SIZE;
//	//int arr[SIZE] = {0};
//	printf("%c", CH);
//	return 0;
//}
//

//
//4. 枚举常量
//枚举 - 一一列举
//生活中有些值是可以一一列举
// 性别：男、女、保密
// 三原色：red green blue
// 血型：
//

//enum SEX
//{
//	//列出了枚举类型enum SEX的可能取值
//	//枚举常量
//	MALE=4,
//	FEMALE=6,
//	SECRET=9
//};
//
//int main()
//{
//	enum SEX s = FEMALE;
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//
//	return 0;
//}
//

//int main()
//{
//	char c;
//	'c';
//	return 0;
//}
//
//"zhangsan"
//
//"hello world"
//

//int main()
//{
//	//"abcdef";
//	//char ch1 = 'a';
//	//char ch2 = 'b';
//	//char ch3 = 'c';
//	char ch[] = {'a', 'b', 'c', 'd', 'e', 'f'};
//	char ch2[] = "abcdef";
//
//	printf("%s\n", ch);
//	printf("%s\n", ch2);
//
//	return 0;
//}
//

//#include <string.h>
//
//int main()
//{
//	char ch1[] = { 'a', 'b', 'c'};//[a][b][c]
//	char ch2[] = "abc";            //[a][b][c][\0]
//
//	int len1 = strlen(ch1);
//	printf("%d\n", len1);
//
//	int len2 = strlen(ch2);
//	printf("%d\n", len2);
//
//	return 0;
//}
//

//转义字符 - 转变原来意思

//int main()
//{
//	printf("(are you ok\?\?)");
//	//
//	//are you ok]
//	//??) - 三字母词  --> ]
//	//
//	return 0;
//}
//
//int main()
//{
//	//printf("ab\ndef");
//	//abcdef
//	printf("c:\\test\\test.c");
//
//	return 0;
//}
//
//
//int main()
//{
//	//printf("%c\n", 'a');
//	//printf("%c\n", 'x');
//	//printf("%c\n", '\'');
//	//printf("%s\n", "abc");
//	//printf("%s\n", "a");
//	//printf("%s\n", "\"");
//	//printf("a\\tb");
//	//printf("\a");
//	/*printf("abcdef\n");
//	printf("abc\bdef\n");*/
//
//	return 0;
//}

//int main()
//{
//	printf("%c", '\133');
//	//8进制的130 转换成10进制后得到88，把88作为ASCII值代码的字符
//	return 0;
//}

//int main()
//{
//	printf("%c\n", '\x31');
//
//	return 0;
//}
//

//#include <string.h>
//
//int main()
//{
//	printf("%d\n", strlen("c:\test\x11\328\test.c"));
//
//	return 0;
//}
//


//
//int main()
//{
//	//以//开头的注释是属于C++注释风格
//	//注释
//	//strlen是一个库函数
//	//计算的是\0之前出现的字符的个数
//	//
//	/*
//	int a = 10;
//	*/
//	/*
//	* C语言注释风格 - 不支持注释嵌套
//	* 下面代码是创建一个整型变量并赋值0
//	*/
//	int b = 0;
//
//	printf("%d\n", strlen("abcdef"));
//	return 0;
//}
//
//
//
//int main()
//{
//	printf("加入比特就业课学习\n");
//	printf("你愿意好好学习吗?(1/0)>:");
//	int flag = 0;
//	scanf("%d", &flag);
//
//	if (flag == 1)
//		printf("好offer\n");
//	else if(flag == 0)
//		printf("卖红薯\n");
//
//	return 0;
//}
//


//
//50000行代码，就不错了
//

//int main()
//{
//	int line = 0;
//
//	while (line < 50000)
//	{
//		printf("敲代码: %d\n", line);
//		line++;
//	}
//
//	if (line == 50000)
//		printf("好offer\n");
//	else
//		printf("差点意思\n");
//
//	return 0;
//}
//
//

