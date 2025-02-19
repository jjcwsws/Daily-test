#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)

#include "MyMap.h"
#include "MySet.h"



void TestRBTree()
{
	int a[] = { 16, 3, 7, 11, 9, 26, 18, 14, 15 };
	//int a[] = { 4, 2, 6, 1, 3, 5, 15, 7, 16, 14 };
	bit::Map<int, int> t;
	for (auto e : a)
	{
		t.insert(make_pair(e, e));

	}


}

int main()
{
	return 0;
}