#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

// ��̬˳���
//#define N 1000
//typedef int SLDataType;
//
//struct SeqList
//{
//	SLDataType a[N];
//	int size;
//};


// ��̬˳���
typedef int SLDataType;

typedef struct SeqList
{
	SLDataType* a;
	int size;        // �洢��Ч���ݸ���
	int capacity;    // �ռ��С
}SL;

// �������� -- ��ɾ���
void SLInit(SL* ps);
void SLDestroy(SL* ps);
void SLPrint(SL* ps);
void SLCheckCapacity(SL* ps);

// ͷ��ͷɾ β��βɾ
void SLPushBack(SL* ps, SLDataType x);
void SLPopBack(SL* ps);
void SLPushFront(SL* ps, SLDataType x);
void SLPopFront(SL* ps);

// �����±꣬û���Ҵ򷵻�-1
int SLFind(SL* ps, SLDataType x);

// ��posλ�ò���x
void SLInsert(SL* ps, int pos, SLDataType x);
// ɾ��posλ�õ�ֵ
void SLErase(SL* ps, int pos);

void SLModify(SL* ps, int pos, SLDataType x);





