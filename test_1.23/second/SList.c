#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)

#include "SList.h"

ListNode* BuyListNode(LTDataType x)
{
	ListNode* head = (ListNode*)malloc(sizeof(ListNode));
	if (head == NULL)
	{
		perror("malloc fail");
		exit(-1);
	}
	head->data = x;

	return head;
}

//初始化,创建返回链表的头结点
ListNode* InitListNode()
{
	ListNode* node = (ListNode*)malloc(sizeof(ListNode));
	if (node == NULL)
	{
		perror("malloc fail");
		exit(-1);
	}
	node->next = node;
	node->prev = node;
	node->data = 0;
	return node;
}


//双向链表销毁
void ListDestroy(ListNode* phead)
{
	ListNode* cur = phead->next;
	while (cur != phead)
	{
		ListNode* next = cur->next;
		free(cur);
		cur = next;
	 }
	free(phead);
}

//双向链表打印
void ListPrint(ListNode* phead)
{
	assert(phead);
	ListNode* cur = phead->next;
	printf("phead<=>");
	while (cur != phead)
	{
		printf("%d<=>", cur->data);
		cur = cur->next;
	}
	printf("\n");
}

//双链表尾插

void ListPushBack(ListNode* phead, LTDataType x)
{
	assert(phead);
	/*ListNode* newnode = BuyListNode(x);

	newnode->prev = phead->prev;
	phead->prev->next = newnode;
	newnode->next = phead;
	phead->prev = newnode;*/

	ListInsert(phead, x);
	
}

//双链表尾删
void ListPopBack(ListNode* phead)
{
	assert(phead);
	assert(phead->next != phead);
	/*ListNode* tail = phead->prev;
	
	phead->prev = tail->prev;
	tail->prev->next = tail->next;
	tail->prev = tail;
	tail->next = tail;
	free(tail);*/
	
	ListErase(phead->prev);
}

//双链表头插
void ListPushFront(ListNode* phead, LTDataType x)
{
	assert(phead);
	/*ListNode* newnode = BuyListNode(x);

	phead->next->prev = newnode;
	newnode->next = phead->next;
	phead->next = newnode;
	newnode->prev = phead;*/
	ListInsert(phead->next, x);
}

//双链表头删
void ListPopFront(ListNode* phead)
{
	assert(phead);
	assert(phead->next != phead);
	/*ListNode* head = phead->next;
	
	head->next->prev = phead;
	phead->next = head->next;
	head->prev = head;
	head->next = head;
	free(head);*/
	ListErase(phead->next);
}

//双链表查找
ListNode* ListFind(ListNode* phead, LTDataType x)
{
	assert(phead);
	ListNode* cur = phead->next;
	while (cur != phead)
	{
		if (cur->data == x)
			return cur;
		cur = cur->next;
	}
	
	return NULL;
		
}

//双链表在POS前面进行插入
void ListInsert(ListNode* pos, LTDataType x)
{
	assert(pos);
	ListNode* newnode = BuyListNode(x);
	pos->prev->next = newnode;
	newnode->prev = pos->prev;
	newnode->next = pos;
	pos->prev = newnode;
}

//双链表删除POS位置的结点
void ListErase(ListNode* pos)
{
	assert(pos);
	pos->prev->next = pos->next;
	pos->next->prev = pos->prev;
	pos->prev = pos;
	pos->next = pos;
	free(pos);
}