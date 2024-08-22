#include<iostream>
using namespace std;

// 抽象类
//class Car
//{
//public:
//	// 纯虚函数
//	virtual void Drive() = 0;
//};
//
//// 间接强制了子类重写虚函数，因为不重写的话，子类依旧是抽象类，不能实例化对象
//class Benz :public Car
//{
//public:
//	virtual void Drive()
//	{
//		cout << "Benz-舒适" << endl;
//	}
//};
//
//class BMW :public Car
//{
//public:
//	virtual void Drive()
//	{
//		cout << "BMW-操控" << endl;
//	}
//};
//
//int main()
//{
//	// 抽象类，实例化不出对象
//	// Car c1;
//	Car* p = new Benz;
//	p->Drive();
//
//	p = new BMW;
//	p->Drive();
//
//	Benz b;
//	b.Drive();
//
//	int i = 1;
//	// 自动识别类型，本质这里是函数重载
//	cout << i;
//	double d = 1.11;
//	cout << d;
//
//	return 0;
//}

//class Base
//{
//public:
//	Base()
//		:_b(2)
//	{
//		//cout << "Base()" << endl;
//	}
//
//	virtual void Func1()
//	{
//		cout << "Base::Func1()" << endl;
//	}
//
//	virtual void Func2()
//	{
//		cout << "Base::Func2()" << endl;
//	}
//
//	void Func3()
//	{
//		cout << "Base::Func3()" << endl;
//	}
//private:
//	int _b = 1;
//};
//
//class Derive : public Base
//{
//public:
//	virtual void Func1()
//	{
//		cout << "Derive::Func1()" << endl;
//	}
//
//	virtual void Func3()
//	{
//		cout << "Derive::Func3()" << endl;
//	}
//private:
//	int _d = 2;
//};
//
typedef void(*VF_PTR)();

// 打印虚表，本质打印指针(虚函数指针)数组
//void PrintVFT(VF_PTR vft[], int n)
//void PrintVFT(VF_PTR vft[])
void PrintVFT(VF_PTR* vft)
{
	for (size_t i = 0; vft[i] != nullptr; i++)
	{
		printf("[%d]:%p->", i, vft[i]);

		VF_PTR f = vft[i];
		f();
		//(*f)();
	}
	cout << endl << endl;
}
//
//int main()
//{
//	Derive d;
//
//	PrintVFT((VF_PTR*)(*((int*)&d)));
//
//	return 0;
//}

//int main()
//{
//	Base b;
//	Base b1;
//	Base b2;
//
//	Derive d;
//
//	int i = 0;
//	static int j = 1;
//	int* p1 = new int;
//	const char* p2 = "xxxxxxxx";
//	printf("栈:%p\n", &i);
//	printf("静态区:%p\n", &j);
//	printf("堆:%p\n", p1);
//	printf("常量区:%p\n", p2);
//
//	Base* p3 = &b;
//	Derive* p4 = &d;
//
//	printf("Base虚表地址:%p\n", *(int*)p3);
//	printf("Base虚表地址:%p\n", *(int*)p4);
//
//	return 0;
//}

//class Base1 {
//public:
//	virtual void func1() { cout << "Base1::func1" << endl; }
//	virtual void func2() { cout << "Base1::func2" << endl; }
//private:
//	int b1;
//};
//
//class Base2 {
//public:
//	virtual void func1() { cout << "Base2::func1" << endl; }
//	virtual void func2() { cout << "Base2::func2" << endl; }
//private:
//	int b2;
//};
//
//class Derive : public Base1, public Base2 {
//public:
//	virtual void func1() { cout << "Derive::func1" << endl; }
//	virtual void func3() { cout << "Derive::func3" << endl; }
//private:
//	int d1;
//};
//
//int main()
//{
//	Derive d;
//	cout << sizeof(d) << endl;
//
//	Base1* ptr1 = &d;
//	Base2* ptr2 = &d;
//
//	PrintVFT((VF_PTR*)(*(int*)ptr1));
//	PrintVFT((VF_PTR*)(*(int*)ptr2));
//
//	return 0;
//}

//class A
//{
//public:
//	virtual void func1()
//	{}
//
//public:
//	int _a;
//};
//
//class B : public A
////class B : virtual public A
//{
//public:
//	virtual void func1()
//	{}
//public:
//	int _b;
//};
//
//class C : public A
////class C : virtual public A
//{
//public:
//	virtual void func1()
//	{}
//public:
//	int _c;
//};
//
//class D : public B, public C
//{
//public:
//	int _d;
//};
//
//int main()
//{
//	D d;
//	d.B::_a = 1;
//	d.C::_a = 2;
//	d._b = 3;
//	d._c = 4;
//	d._d = 5;
//
//	cout << sizeof(d) << endl;
//
//
//	return 0;
//}


//class A
//{
//public:
//	virtual void func1()
//	{}
//
//public:
//	int _a;
//};
//
////class B : public A
//class B : virtual public A
//{
//public:
//	virtual void func1()
//	{}
//
//	virtual void func3()
//	{}
//
//public:
//	int _b;
//};
//
////class C : public A
//class C : virtual public A
//{
//public:
//	virtual void func1()
//	{}
//
//	virtual void func2()
//	{}
//public:
//	int _c;
//};
//
//class D : public B, public C
//{
//public:
//	virtual void func1()
//	{}
//public:
//	int _d;
//};
//
//int main()
//{
//	D d;
//	d.B::_a = 1;
//	d.C::_a = 2;
//	d._b = 3;
//	d._c = 4;
//	d._d = 5;
//
//	cout << sizeof(d) << endl;
//
//	return 0;
//}

class Base
{
public:
	Base()
	{

	}

	inline virtual int Func1()
	{
		//cout << "Base::Func1()" << endl;
		int a = 0;
		int b = 0;
		b += a;
		return b;
	}

	/*virtual static void Func2()
	{
		cout << "Base::Func2()" << endl;
	}*/

	void Func3()
	{
		cout << "Base::Func3()" << endl;
	}
private:
	int _b = 1;
};

class Derive : public Base
{
public:
	inline virtual int func1() 
	{ 
		int a = 10;
		int b = 1;
		b += a;
		return b;
	}
private:
	int d1;
};

int main()
{
	// 多态调用
	Base* p = new Derive;
	p->Func1();

	// 普通调用
	Base b;
	b.Func1();

	return 0;
}