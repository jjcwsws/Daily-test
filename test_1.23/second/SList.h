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



//初始化
ListNode* InitListNode();

//创建返回链表的头结点
ListNode* ListCreate();

//双向链表销毁
void ListDestroy(ListNode* plist);

//双向链表打印
void ListPrint(ListNode* plist);

//双链表尾插
void ListPushBack(ListNode* plist, LTDataType x);

//双链表尾删
void ListPopBack(ListNode* plist);

//双链表头插
void ListPushFront(ListNode* plist, LTDataType x);

//双链表头删
void ListPopFront(ListNode* plist);

//双链表查找
ListNode* ListFind(ListNode* plist, LTDataType x);

//双链表在POS前面进行插入
void ListInsert(ListNode* pos, LTDataType x);

//双链表删除POS位置的结点
void ListErase(ListNode* pos);