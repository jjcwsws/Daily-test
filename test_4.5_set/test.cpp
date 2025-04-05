#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<iostream>

#include <set>
using namespace std;
int main() {
	set<int>s;

	for (int i = 0; i < 5; i++)
	{
		int num;
		cin >> num;
		s.insert(num);
	}
	auto it = s.begin();
	while (it != s.end())
	{
		cout << *it << " ";
		it++;
	}

	return 0;
}

