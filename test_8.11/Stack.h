#pragma once
#include<iostream>
using namespace std;

template<class T>
T Add(const T& left, const T& right);
void func(int a, int b);

// ֱ�Ӷ�����.h ->���õĵط���ֱ�Ӿ��ж��壬ֱ��ʵ����������Ҫ����ʱ��ȥ��
template<class T>
T Add(const T& left, const T& right)
{
	cout << "T Add(const T& left, const T& right)" << endl;

	return left + right;
}