#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>


typedef int SLTDataType;

typedef struct SListNode
{
	SLTDataType data;
	struct SListNode* next;
}SLTNode;

void SLTPrint(SLTNode* phead);

SLTNode* BuySListNode(SLTDataType x);
void SLTPushBack(SLTNode** pphead, SLTDataType x);
//SLTNode* SLTPushBack(SLTNode* phead, SLTDataType x);

void SLTPushFront(SLTNode** pphead, SLTDataType x);

void SLTPopBack(SLTNode** pphead);
void SLTPopFront(SLTNode** pphead);

// 作业
SLTNode* SLTFind(SLTNode* phead, SLTDataType x);

// 在pos之前插入x
void SLTInsert(SLTNode** pphead, SLTNode* pos, SLTDataType x);

// 在pos以后插入x
void SLTInsertAfter(SLTNode* pos, SLTDataType x);

// 删除pos位置
void SLTErase(SLTNode** pphead, SLTNode* pos);

// 删除pos的后一个位置
void SLTEraseAfter(SLTNode* pos);