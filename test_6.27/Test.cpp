#include<iostream>
#include<assert.h>
using namespace std;

//class Date
//{
//public:
//	Date(int year = 1900, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//	Date(const Date& dd)
//	{
//		_year = dd._year;
//		_month = dd._month;
//		_day = dd._day;
//	}
//
//	void Print()
//	{
//		cout << _year << "/" << _month << "/" << _day << endl;
//	}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//class Stack
//{
//public:
//	Stack(size_t capacity = 3)
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
//	}
//
//	// Stack st2(st1);
//	Stack(const Stack& stt)
//	{
//		cout << "	Stack(Stack& stt)" << endl;
//		// 深拷贝
//		_a = (int*)malloc(sizeof(int) * stt._capacity);
//		if (_a == nullptr)
//		{
//			perror("malloc fail");
//			exit(-1);
//		}
//		memcpy(_a, stt._a, sizeof(int) * stt._top);
//		_top = stt._top;
//		_capacity = stt._capacity;
//	}
//
//	// 10:40继续
//	~Stack()
//	{
//		cout << "~Stack()" << endl;
//
//		free(_a);
//		_capacity = _top = 0;
//		_a = nullptr;
//	}
//
//private:
//	int* _a;
//	int _capacity;
//	int _top;
//};
//
//class MyQueue
//{
//	Stack _pushst;
//	Stack _popst;
//	int _size = 0;
//};
//
//
//// 浅拷贝/值拷贝
//void func1(Date d)
//{
//	d.Print();
//}
//
//void func2(Stack st)
//{
//	//...
//}

//void func3(Tree t)
//{
//
//}

//int main()
//{
//	// Date 和 MyQueue 默认生成拷贝就可以用
//	// 1、内置类型成员完成值拷贝
//	// 2、自定义类型成员调用这个成员的拷贝构造
//	// Stack需要自己写拷贝构造，完成深拷贝。
//	// 顺序表、链表、二叉树等等的类，都需要深拷贝
//
//	Date d1(2023, 10, 22);
//	func1(d1);
//	Date d2(d1);
//
//	Stack st1;
//	func2(st1);
//
//	Stack st2(st1);
//
//	MyQueue q1;
//	MyQueue q2(q1);
//
//	return 0;
//}

//Stack& func2()
//{
//	static Stack st;
//
//	return st;
//}
//
//int main()
//{
//	func2();
//
//	return 0;
//}

////////////////////////////////////////////////////////////////////////////
// 运算符重载
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
//	//Date(const Date& dd)
//	//{
//	//	_year = dd._year;
//	//	_month = dd._month;
//	//	_day = dd._day;
//	//}
//	
//	void Print()
//	{
//		cout << _year << "/" << _month << "/" << _day << endl;
//	}
//	
////private:
//	int _year;
//	int _month;
//	int _day;
//};
//
////bool Greater(Date x, Date y)
////bool Compare1(Date x, Date y)
//bool operator>(const Date& x, const Date& y)
//{
//	if (x._year > y._year)
//	{
//		return true;
//	}
//	else if (x._year == y._year && x._month > y._month)
//	{
//		return true;
//	}
//	else if (x._year == y._year && x._month == y._month && x._day > y._day)
//	{
//		return true;
//	}
//
//	return false;
//}
//
////bool Equal(Date x, Date y)
////bool Compare2(Date x, Date y)
////bool xiangdeng(Date x, Date y)
//bool operator==(const Date& x, const Date& y)
//{
//	return x._year == y._year
//		&& x._month == y._month
//		&& x._day == y._day;
//}
//
//int main()
//{
//	Date d1;
//	Date d2(2023, 10, 22);
//
//	//d1 == d2;
//	//d1 > d2;
//	/*cout << Compare1(d1, d2) << endl;
//	cout << xiangdeng(d1, d2) << endl;*/
//
//	// 运算符重载
//	// 函数重载
//	// 他们之间没有关联
//	// 运算符重载：自定义类型可以直接使用运算符
//	// 函数重载：可以允许参数不同的同名函数，
//	/*cout << operator>(d1, d2) << endl;
//	cout << operator==(d1, d2) << endl;*/
//	/*cout << (d1 > d2) << endl;
//	cout << (d1 == d2) << endl;*/
//	// 11:40 继续
//
//	bool ret1 = d1 > d2;  // operator>(d1, d2);
//	bool ret2 = d1 == d2; // operator==(d1, d2);
//
//	// 内置类型对象可以直接用各种运算符，内置类型都是简单类型
//	// 语言自己定义，编译直接转换成指令
//	// 自定义类型呢？不支持
//	/*int x = 1, y = 2;
//	bool ret1 = x > y;
//	bool ret2 = x == y;*/
//
//	return 0;
//}

/////////////////////////////////////////////////////////////////////////////

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
		cout << _year << "/" << _month << "/" << _day << endl;
	}

	//int GetYear();

	bool operator==(const Date& y)
	{
		return _year == y._year
			&& _month == y._month
			&& _day == y._day;
	}

	bool operator>(const Date& y)
	{
		if (_year > y._year)
		{
			return true;
		}
		else if (_year == y._year && _month > y._month)
		{
			return true;
		}
		else if (_year == y._year && _month == y._month && _day > y._day)
		{
			return true;
		}

		return false;
	}

	// d1 - d2
	int operator-(const Date& d)
	{
		// ...
		return 0;
	}

	int GetMonthDay(int year, int month)
	{
		assert(year >= 1 && month >= 1 && month <= 12);

		int monthArray[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30,31 };

		if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)))
			return 29;

		return monthArray[month];
	}

	// d1 += 100
	Date& operator+=(int day)
	{
		_day += day;
		while (_day > GetMonthDay(_year, _month))
		{
			_day -= GetMonthDay(_year, _month);

			++_month;

			if (_month == 13)
			{
				_year++;
				_month = 1;
			}
		}

		return *this;
	}

	// d1 + 50
	/*Date operator+(int day)
	{
		Date tmp(*this);

		tmp._day += day;
		while (tmp._day > GetMonthDay(tmp._year, tmp._month))
		{
			tmp._day -= GetMonthDay(tmp._year, tmp._month);

			++tmp._month;

			if (tmp._month == 13)
			{
				tmp._year++;
				tmp._month = 1;
			}
		}

		return tmp;
	}*/

	Date operator+(int day)
	{
		Date tmp(*this);
		tmp += day;

		return tmp;
	}

private:
	int _year;
	int _month;
	int _day;
};

int main()
{
	Date d1;
	Date d2(2023, 10, 22);

	bool ret1 = d1 > d2;  // d1.operator>(d2) -> d1.operator>(&d1, d2)
	bool ret2 = d1 == d2; // d1.operator==(d2) -> d1.operator==(&d1, d2)

	// d1.operator>(d2);

	// 一个重载哪些运算符呢？主要这个运算符有没有意义
	// 有意义就可以实现，没有意义就不要实现
	//d1 + d2;
	d1 - d2;
	//d1 * d2;
	//d1 / d2;

	d2 += 50;
	d2.Print();

	Date ret3 = d1 + 50;
	d1.Print();
	ret3.Print();

	int i = 0, j = 0;
	//i += 50;
	int ret = j += i += 50;


	return 0;
}