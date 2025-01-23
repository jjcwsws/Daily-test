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

//��ʼ��,�������������ͷ���
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


//˫����������
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

//˫�������ӡ
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

//˫����β��

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

//˫����βɾ
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

//˫����ͷ��
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

//˫����ͷɾ
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

//˫�������
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

//˫������POSǰ����в���
void ListInsert(ListNode* pos, LTDataType x)
{
	assert(pos);
	ListNode* newnode = BuyListNode(x);
	pos->prev->next = newnode;
	newnode->prev = pos->prev;
	newnode->next = pos;
	pos->prev = newnode;
}

//˫����ɾ��POSλ�õĽ��
void ListErase(ListNode* pos)
{
	assert(pos);
	pos->prev->next = pos->next;
	pos->next->prev = pos->prev;
	pos->prev = pos;
	pos->next = pos;
	free(pos);
}