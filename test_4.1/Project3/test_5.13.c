#define _CRT_SECURE_NO_WARNINGS 1

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
