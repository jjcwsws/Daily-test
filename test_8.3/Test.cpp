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
//	string _name; // ����
//private:
//	int _age; // ����
//};
//
//class Student : public Person
//{
//protected:
//	int _stunum; // ѧ��
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
//		cout << "���" << endl;
//	}
//	else
//	{
//		cout << "�����" << endl;
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
//	string _name; // ����
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
//	int _stunum; // ѧ��
//	int _id = 2;
//};
//
//// A��B��fun����ʲô��ϵ
//// a��û�й�ϵ  b������  c����д   d������
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
//// ����::��������ظ���ͬ����Ա
//// ����ǳ�Ա��������������ͬ�͹������أ�����ֵ�Ͳ������Բ���ͬ��
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
//	string _name; // ����
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
//	// ��������������͸�������������������ع�ϵ
//	// ���ں����̬ԭ���������������⴦�����������ᱻ����destructor()
//	// Ϊ�˱�֤���Ӻ󸸣�������������������������Զ�����
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
//	// Ĭ�����ɹ��캯����
//	// ������ĳ�Ա��1���������ͺ��Զ������ͷֱ���
//	// ����ĳ�Ա�����ø���Ĺ��캯��
//	Student s1("����", 1);
//
//	// �ܽ᣺������ЩĬ�ϳ�Ա����������ʵ����ǰ���ƣ�
//	// Ψһ��ͬ���ǣ������ǹ����ʼ��/����/���������˸�����һ���֣�ԭ�򣺸����ǲ��ֵ��ø���Ķ�Ӧ������� 
//	//Student s2(s1);
//
//	//Student s3("����", 3);
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
//	string _name; // ����
//};
//
//class Student : public Person
//{
//public:
//	friend void Display(const Person& p, const Student& s);
//protected:
//	int _stuNum; // ѧ��
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
//	string _name; // ����
//public:
//	static int _count; // ͳ���˵ĸ�����
//};
//
//int Person::_count = 0;
//
//class Student : public Person
//{
//protected:
//	int _stuNum; // ѧ��
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
	string _name; // ����
	int _age;
	int _tel;
	string _address;
	// ...
};

//class Student : public Person
class Student : virtual public Person
{
protected:
	int _num; //ѧ��
};

class Teacher : virtual public Person
{
protected:
	int _id; // ְ�����
};

class Assistant : public Student, public Teacher
{
protected:
	string _majorCourse; // ���޿γ�
};

//int main()
//{
//	Assistant at;
//	at.Student::_name = "С��";
//	at.Teacher::_name = "�Ÿ�";
//	// ��ʱ����˶����ԣ�û�н���������⣬����Ҫ�����ݣ��ռ��˷�
//
//	at._name = "����";
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