#include"List.h"

void TestList1()
{
	LTNode* plist = LTInit();
	LTPushBack(plist, 1);
	LTPushBack(plist, 2);
	LTPushBack(plist, 3);
	LTPushBack(plist, 4);
	LTPushBack(plist, 5);
	LTPrint(plist);

	LTPushFront(plist, 10);
	LTPushBack(plist, 10);

	LTPrint(plist);
}

void TestList2()
{
	LTNode* plist = LTInit();
	LTPushBack(plist, 1);
	LTPushBack(plist, 2);
	LTPushBack(plist, 3);
	LTPushBack(plist, 4);
	LTPushBack(plist, 5);
	LTPrint(plist);

	LTPopBack(plist);
	LTPopFront(plist);
	LTPrint(plist);

	LTPopFront(plist);
	LTPopFront(plist);
	LTPopFront(plist);
	//LTPopFront(plist);
	LTPrint(plist);
}

void TestList3()
{
	LTNode* plist = LTInit();
	LTPushBack(plist, 1);
	LTPushBack(plist, 2);
	LTPushBack(plist, 3);
	LTPushBack(plist, 4);
	LTPushBack(plist, 5);
	LTPrint(plist);

	LTPushFront(plist, 10);
	LTPushFront(plist, 20);
	LTPushFront(plist, 30);
	LTPushFront(plist, 40);
	LTPrint(plist);
}

void TestList4()
{
	LTNode* plist = LTInit();
	LTPushBack(plist, 1);
	LTPushBack(plist, 2);
	LTPushBack(plist, 3);
	LTPushBack(plist, 4);
	LTPushBack(plist, 5);
	LTPrint(plist);

	LTPopFront(plist);
	LTPrint(plist);

	LTPopBack(plist);
	LTPrint(plist);
}

int main()
{
	TestList4();

	return 0;
}