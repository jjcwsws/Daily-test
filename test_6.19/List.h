#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef int LTDataType;
typedef struct ListNode
{
	struct ListNode* next;
	struct ListNode* prev;
	LTDataType data;
}LTNode;

LTNode* BuyLTNode(LTDataType x);
LTNode* LTInit();
void LTPrint(LTNode* phead);
void LTPushBack(LTNode* phead, LTDataType x);
void LTPopBack(LTNode* phead);

void LTPushFront(LTNode* phead, LTDataType x);
void LTPopFront(LTNode* phead);

int LTSize(LTNode* phead);

LTNode* LTFind(LTNode* phead, LTDataType x);

// pos之前插入x
void LTInsert(LTNode* pos, LTDataType x);
// 删除pos位置
void LTErase(LTNode* pos);

