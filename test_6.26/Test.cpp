#include<iostream>
using namespace std;

//class Date
//{
//public:
//	void Init(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//	// 不能显示的写实参和形参
//	// void Print(Date* const this)
//	void Print()
//	{
//		//this = nullptr;
//		cout << this << endl;
//		// 但是可以在类里面显示的使用
//		cout << this->_year << "-" << this->_month << "-" << this->_day << endl;
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//
//private:
//	int _year;     // 年
//	int _month;    // 月
//	int _day;      // 日
//};
//
//int main()
//{
//	Date d1;
//	d1.Init(2023, 10, 19);
//	Date d2;
//
//	d1.Print(); // d1.Print(&d1);
//	d2.Print();
//
//	return 0;
//}

//class A
//{
//public:
//	void Print()
//	{
//		cout << _a << endl;
//		cout << "Print()" << endl;
//	}
//// private:
//	int _a;
//};
//
//int main()
//{
//	A* p = nullptr;
//
//	// 成员函数的地址不在对象中
//	// 成员变量是存在对象中
//	p->Print();
//
//	//p->_a = 1;
//
//	return 0;
//}

/////////////////////////////////////////////////////////////////////////
//class Date
//{
//public:
//	void Init(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//	void Print()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
////int main()
////{
////	// 忘记初始化？
////	Date d1;
////	d1.Print();
////
////	Date d2;
////	d2.Init(2022, 7, 6);
////	d2.Print();
////
////	// 忘记初始化？
////	Stack st;
////	st.Push(1);
////
////	return 0;
////}
//
//int main()
//{
//	// 忘记初始化？
//	Date d1;
//	d1.Print();
//
//	Date d2;
//	d2.Init(2022, 7, 6);
//	d2.Print();
//
//	// 忘记初始化？
//	Stack st;
//	st.Push(1);
//
//	return 0;
//}

//class Date
//{
//public:
//	// 够成函数重载，但是无参调用存在歧义，不能同时存在
//	/*Date()
//	{
//		_year = 1;
//		_month = 1;
//		_day = 1;
//	}*/
//
//	Date(int year = 1, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//	//void Init(int year, int month, int day)
//	//{
//	//	_year = year;
//	//	_month = month;
//	//	_day = day;
//	//}
//
//	void Print()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//// Date f(); 函数声明
//int main()
//{
//	Date d1;
//	d1.Print();
//
//	Date d2(2023, 10, 19);
//	d2.Print();
//
//	Date d3(2023, 10);
//	d3.Print();
//
//	return 0;
//}

//class Date
//{
//public:
//	// 够成函数重载，但是无参调用存在歧义，不能同时存在
//	void Print()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//
//	// 默认生成的构造函数，啥事都干？
//	// 处理自定义（会去调用这个成员的默认构造函数）
//	// 内置类型不确定(看编译器)，建议当成不处理
//private:
//	// C++11支持，声明时给缺省值
//	int _year = 1;
//	int _month = 1;
//	int _day = 1;
//};
//
//class Stack
//{
//public:
//	/*Stack(size_t capacity = 3)
//	{
//		cout << "Stack(size_t capacity = 3)" << endl;
//
//		_a = (int*)malloc(sizeof(int) * capacity);
//		if (nullptr == _a)
//		{
//			perror("malloc申请空间失败!!!");
//		}
//
//		_capacity = capacity;
//		_top = 0;
//	}*/
//
//private:
//	int* _a;
//	int _capacity;
//	int _top;
//};
//
//// 两个栈实现一个队列
//class MyQueue
//{
//private:
//	Stack _pushst;
//	Stack _popst;
//	int _size = 1;
//};
//
//int main()
//{
//	Date d1;
//	d1.Print();
//
//	Stack st1;
//
//	MyQueue mq;
//
//	return 0;
//}

//class Date
//{
//public:
//	Date(int year = 1, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//	void Print()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//private:
//	// C++11支持，声明时给缺省值
//	int _year = 1;
//	int _month = 1;
//	int _day = 1;
//};
//
//// 1、我们不写编译默认生成那个构造函数，叫默认构造
//// 2、无参构造函数也可以叫默认构造
//// 3、全缺省也可以叫默认构造
//// 可以不传参数就调用构造，都可以叫默认构造
//// 这三个函数不能同时存在，只能存在一个
//
//int main()
//{
//	Date d1;
//	d1.Print();
//
//	return 0;
//}

class Date
{
public:
	Date(int year = 1, int month = 1, int day = 1)
	{
		_year = year;
		_month = month;
		_day = day;
	}

	void Print()
	{
		cout << _year << "-" << _month << "-" << _day << endl;
	}

	~Date()
	{
		// Date严格来说，不需要写析构函数
		cout << "~Date()" << endl;
	}
private:
	// C++11支持，声明时给缺省值
	int _year = 1;
	int _month = 1;
	int _day = 1;
};

class Stack
{
public:
	Stack(size_t capacity = 3)
	{
		cout << "Stack(size_t capacity = 3)" << endl;

		_a = (int*)malloc(sizeof(int) * capacity);
		if (nullptr == _a)
		{
			perror("malloc申请空间失败!!!");
		}

		_capacity = capacity;
		_top = 0;
	}

	~Stack()
	{
		cout << "~Stack()" << endl;

		free(_a);
		_capacity = _top = 0;
		_a = nullptr;
	}

private:
	int* _a;
	int _capacity;
	int _top;
};

class MyQueue
{
	// 默认生成析构函数，行为跟构造类似
	// 内置类型成员不做处理
	// 自定义类型成员会去调用他的析构
private:
	Stack _pushst;
	Stack _popst;
	int _size = 1;
};

// 21:17继续
int main()
{
	//Date d1;
	//Stack st1;
	MyQueue mq;

	return 0;
}