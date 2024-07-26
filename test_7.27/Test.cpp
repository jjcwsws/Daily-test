#include<iostream>
using namespace std;

////class A {
//public:
//	A(const char* s) { cout << s << endl; }
//	~A() {}
//};
//
//class B :virtual public A
//{
//public:
//	B(const char* s1, const char* s2) :A(s1) { cout << s2 << endl; }
//};
//
//class C :virtual public A
//{
//public:
//	C(const char* s1, const char* s2) :A(s1) { cout << s2 << endl; }
//};
//
//class D :public B, public C
//{
//public:
//	D(const char* s1, const char* s2, const char* s3, const char* s4)
//		:B(s1, s2)
//		, C(s1, s3)
//		, A(s1)
//	{
//		cout << s4 << endl;
//	}
//};
//
//int main()
//{
//	D* p = new D("class A", "class B", "class C", "class D");
//
//	delete p;
//
//	return 0;
//}

#include"BinarySearchTree.h"

//int main()
//{
//	BSTree<int> t;
//	int a[] = { 8, 3, 1, 10, 6, 4, 7, 14, 13 };
//	for (auto e : a)
//	{
//		t.Insert(e);
//	}
//
//	t.InOrder();
//
//	t.Erase(8);
//	t.InOrder();
//
//	t.Erase(14);
//	t.InOrder();
//
//	t.Erase(4);
//	t.InOrder();
//
//	t.Erase(6);
//	t.InOrder();
//
//	for (auto e : a)
//	{
//		t.Erase(e);
//		t.InOrder();
//	}
//
//	t.InOrder();
//
//	return 0;
//}

//int main()
//{
//	BSTree<int> t;
//	int a[] = { 8, 3, 1, 10, 6, 4, 7, 14, 13 };
//	for (auto e : a)
//	{
//		t.InsertR(e);
//	}
//
//	t.InOrder();
//
//	t.EraseR(8);
//	t.InOrder();
//
//	t.EraseR(14);
//	t.InOrder();
//
//	t.EraseR(4);
//	t.InOrder();
//
//	t.EraseR(6);
//	t.InOrder();
//
//	for (auto e : a)
//	{
//		t.EraseR(e);
//		t.InOrder();
//	}
//
//	t.InOrder();
//
//	return 0;
//}

//int main()
//{
//	BSTree<int> t;
//	int a[] = { 8, 3, 1, 10, 6, 4, 7, 14, 13 };
//	for (auto e : a)
//	{
//		t.InsertR(e);
//	}
//	t.InOrder();
//
//	BSTree<int> t1(t);
//	t1.InOrder();
//
//	return 0;
//}

//int main()
//{
//	key_value::BSTree<string, string> dict;
//	dict.Insert("sort", "排序");
//	dict.Insert("left", "左边");
//	dict.Insert("right", "右边");
//	dict.Insert("string", "字符串");
//
//	string str;
//	while (cin>>str)
//	{
//		auto ret = dict.Find(str);
//		if(ret)
//		{
//			cout << ret->_value << endl;
//		}
//		else
//		{
//			cout << "无此单词" << endl;
//		}
//	}
//
//	return 0;
//}

int main()
{
	string arr[] = { "苹果", "西瓜", "苹果", "西瓜", "苹果", "苹果", "西瓜",
"苹果", "香蕉", "苹果", "西瓜", "香蕉", "草莓"};
	key_value::BSTree<string, int> t;
	for (auto& e : arr)
	{
		auto ret = t.Find(e);
		if (ret == nullptr)
		{
			// 第一次出现
			t.Insert(e, 1);
		}
		else
		{
			ret->_value++;
		}
	}

	t.InOrder();

	return 0;
}

class Base1 {
public:
	virtual void func1() { cout << "Base1::func1" << endl; }
	virtual void func2() { cout << "Base1::func2" << endl; }
//private:
	int b1;
	int b2;
};

class Base2 {
public:
	virtual void func1() { cout << "Base2::func1" << endl; }
	virtual void func2() { cout << "Base2::func2" << endl; }
//private:
	int b2;
};

class Derive : public Base1, public Base2 {
public:
	virtual void func1() { cout << "Derive::func1" << endl; }
	virtual void func3() { cout << "Derive::func3" << endl; }
//private:
	int d1;
};

typedef void(*VFPTR) ();
void PrintVTable(VFPTR vTable[])
{
	cout << " 虚表地址>" << vTable << endl;
	for (int i = 0; vTable[i] != nullptr; ++i)
	{
		printf(" 第%d个虚函数地址 :0X%x,->", i, vTable[i]);
		VFPTR f = vTable[i];
		f();
	}
	cout << endl;
}

//int main()
//{
//	Derive d;
//	d.b1 = 1;
//	d.b2 = 2;
//	d.d1 = 3;
//
//	VFPTR* vTableb1 = (VFPTR*)(*(int*)&d);
//	PrintVTable(vTableb1);
//	VFPTR* vTableb2 = (VFPTR*)(*(int*)((char*)&d + sizeof(Base1)));
//	PrintVTable(vTableb2);
//
//	return 0;
//}

//int main()
//{
//	Derive d;
//
//	// 多态调用
//	Base1* p1 = &d;
//	p1->func1();
//
//	Base2* p2 = &d;
//	p2->func1();
//
//	return 0;
//}