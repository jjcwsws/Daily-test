#define _CRT_SECURE_NO_WARNINGS 1
#include"SList.h"

void TestSList1()
{
	int n;
	printf("请输入链表的长度：");
	scanf("%d", &n);
	printf("\n请依次输入每个节点的值:");
	SLTNode* plist = NULL;

	for (int i = 0; i < n; i++)
	{
		int val;
		scanf("%d", &val);
		SLTNode* newnode = BuySListNode(val);

		// 头插
		newnode->next = plist;
		plist = newnode;
	}

	SLTPrint(plist);

	SLTPushBack(&plist, 10000);
	SLTPrint(plist);
}

void TestSList2()
{
	SLTNode* plist = NULL;
	SLTPushBack(&plist, 1);
	SLTPushBack(&plist, 2);
	SLTPushBack(&plist, 3);
	SLTPushBack(&plist, 4);
	SLTPushBack(&plist, 5);
	SLTPrint(plist);

	SLTPushFront(&plist, 10);
	SLTPushFront(&plist, 20);
	SLTPushFront(&plist, 30);
	SLTPushFront(&plist, 40);
	SLTPrint(plist);
}

void TestSList3()
{
	SLTNode* plist = NULL;
	SLTPushBack(&plist, 1);
	SLTPushBack(&plist, 2);
	SLTPushBack(&plist, 3);
	SLTPushBack(&plist, 4);
	SLTPushBack(&plist, 5);
	SLTPrint(plist);


	SLTPopBack(&plist);
	SLTPrint(plist);

	SLTPopBack(&plist);
	SLTPrint(plist);

	SLTPopBack(&plist);
	SLTPrint(plist);

	SLTPopBack(&plist);
	SLTPrint(plist);

	SLTPopBack(&plist);
	SLTPrint(plist);

	// SLTPopBack(&plist);
	// SLTPrint(plist);
}

void TestSList4()
{
	SLTNode* plist = NULL;
	SLTPushBack(&plist, 1);
	SLTPushBack(&plist, 2);
	SLTPushBack(&plist, 3);
	SLTPushBack(&plist, 4);
	SLTPushBack(&plist, 5);
	SLTPrint(plist);

	SLTPopFront(&plist);
	SLTPrint(plist);

	SLTPopFront(&plist);
	SLTPrint(plist);

	SLTPopFront(&plist);
	SLTPrint(plist);

	SLTPopFront(&plist);
	SLTPrint(plist);

	SLTPopFront(&plist);
	//SLTPopFront(&plist);
	SLTPrint(plist);
}

void TestSList5()
{
	SLTNode* plist = NULL;
	SLTPushBack(&plist, 1);
	SLTPushBack(&plist, 2);
	SLTPushBack(&plist, 3);
	SLTPushBack(&plist, 4);
	SLTPushBack(&plist, 5);
	SLTPrint(plist);

	SLTNode* pos = SLTFind(plist, 40);
	if (pos)
	{
		pos->data *= 10;
	}
	SLTPrint(plist);

	int x;
	scanf("%d", &x);
	pos = SLTFind(plist, x);
	if (pos)
	{
		SLTInsert(&plist, pos, x*10);
	}
	SLTPrint(plist);
}

void TestSList6()
{
	SLTNode* plist = NULL;
	SLTPushBack(&plist, 1);
	SLTPushBack(&plist, 2);
	SLTPushBack(&plist, 3);
	SLTPushBack(&plist, 4);
	SLTPushBack(&plist, 5);
	SLTPrint(plist);

	int x;
	scanf("%d", &x);
	SLTNode* pos = SLTFind(plist, x);
	if (pos)
	{
		SLTInsertAfter(pos, x * 10);
	}
	SLTPrint(plist);
}

void TestSList7()
{
	SLTNode* plist = NULL;
	SLTPushBack(&plist, 1);
	SLTPushBack(&plist, 2);
	SLTPushBack(&plist, 3);
	SLTPushBack(&plist, 4);
	SLTPushBack(&plist, 5);
	SLTPrint(plist);

	int x;
	scanf("%d", &x);
	SLTNode* pos = SLTFind(plist, x);
	if (pos)
	{
		//SLTErase(&plist, pos);
		SLTEraseAfter(pos);
		pos = NULL;
	}
	SLTPrint(plist);

	SLTPopFront(&plist);
	SLTPrint(plist);

	SLTPopFront(&plist);
	SLTPrint(plist);

	SLTPopFront(&plist);
	SLTPrint(plist);

	SLTPopFront(&plist);
	SLTPrint(plist);

}

//int main()
//{
//	TestSList7();
//
//	return 0;
//}

//void Swap1(int* p1, int* p2)
//{
//	int tmp = *p1;
//	*p1 = *p2;
//	*p2 = tmp;
//}
//
//void Swap2(int** pp1, int** pp2)
//{
//	int* tmp = *pp1;
//	*pp1 = *pp2;
//	*pp2 = tmp;
//}
//
//int main()
//{
//	TestSList2();
//
//
//	int a = 0, b = 1;
//	Swap1(&a, &b);
//
//	int* x1 = &a, *x2 = &b;
//	Swap2(&x1, &x2);
//	//Swap1(x1, x2);
//
//
//	return 0;
//}


////////////////////////////////////////////////////////////////////////////////

//Definition for singly-linked list.
struct ListNode {
     int val;
     struct ListNode *next;
};

struct ListNode* removeElements(struct ListNode* head, int val) {
	struct ListNode* prev = NULL, * cur = head;
	while (cur)
	{
		if (cur->val == val)
		{
			// 删除
			if (cur == head) // 头删
			{
				head = cur->next;
				free(cur);
				cur = head;
			}
			else
			{
				prev->next = cur->next;
				free(cur);
				cur = prev->next;
			}
		}
		else
		{
			prev = cur;
			cur = cur->next;
		}
	}

	return head;
}

int main()
{
	struct ListNode* n1 = (struct ListNode*)malloc(sizeof(struct ListNode));
	struct ListNode* n2 = (struct ListNode*)malloc(sizeof(struct ListNode));
	struct ListNode* n3 = (struct ListNode*)malloc(sizeof(struct ListNode));
	struct ListNode* n4 = (struct ListNode*)malloc(sizeof(struct ListNode));

	n1->val = 7;
	n2->val = 7;
	n3->val = 7;
	n4->val = 7;

	n1->next = n2;
	n2->next = n3;
	n3->next = n4;
	n4->next = NULL;

	struct ListNode* head = removeElements(n1, 7);

	return 0;
}