#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

typedef int HPDataType;
typedef struct Heap
{
	HPDataType* a;
	int size;
	int capacity;
}Heap;

//堆的初始化
void HeapInit(Heap* hp);

//堆的构建
void HeapCreate(Heap* hp, HPDataType* a, int n);

//堆得销毁
void HeapDestroy(Heap* hp);

//堆得插入
void HeapPush(Heap* hp, HPDataType x);

//堆的删除
void HeapPop(Heap* hp);

//取堆顶的数据
HPDataType HeapTop(Heap* hp);

//堆的数据个数
int HeapSize(Heap* hp);

//堆的判空
int HeapEmpty(Heap* hp);