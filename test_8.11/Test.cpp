#include<iostream>
#include<array>
#include<vector>
using namespace std;

//int main()
//{
//	int a2[10];
//
//	array<int, 10> a1;
//	cout << sizeof(a1) << endl;
//	string a3[10];
//
//	//a1[10];
//	a2[10];
//
//	vector<int> a4(10, 0);
//	a4[10];
//
//	return 0;
//}

class Date
{
public:
	Date(int year = 1900, int month = 1, int day = 1)
		: _year(year)
		, _month(month)
		, _day(day)
	{}
	bool operator<(const Date& d)const
	{
		return (_year < d._year) ||
			(_year == d._year && _month < d._month) ||
			(_year == d._year && _month == d._month && _day < d._day);
	}
	bool operator>(const Date& d)const
	{
		return (_year > d._year) ||
			(_year == d._year && _month > d._month) ||
			(_year == d._year && _month == d._month && _day > d._day);
	}

	friend ostream& operator<<(ostream& _cout, const Date& d);
private:
	int _year;
	int _month;
	int _day;
};

ostream& operator<<(ostream& _cout, const Date& d)
{
	_cout << d._year << "-" << d._month << "-" << d._day;
	return _cout;
}

template<class T>
bool Less(T left, T right)
{
	return left < right;
}

// 函数模板的特化
//template<>
//bool Less<Date*>(Date* left, Date* right)
//{
//	return *left < *right;
//}

bool Less(Date* left, Date* right)
{
	return *left < *right;
}

//int main()
//{
//	cout << Less(1, 2) << endl;
//
//	Date d1(2022, 7, 7);
//	Date d2(2022, 7, 8);
//	cout << Less(d1, d2) << endl; // 可以比较，结果正确
//
//	Date* p1 = &d1;
//	Date* p2 = &d2;
//	cout << Less(p1, p2) << endl; // 可以比较，结果错
//
//	Date* p3 = new Date(2022, 7, 7);
//	Date* p4 = new Date(2022, 7, 8);
//	cout << Less(p3, p4) << endl; // 可以比较，结果错
//
//	return 0;
//}

template<class T1, class T2>
class Data
{
public:
	Data() { cout << "Data<T1, T2>" << endl; }
};

// 全特化
template<>
class Data<int, char>
{
public:
	Data() { cout << "Data<int, char>" << endl; }
private:
	int _d1;
	char _d2;
};

template <>
class Data<int, int>
{
public:
	Data() { cout << "Data<int, int>" << endl; }
private:
};

// 偏特化1：特化部分参数
template <class T1>
class Data<T1, int>
{
public:
	Data() { cout << "Data<T1, int>" << endl; }
private:
	T1 _d1;
	int _d2;
};

// 偏特化2：对参数类型进行一定限制，比如：限制是指针或者引用等
template <class T1, class T2>
class Data<T1*, T2*>
{
public:
	Data() { cout << "Data<T1*, T2*>" << endl; }
};

//两个参数偏特化为引用类型
template <typename T1, typename T2>
class Data <T1&, T2*>
{
public:
	Data()
	{
		cout << "Data<T1&, T2*>" << endl;
	}
};

// 匹配顺序
// 全特化 -> 偏特化 -> 原模板
//int main()
//{
//	Data<int, int> d1;
//	Data<int, char> d2;
//	Data<char, int> d3;
//
//	Data<char*, int*> d4;
//	Data<int*, int*> d5;
//	Data<int&, int*> d6;
//	Data<int*, int&> d7;
//
//	return 0;
//}

//#include"Stack.h"
//
//int main()
//{
//	Add(1, 2);
//	func(1, 2);
//
//	Add(1.1, 2.2);
//
//	return 0;
//}

#include"Stack.h"

class Person
{
public:
	void Print()
	{
		cout << "name:" << _name << endl;
		cout << "age:" << _age << endl;
	}
protected:
//private:
	string _name = "peter"; // 姓名
	int _age = 18; // 年龄
};

class Student : public Person
{
public:
	void func()
	{
		cout << _name << endl;
		//cout << _age << endl;
	}

protected:
	int _stuid; // 学号
};

class Teacher : public Person
{
protected:
	int _jobid; // 工号
};

int main()
{
	Student s;
	s.Print();

	Teacher t;
	t.Print();

	return 0;
}