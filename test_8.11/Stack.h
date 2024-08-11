#pragma once
#include<iostream>
using namespace std;

template<class T>
T Add(const T& left, const T& right);
void func(int a, int b);

// 直接定义在.h ->调用的地方，直接就有定义，直接实例化，不需要链接时再去找
template<class T>
T Add(const T& left, const T& right)
{
	cout << "T Add(const T& left, const T& right)" << endl;

	return left + right;
}