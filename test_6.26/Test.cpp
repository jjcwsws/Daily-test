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
//	// ������ʾ��дʵ�κ��β�
//	// void Print(Date* const this)
//	void Print()
//	{
//		//this = nullptr;
//		cout << this << endl;
//		// ���ǿ�������������ʾ��ʹ��
//		cout << this->_year << "-" << this->_month << "-" << this->_day << endl;
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//
//private:
//	int _year;     // ��
//	int _month;    // ��
//	int _day;      // ��
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
//	// ��Ա�����ĵ�ַ���ڶ�����
//	// ��Ա�����Ǵ��ڶ�����
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
////	// ���ǳ�ʼ����
////	Date d1;
////	d1.Print();
////
////	Date d2;
////	d2.Init(2022, 7, 6);
////	d2.Print();
////
////	// ���ǳ�ʼ����
////	Stack st;
////	st.Push(1);
////
////	return 0;
////}
//
//int main()
//{
//	// ���ǳ�ʼ����
//	Date d1;
//	d1.Print();
//
//	Date d2;
//	d2.Init(2022, 7, 6);
//	d2.Print();
//
//	// ���ǳ�ʼ����
//	Stack st;
//	st.Push(1);
//
//	return 0;
//}

//class Date
//{
//public:
//	// ���ɺ������أ������޲ε��ô������壬����ͬʱ����
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
//// Date f(); ��������
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
//	// ���ɺ������أ������޲ε��ô������壬����ͬʱ����
//	void Print()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//
//	// Ĭ�����ɵĹ��캯����ɶ�¶��ɣ�
//	// �����Զ��壨��ȥ���������Ա��Ĭ�Ϲ��캯����
//	// �������Ͳ�ȷ��(��������)�����鵱�ɲ�����
//private:
//	// C++11֧�֣�����ʱ��ȱʡֵ
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
//			perror("malloc����ռ�ʧ��!!!");
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
//// ����ջʵ��һ������
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
//	// C++11֧�֣�����ʱ��ȱʡֵ
//	int _year = 1;
//	int _month = 1;
//	int _day = 1;
//};
//
//// 1�����ǲ�д����Ĭ�������Ǹ����캯������Ĭ�Ϲ���
//// 2���޲ι��캯��Ҳ���Խ�Ĭ�Ϲ���
//// 3��ȫȱʡҲ���Խ�Ĭ�Ϲ���
//// ���Բ��������͵��ù��죬�����Խ�Ĭ�Ϲ���
//// ��������������ͬʱ���ڣ�ֻ�ܴ���һ��
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
		// Date�ϸ���˵������Ҫд��������
		cout << "~Date()" << endl;
	}
private:
	// C++11֧�֣�����ʱ��ȱʡֵ
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
			perror("malloc����ռ�ʧ��!!!");
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
	// Ĭ������������������Ϊ����������
	// �������ͳ�Ա��������
	// �Զ������ͳ�Ա��ȥ������������
private:
	Stack _pushst;
	Stack _popst;
	int _size = 1;
};

// 21:17����
int main()
{
	//Date d1;
	//Stack st1;
	MyQueue mq;

	return 0;
}