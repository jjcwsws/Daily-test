#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#define MAX 10
#define ADD_MAX 2
typedef int SLDataType;
typedef struct SeqList
{
	SLDataType* p;
	int size;//元素个数
	int capacity;//容量
}SL;



//初始化
void InitSeqList(SL* s);

//销毁
void SeqListDestroy(SL* s);

//打印
void SeqListPrint(SL* s);

//尾增
void SeqListPushBack(SL* s, SLDataType x);

 //头增
void SeqListPushFront(SL* s, SLDataType x);

//尾删
void SeqListPopBack(SL* s);

//头删
void SeqListPopFront(SL* s);

// 顺序表查找
int SeqListFind(SL* s, SLDataType x);

// 顺序表在pos位置插入x
void SeqListInsert(SL* s, int pos, SLDataType x);

// 顺序表删除pos位置的值
void SeqListErase(SL* s, int pos);