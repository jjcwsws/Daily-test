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


//���붯̬�ڵ�
SListNode* BySListNode();

//��ӡ
void SListPrint(SListNode* plist);

//������β��
void SListPushBack(SListNode** plist, SLDataType x);

//�������ͷ��
void SListPushFront(SListNode** plist, SLDataType x);

//�������βɾ
void SListPopBack(SListNode** plist);


//������ͷɾ
void SListPopFront(SListNode** plist);

//���������
SListNode* SListFind(SListNode* plist, SLDataType x);

//��������POSλ��֮ǰ����x
void SListInsertFront(SListNode** plist, SListNode* pos, SLDataType x);

//��������POSλ��֮�����x
void SListInsrtAfter(SListNode* pos, SLDataType x);

//������ɾ��POSλ��֮ǰ��ֵ
void SListEraseFront(SListNode** plist, SListNode* pos, SLDataType x);

//������ɾ��POSλ��֮���ֵ
void SListEraseAfter(SListNode* pos, SLDataType x);

// �����������
void SListDestroy(SListNode* plist);