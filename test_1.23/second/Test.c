#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)

#include "SList.h"


void Test()
{
	ListNode* plist = InitListNode();;
	
	ListPushBack(plist, 1);
	ListPushBack(plist, 2);
	ListPushBack(plist, 3);
	ListPushBack(plist, 4);
	ListPrint(plist);
	/*ListPopBack(plist);
	ListPopBack(plist);
	ListPopBack(plist);
	ListPopBack(plist);*/
	/*ListPushFront(plist, 5);
	ListPushFront(plist, 6);
	ListPushFront(plist, 7);
	ListPushFront(plist, 8);*/
	/*ListPrint(plist);*/
	/*ListPopFront(plist);
	ListPopFront(plist);
	ListPopFront(plist);
	ListPopFront(plist);
	ListPrint(plist);*/
	
	ListPushFront(plist, 2);
	ListPrint(plist);
}
int main()
{
	Test();
	return 0;
}