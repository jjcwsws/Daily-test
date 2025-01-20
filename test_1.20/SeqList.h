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
	int size;//Ԫ�ظ���
	int capacity;//����
}SL;



//��ʼ��
void InitSeqList(SL* s);

//����
void SeqListDestroy(SL* s);

//��ӡ
void SeqListPrint(SL* s);

//β��
void SeqListPushBack(SL* s, SLDataType x);

 //ͷ��
void SeqListPushFront(SL* s, SLDataType x);

//βɾ
void SeqListPopBack(SL* s);

//ͷɾ
void SeqListPopFront(SL* s);

// ˳������
int SeqListFind(SL* s, SLDataType x);

// ˳�����posλ�ò���x
void SeqListInsert(SL* s, int pos, SLDataType x);

// ˳���ɾ��posλ�õ�ֵ
void SeqListErase(SL* s, int pos);