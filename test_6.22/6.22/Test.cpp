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
// �������
// ����
// C�Ĳ�����ֲ�

// ������ͻ
// 1������д�ĸ����ͻ
// 2�����ǻ���֮���ͻ
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
//	// :: �������޶���
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

// �Լ�д�ã������ԣ�û�и������ã������ڳ�ͻ
//using namespace bit;

//using namespace std;
// std C++�ٷ��ⶨ��������ռ�
// ������Ŀ��Ҫչ��std�����׳�ͻ
// �ճ���ϰ��Ϊ�˷��㣬�Ϳ���չ��

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
//	// IO��
//	// �Զ�ʶ���������������
//	// <<������
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

// ÿ��ָ�������ռ�ܲ�����
// ֱ��չ����ȫ����¶�����г�ͻ����
// ָ��չ�����Խ������
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
//	// ����ȡ
//	std::cin >> a >> b;
//
//	cout << a << endl << b << endl;
//	cout << a << endl << b << endl;
//
//	return 0;
//}

// ȱʡ����
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
	// ��֪���������ٸ�
	StackInit(&s1);
	StackPush(&s1, 1);
	StackPush(&s1, 2);
	StackPush(&s1, 3);
	StackPush(&s1, 4);
	StackPush(&s1, 4);
	//...

	ST s2;
	// ֪�������100��
	StackInit(&s2, 100);
	for (size_t i = 0; i < 100; i++)
	{
		StackPush(&s2, i);
	}

	return 0;
}