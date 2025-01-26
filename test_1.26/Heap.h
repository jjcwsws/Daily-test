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

//�ѵĳ�ʼ��
void HeapInit(Heap* hp);

//�ѵĹ���
void HeapCreate(Heap* hp, HPDataType* a, int n);

//�ѵ�����
void HeapDestroy(Heap* hp);

//�ѵò���
void HeapPush(Heap* hp, HPDataType x);

//�ѵ�ɾ��
void HeapPop(Heap* hp);

//ȡ�Ѷ�������
HPDataType HeapTop(Heap* hp);

//�ѵ����ݸ���
int HeapSize(Heap* hp);

//�ѵ��п�
int HeapEmpty(Heap* hp);