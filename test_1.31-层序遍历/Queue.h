#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>


typedef struct BinaryTreeNode* QDataType;
typedef struct QListNode
{
	struct QListNode* next;
	QDataType data;
}QNode;

//���еĽṹ
typedef struct Queue
{
	QNode* front;
	QNode* rear;
}Queue;

//��ʼ������
void QueueInit(Queue* q);

//��β�����
void QueuePush(Queue* q, QDataType data);

//��ͷ������
void QueuePop(Queue* q);

//��ȡ����ͷ��Ԫ��
QDataType QueueFront(Queue* q);

//��ȡ��βԪ��
QDataType QueueBack(Queue* q);

//��ȡ��������ЧԪ�ظ���
int QueueSize(Queue* q);

//�������Ƿ�Ϊ�գ����Ϊ�շ����棬����ǿշ��ؼ�
bool QueueEmpty(Queue* q);

//���ٶ���
void QueueDestroy(Queue* q);