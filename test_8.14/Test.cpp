//#include<stdio.h>
//
//int main()
//{
//	printf("hello world\n");
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//int main()
//{
//	cout << "hello world" << endl;
//
//	return 0;
//}

#include<stdio.h>
#include<stdlib.h>

// CPP
// C
// 面向对象
// 泛型
// C的不足的弥补

// 命名冲突
// 1、我们写的跟库冲突
// 2、我们互相之间冲突
//namespace bit
//{
//	namespace bit1
//	{
//		int rand = 1;
//	}
//
//	namespace bit2
//	{
//		int rand = 2;
//	}
//
//	int Add(int left, int right)
//	{
//		return left + right;
//	}
//
//	struct Node
//	{
//		struct Node* next;
//		int val;
//	};
//}
//
//namespace xjh
//{
//	//...
//}
//
//namespace ldl
//{
//	//...
//}
//
//int main()
//{
//	printf("hello world\n");
//
//	printf("%p\n", rand);
//
//	// :: 域作用限定符
//	printf("%d\n", bit::bit1::rand);
//
//	bit::Add(1, 2);
//
//	struct bit::Node node;
//
//	return 0;
//}

//////////////////////////////////////////////////////////////////////
// 

#include"Stack.h"

//int main()
//{
//	bit::ST s;
//	bit::StackInit(&s);
//	bit::StackPush(&s, 1);
//	bit::StackPush(&s, 2);
//	bit::StackPush(&s, 3);
//	bit::StackPush(&s, 4);
//
//	return 0;
//}

// 自己写好，做测试，没有给别人用，不存在冲突
//using namespace bit;

//using namespace std;
// std C++官方库定义的命名空间
// 工程项目不要展开std，容易冲突
// 日常练习，为了方便，就可以展开

//int main()
//{
//	//bit::ST s;
//
//	ST s;
//	StackInit(&s);
//	StackPush(&s, 1);
//	StackPush(&s, 2);
//	StackPush(&s, 3);
//	StackPush(&s, 4);
//
//	return 0;
//}

// 21:20
#include<iostream>

//int main()
//{
//	// IO流
//	// 自动识别输出变量的类型
//	// <<流插入
//	std::cout << "hello world\n";
//
//	int a = 10;
//	double b = 11.11;
//	//std::cout << a << "\n";
//	//std::cout << b << "\n";
//
//	std::cout << a << "\n"<< b << '\n';
//	std::cout << a << std::endl << b << std::endl;
//
//	return 0;
//}

// 每次指定命名空间很不方便
// 直接展开，全部暴露，又有冲突风险
// 指定展开可以解决问题
using std::cout;
using std::endl;

//int main()
//{
//	cout << "hello world\n";
//
//	int a = 10;
//	double b = 11.11;
//	// console
//	cout << a << endl << b << endl;
//	cout << a << endl << b << endl;
//	printf("%.1lf\n", b);
//
//	// 流提取
//	std::cin >> a >> b;
//
//	cout << a << endl << b << endl;
//	cout << a << endl << b << endl;
//
//	return 0;
//}

// 缺省参数
void Func(int a = 0)
{
	cout << a << endl;
}

using namespace bit;

int main()
{
	Func();
	Func(10);

	ST s1;
	// 不知道会插入多少个
	StackInit(&s1);
	StackPush(&s1, 1);
	StackPush(&s1, 2);
	StackPush(&s1, 3);
	StackPush(&s1, 4);
	StackPush(&s1, 4);
	//...

	ST s2;
	// 知道会插入100个
	StackInit(&s2, 100);
	for (size_t i = 0; i < 100; i++)
	{
		StackPush(&s2, i);
	}

	return 0;
}