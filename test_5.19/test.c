#define _CRT_SECURE_NO_WARNINGS 1


//int main()
//{
//	int a = 0;
//	int b = 0;
//
//	if (a > 5)
//		b = 3;
//	else
//		b = -3;
//
//	//(a > 5) ? (b = 3) : (b = -3);
//	b = ((a > 5) ? (3) : (-3));
//
//	return 0;
//}
#include <stdio.h>


//int main()
//{
//	int a = 0;
//	int b = 0;
//	int m = 0;
//	scanf("%d%d", &a, &b);
//	//if (a > b)
//	//	m = a;
//	//else
//	//	m = b;
//
//	m = (a > b ? a : b);
//
//	printf("%d\n", m);
//	return 0;
//}
//


//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1);//逗号表达式
//	printf("%d\n", a);
//	printf("%d\n", b);
//	printf("%d\n", c);
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5 };
//	//              0 1 2 3 4 5 6 7 8 9
//	//数组的起始是有下标的，下标是0开始的
//	printf("%d\n", arr[2]);//[] 下标引用操作符,arr 和 2 是[] 的两个操作数
//	//3 + 5
//	//
//	return 0;
//}

//#include <string.h>
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//void test()
//{
//	printf("hehe\n");
//}
//int main()
//{
//	//int len = strlen("abc");//() 函数调用操作符
//	//() 的操作数是：strlen "abc"
//	//printf("%d\n", len);
//
//	int c = Add(3, 5);//() 函数调用操作符
//	//Add 3 5
//	//对于函数调用操作符来说，最少有1个操作数
//
//	printf("%d\n", c);
//
//	test();
//	return 0;
//}
//

//可变参数列表 - 参数的个数是变化的 - 探索

//struct Book
//{
//	char name[30];//成员
//	char author[20];
//	float price;
//};
//
//
//int main()
//{
//	struct Book b1 = {"C语言第一课", "鹏哥", 66.5f};//书
//	struct Book b2 = {"数据结构第一课", "杭哥", 88.6f};//书
//	printf("%s %s %.1f\n", b1.name, b1.author, b1.price);
//	printf("%s %s %.1f\n", b2.name, b2.author, b2.price);
//
//	//结构体变量.成员名
//	return 0;
//}

//
//struct Book
//{
//	char name[30];//成员
//	char author[20];
//	float price;
//};
//
//void Print(struct Book * p)
//{
//	printf("%s %s %.1f\n", (*p).name, (*p).author, (*p).price);
//	printf("%s %s %.1f\n", p->name, p->author, p->price);
//	//->
//	//结构指针->成员名
//}
//
//int main()
//{
//	struct Book b1 = { "C语言第一课", "鹏哥", 66.5f };//书
//	struct Book b2 = { "数据结构第一课", "杭哥", 88.6f };//书
//	Print(&b1);
//	Print(&b2);
//
//
//	//printf("%s %s %.1f\n", b1.name, b1.author, b1.price);
//	//printf("%s %s %.1f\n", b2.name, b2.author, b2.price);
//
//	//结构体变量.成员名
//	return 0;
//}
//

//
//int main()
//{
//	char c1 = 5;
//	//00000000000000000000000000000101
//	//00000101 - c1 (截断)
//	char c2 = 127;
//	//00000000000000000000000001111111
//	//01111111 - c2
//	char c3 = c1 + c2;
//	//00000000000000000000000000000101
//	//00000000000000000000000001111111
//	//00000000000000000000000010000100
//	//10000100 - c3
//	//%d - 10进制的形式打印有符号的整数
//	//11111111111111111111111110000100 - 补码
//	//11111111111111111111111110000011
//	//10000000000000000000000001111100 --> -124
//	printf("%d\n", c3);
//	//
//	return 0;
//}
//

//int main()
//{
//	char a = 0xb6;//10110110
//	short b = 0xb600;
//	int c = 0xb6000000;
//
//	if (a == 0xb6)
//		printf("a");
//	if (b == 0xb600)
//		printf("b");
//	if (c == 0xb6000000)
//		printf("c");
//	return 0;
//}
//

//%d - 10进制的形式打印有符号的整数
//%u - 10进制的形式打印无符号的整数
//
//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c));
//	printf("%u\n", sizeof(+c));
//	printf("%u\n", sizeof(-c));
//	return 0;
//}
//

//相邻操作符优先级高的先算，低的后算
//相邻操作符的优先级相同的情况下，结合性起作用

//int main()
//{
//	int a = 2 + 3 + 5;
//
//	return 0;
//}
//int fun()
//{
//	static int count = 1;
//	return ++count;
//}
//int main()
//{
//	int answer;
//	answer = fun() - fun() * fun();
//	printf("%d\n", answer);//输出多少？
//	return 0;
//}
//

#include <stdio.h>

//int main()
//{
//	int i = 1;
//	int ret = (++i) + (++i) + (++i);
//
//	printf("%d\n", ret);
//	printf("%d\n", i);
//	return 0;
//}
//




//函数栈帧
//简单的汇编和寄存器


//#include <stdio.h>
//int main()
//{
//    int arr[] = { 1,2,(3,4),5 };
//    printf("%d\n", sizeof(arr));
//    return 0;
//}


#include <stdio.h>
#include <string.h>

//int main()
//{
//    char str[] = "hello bit";
//    printf("%d %d\n", sizeof(str), strlen(str));
//    return 0;
//}
//


//将数组A中的内容和数组B中的内容进行交换。（数组一样大）

//
//int main()
//{
//	int A[5] = { 1,3,5,7,9 };
//	int B[5] = { 2,4,6,8,0 };
//
//	int tmp = 0;
//	int i = 0;
//	int sz = sizeof(A) / sizeof(A[0]);
//	for (i = 0; i < sz; i++)
//	{
//		tmp = A[i];
//		A[i] = B[i];
//		B[i] = tmp;
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", A[i]);
//	}
//	printf("\n");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", B[i]);
//	}
//	printf("\n");
//	//int C[5] = {0};
//	//数组名是首元素的地址 - 常量的值
//	//0x0012ff40
//
//	//err
//	/*C = A;
//	A = B;
//	B = C*/;
//
//	return 0;
//}
//

//创建一个整形数组，完成对数组的操作
//实现函数init() 初始化数组为全0
//实现print()  打印数组的每个元素
//实现reverse()  函数完成数组元素的逆置。
//要求：自己设计以上函数的参数，返回值。


void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void reverse(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;

	while (left<right)
	{
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}

void init(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		arr[i] = 0;
	}
}

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	print(arr, sz);
	//逆置
	reverse(arr, sz);
	print(arr, sz);

	init(arr, sz);
	print(arr, sz);

	return 0;
}


















