#include<iostream>
#include<list>
#include<vector>
#include<algorithm>
#include<unordered_map>
#include<map>
using namespace std;

#include"List.h"
#include"vector.h"

//int main()
//{
//	list<int> lt;
//	lt.push_back(1);
//	lt.push_back(2);
//	lt.push_back(3);
//	lt.push_back(4);
//	lt.push_back(5);
//
//	list<int>::iterator it = lt.begin();
//	while (it != lt.end())
//	{
//		*it += 10;
//
//		cout << *it << " ";
//		++it;
//	}
//	cout << endl;
//
//	for (auto e : lt)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	lt.reverse();
//	for (auto e : lt)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	return 0;
//}

void test_op1()
{
	srand(time(0));
	const int N = 1000000;

	list<int> lt1;
	list<int> lt2;

	vector<int> v;

	for (int i = 0; i < N; ++i)
	{
		auto e = rand();
		lt1.push_back(e);
		v.push_back(e);
	}

	int begin1 = clock();
	// 排序
	sort(v.begin(), v.end());
	int end1 = clock();

	int begin2 = clock();
	lt1.sort();
	int end2 = clock();

	printf("vector sort:%d\n", end1 - begin1);
	printf("list sort:%d\n", end2 - begin2);
}

void test_op2()
{
	srand(time(0));
	const int N = 1000000;

	list<int> lt1;
	list<int> lt2;

	for (int i = 0; i < N; ++i)
	{
		auto e = rand();
		lt1.push_back(e);
		lt2.push_back(e);
	}

	int begin1 = clock();
	// 拷贝vector

	vector<int> v(lt2.begin(), lt2.end());
	// 排序
	sort(v.begin(), v.end());

	// 拷贝回lt2
	lt2.assign(v.begin(), v.end());

	int end1 = clock();

	int begin2 = clock();
	lt1.sort();
	int end2 = clock();

	printf("list copy vector sort copy list sort:%d\n", end1 - begin1);
	printf("list sort:%d\n", end2 - begin2);
}

//int main()
//{
//	list<int> lt;
//	lt.push_back(1);
//	lt.push_back(4);
//	lt.push_back(2);
//	lt.push_back(2);
//	lt.push_back(2);
//	lt.push_back(2);
//	lt.push_back(4);
//	lt.push_back(3);
//
//	lt.push_back(5);
//
//	for (auto e : lt)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	lt.sort();
//	lt.unique();
//	for (auto e : lt)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	//sort(lt.begin(), lt.end());
//	test_op2();
//
//	return 0;
//}

//int main()
//{
//	// LRU
//	list<int> lt;
//	lt.push_back(1);
//	lt.push_back(2);
//	lt.push_back(3);
//	lt.push_back(4);
//	lt.push_back(5);
//
//	for (auto e : lt)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	// 把2转移最后的位置去
//	lt.splice(lt.end(), lt, find(lt.begin(), lt.end(), 2));
//
//	for (auto e : lt)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	return 0;
//}

//struct AA
//{
//	int _a1;
//	int _a2;
//
//	AA(int a1 = 1, int a2 = 1)
//		:_a1(a1)
//		,_a2(a2)
//	{}
//};

//int main()
//{
//	list<AA> lt;
//	AA aa1;
//	lt.push_back(aa1);
//
//	lt.push_back(AA());
//
//	AA aa2(2,2);
//	lt.push_back(aa2);
//
//	lt.push_back(AA(2, 2));
//
//	list<AA>::iterator it = lt.begin();
//	while (it != lt.end())
//	{
//		cout << (*it)._a1 << ":" << (*it)._a2 << endl;
//		cout << it->_a1 << ":" << it->_a2 << endl;
//
//		++it;
//	}
//	cout << endl;
//}

//int main()
//{
//	//bit::test_list5();
//
//	/*bit::list<int> lt;
//	lt.push_back(1);
//	lt.push_back(2);
//
//	lt.func();*/
//
//	return 0;
//}

//int main()
//{
//	bit::list<int> lt;
//	lt.push_back(1);
//	lt.push_back(2);
//	lt.push_back(3);
//	lt.push_back(4);
//
//	bit::list<int>::reverse_iterator rit = lt.rbegin();
//	while (rit != lt.rend())
//	{
//		cout << *rit << " ";
//		++rit;
//	}
//	cout << endl;
//
//	return 0;
//}

//int main()
//{
//	bit::vector<int> v;
//	v.push_back(1);
//	v.push_back(2);
//	v.push_back(3);
//	v.push_back(4);
//
//	bit::vector<int>::reverse_iterator rit = v.rbegin();
//	while (rit != v.rend())
//	{
//		*rit += 5;
//		cout << *rit << " ";
//		++rit;
//	}
//	cout << endl;
//
//	bit::vector<int>::iterator it = v.begin();
//	while (it != v.end())
//	{
//		*it -= 5;
//
//		cout << *it << " ";
//		++it;
//	}
//	cout << endl;
//
//	return 0;
//}

//#define N 20
//
//template<class T>
//class Stack
//{
//private:
//	T _a[N];
//	int _top;
//};
//
//int main()
//{
//	Stack<int> st1;  // 10
//	Stack<int> st2;  // 20
//
//	return 0;
//}

// 非类型模板参数，只能是整形常量
//template<class T, size_t N, double X>
template<class T, size_t N>
class Stack
{
public:
	void func()
	{
		//++N;
	}
private:
	T _a[N];
	int _top;
};

int main()
{
	//Stack<int, 10, 1.1> st1;  // 10
	//Stack<int, 20, 2.2> st2;  // 20

	//Stack<int, 10> st1;  // 10
	//Stack<int, 20> st2;  // 20

	//st1.func();

	return 0;
}
