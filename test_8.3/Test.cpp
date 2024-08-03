#include<iostream>
using namespace std;

//int main()
//{
//	int i = 0;
//	double d = i;
//
//	const double& r = i;
//
//	return 0;
//}

//class Person
//{
//public:
//	void Print()
//	{
//		cout << _name << endl;
//	}
//protected:
//	string _name; // 姓名
//private:
//	int _age; // 年龄
//};
//
//class Student : public Person
//{
//protected:
//	int _stunum; // 学号
//};
//
//int main()
//{
//	Student s;
//
//	Person p = s;
//	Person& r = s;
//	Person* ptr = &s;
//
//	/*char ch = 'a';
//	int i = 97;
//	if (ch == i)
//	{
//		cout << "相等" << endl;
//	}
//	else
//	{
//		cout << "不相等" << endl;
//	}*/
//
//	return 0;
//}

//class Person
//{
//public:
//	void Print()
//	{
//		cout << _name << endl;
//	}
//protected:
//	string _name; // 姓名
//	int _id = 1;
//};
//
//class Student : public Person
//{
//public:
//	void func()
//	{
//		cout << _id << endl;
//		cout << Person::_id << endl;
//	}
//
//protected:
//	int _stunum; // 学号
//	int _id = 2;
//};
//
//// A和B的fun构成什么关系
//// a、没有关系  b、重载  c、重写   d、隐藏
//// d
//class A
//{
//public:
//	void fun()
//	{
//		cout << "func()" << endl;
//	}
//};
//
//class B : public A
//{
//public:
//	void fun(int i)
//	{
//		cout << "func(int i)->" << i << endl;
//	}
//};
//
//// 隐藏::子类会隐藏父类同名成员
//// 如果是成员函数：函数名相同就构成隐藏（返回值和参数可以不相同）
//int main()
//{
//	Student s;
//	Person p = s;
//	s.func();
//
//	B b;
//	b.fun(1);
//	b.A::fun();
//
//	return 0;
//}

//class Person
//{
//public:
//	//Person(const char* name = "peter")
//	Person(const char* name)
//		: _name(name)
//	{
//		cout << "Person()" << endl;
//	}
//
//	Person(const Person& p)
//		: _name(p._name)
//	{
//		cout << "Person(const Person& p)" << endl;
//	}
//
//	Person& operator=(const Person& p)
//	{
//		cout << "Person operator=(const Person& p)" << endl;
//		if (this != &p)
//			_name = p._name;
//		return *this;
//	}
//
//	~Person()
//	{
//		cout << "~Person()" << endl;
//	}
//protected:
//	string _name; // 姓名
//};
//
//class Student : public Person
//{
//public:
//	Student(const char* name, int id)
//		:_id(id)
//		,Person(name)
//	{
//		cout << "Student(const char* name, int id)" << endl;
//	}
//
//	Student(const Student& s)
//		:Person(s)
//		,_id(s._id)
//	{
//		cout << "Student(const Student& s)" << endl;
//	}
//
//	Student& operator=(const Student& s)
//	{
//		cout << "Student& operator=(const Student& s)" << endl;
//
//		if (this != &s)
//		{
//			Person::operator=(s);
//			_id = s._id;
//		}
//
//		return *this;
//	}
//
//	// 子类的析构函数和父类的析构函数构成隐藏关系
//	// 由于后面多态原因，析构函数被特殊处理，函数名都会被处理destructor()
//	// 为了保证先子后父，父类的析构会在子类析构后自动调用
//	~Student()
//	{
//		//Person::~Person();
//
//		cout << "~Student()" << endl;
//	}
//private:
//	int _id = 1;
//};
//
//int main()
//{
//	// 默认生成构造函数：
//	// 派生类的成员：1、内置类型和自定义类型分别处理
//	// 基类的成员：调用父类的构造函数
//	Student s1("张三", 1);
//
//	// 总结：派生这些默认成员函数规则，其实跟以前类似，
//	// 唯一不同的是，不管是构造初始化/拷贝/析构，多了父类那一部分，原则：父类那部分调用父类的对应函数完成 
//	//Student s2(s1);
//
//	//Student s3("李四", 3);
//	//s1 = s3;
//
//	return 0;
//}

//class Student;
//class Person
//{
//public:
//	friend void Display(const Person& p, const Student& s);
//protected:
//	string _name; // 姓名
//};
//
//class Student : public Person
//{
//public:
//	friend void Display(const Person& p, const Student& s);
//protected:
//	int _stuNum; // 学号
//};
//
//void Display(const Person& p, const Student& s)
//{
//	cout << p._name << endl;
//	cout << s._stuNum << endl;
//}
//
//int main()
//{
//	return 0;
//}

//class Person
//{
//public:
//	Person() { ++_count; }
//protected:
//	string _name; // 姓名
//public:
//	static int _count; // 统计人的个数。
//};
//
//int Person::_count = 0;
//
//class Student : public Person
//{
//protected:
//	int _stuNum; // 学号
//};
//
//int main()
//{
//	Person p1;
//	Person p2;
//
//	Student s2;
//
//	cout << Person::_count << endl;
//	cout << Student::_count << endl;
//
//	cout << &Person::_count << endl;
//	cout << &Student::_count << endl;
//
//	return 0;
//}


class Person
{
public:
	string _name; // 姓名
	int _age;
	int _tel;
	string _address;
	// ...
};

//class Student : public Person
class Student : virtual public Person
{
protected:
	int _num; //学号
};

class Teacher : virtual public Person
{
protected:
	int _id; // 职工编号
};

class Assistant : public Student, public Teacher
{
protected:
	string _majorCourse; // 主修课程
};

//int main()
//{
//	Assistant at;
//	at.Student::_name = "小张";
//	at.Teacher::_name = "张哥";
//	// 暂时解决了二义性，没有解决本质问题，不需要存两份，空间浪费
//
//	at._name = "张三";
//
//	return 0;
//}

class A
{
public:
	int _a;
};

//class B : public A
class B : virtual public A
{
public:
	int _b;
};

//class C : public A
class C : virtual public A
{
public:
	int _c;
};

class D : public B, public C
{
public:
	int _d;
};

int main()
{
	D dd;
	dd.B::_a = 1;
	dd.C::_a = 2;
	dd._b = 3;
	dd._c = 4;
	dd._d = 5;

	//D ddd;

	B bb;
	bb._a = 10;
	bb._b = 12;

	B* pb = &dd;
	pb->_a++;

	pb = &bb;
	pb->_a++;

	// ostream os;


	return 0;
}