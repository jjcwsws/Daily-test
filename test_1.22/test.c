#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "SListNode.h"


//void SListTest()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int i = 0;
//	SListNode* plist = NULL;
//	printf("请输入插入的数字:");
//	for (i = 0; i < a; i++)
//	{
//		int x = 0;	
//		scanf("%d", &x);
//		SListNode* NewNode = BySListNode(x);
//		//头插
//		NewNode->next = plist;
//		plist = NewNode;
//	}
//	SListPrint(plist);
//}
//void SListTest1()
//{
//
//
//	int i = 0;
//	SListNode* plist = NULL;
//	//SListPushBack(&plist, 1);//传地址过去，因为要改变的是实参plist
//	//SListPushBack(&plist, 2);
//	//SListPushBack(&plist, 3);
//	//SListPushBack(&plist, 4);
//
//	//SListPrint(plist);
//
//	SListPushFront(&plist, 1);
//	SListPushFront(&plist, 2);
//	SListPushFront(&plist, 3);
//	SListPushFront(&plist, 4);
//	SListPrint(plist);
//}

//void SListTest2()
//{
//
//
//	int i = 0;
//	SListNode* plist = NULL;
//	//SListPushBack(&plist, 1);//传地址过去，因为要改变的是实参plist
//	//SListPushBack(&plist, 2);
//	//SListPushBack(&plist, 3);
//	//SListPushBack(&plist, 4);
//
//	//SListPrint(plist);
//
//	SListPushFront(&plist, 1);
//	SListPushFront(&plist, 2);
//	SListPushFront(&plist, 3);
//	SListPushFront(&plist, 4);
//	SListPrint(plist);
//
//	printf("\n");
//	SListPopBack(&plist);
//	SListPopFront(&plist);
//	SListPrint(plist);
//}


//void SListTest3()
//{
//
//
//	int i = 0;
//	SListNode* plist = NULL;
//	
//
//	SListPushFront(&plist, 1);
//	SListPushFront(&plist, 2);
//	SListPushFront(&plist, 3);
//	SListPushFront(&plist, 4);
//	SListPrint(plist);
//
//	SListNode* cur = SListFind(plist, 40);
//
//	if (cur)
//	{
//		printf("\n%d\n", cur->data);
//	}
//	else
//	{
//		printf("\n没有此数\n");
//	}
//}

void SListTest4()
{


	int i = 0;
	SListNode* plist = NULL;

	SListPushBack(&plist, 1);
	SListPushBack(&plist, 2);
	SListPushBack(&plist, 3);
	SListPushBack(&plist, 4);
	SListPrint(plist);
	printf("\n");

	SListNode* cur = SListFind(plist, 3);//找到要查找的位置

	if (cur)
	{
		
		//SListInsertFront(&plist,cur, 2);//对要查找的位置进行前插
		//SListInsrtAfter(cur, 2);
		//SListEraseFront(&plist, cur, 2);
		SListEraseAfter(cur, 3);
		SListPrint(plist);
	}
	else
	{
		printf("\n没有此数\n");
	}
}
int main()
{
	SListTest4();
	return 0;
}