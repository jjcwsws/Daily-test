#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


typedef int LTDataType;
typedef struct ListNode
{
	LTDataType data;
	struct ListNode* next;
	struct ListNode* prev;
}ListNode;



//��ʼ��
ListNode* InitListNode();

//�������������ͷ���
ListNode* ListCreate();

//˫����������
void ListDestroy(ListNode* plist);

//˫�������ӡ
void ListPrint(ListNode* plist);

//˫����β��
void ListPushBack(ListNode* plist, LTDataType x);

//˫����βɾ
void ListPopBack(ListNode* plist);

//˫����ͷ��
void ListPushFront(ListNode* plist, LTDataType x);

//˫����ͷɾ
void ListPopFront(ListNode* plist);

//˫�������
ListNode* ListFind(ListNode* plist, LTDataType x);

//˫������POSǰ����в���
void ListInsert(ListNode* pos, LTDataType x);

//˫����ɾ��POSλ�õĽ��
void ListErase(ListNode* pos);