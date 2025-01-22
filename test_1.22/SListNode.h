#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


typedef int SLDataType;
typedef struct SListNode
{
	SLDataType data;
	struct SListNode* next;
}SListNode;


//申请动态节点
SListNode* BySListNode();

//打印
void SListPrint(SListNode* plist);

//单链表尾插
void SListPushBack(SListNode** plist, SLDataType x);

//单链表的头插
void SListPushFront(SListNode** plist, SLDataType x);

//单链表的尾删
void SListPopBack(SListNode** plist);


//单链表头删
void SListPopFront(SListNode** plist);

//单链表查找
SListNode* SListFind(SListNode* plist, SLDataType x);

//单链表在POS位置之前插入x
void SListInsertFront(SListNode** plist, SListNode* pos, SLDataType x);

//单链表在POS位置之后插入x
void SListInsrtAfter(SListNode* pos, SLDataType x);

//单链表删除POS位置之前的值
void SListEraseFront(SListNode** plist, SListNode* pos, SLDataType x);

//单链表删除POS位置之后的值
void SListEraseAfter(SListNode* pos, SLDataType x);

// 单链表的销毁
void SListDestroy(SListNode* plist);