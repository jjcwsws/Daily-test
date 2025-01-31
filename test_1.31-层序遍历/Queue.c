#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)

#include "Queue.h"

//��ʼ������
void QueueInit(Queue* q)
{
	q->front = NULL;
	q->rear = NULL;
}

//��β�����
void QueuePush(Queue* q, QDataType data)
{
	assert(q);
	QNode* newnode = (QNode*)malloc(sizeof(QNode));
	if (newnode == NULL)
	{
		perror("malloc fail");
		exit(-1);
	}
	if (q->front == NULL)
	{
		q->rear = newnode;
		q->rear->data = data;
		q->front = q->rear;
		q->rear->next = NULL;
	}
	else
	{
		q->rear->next = newnode;
		q->rear = newnode;
		q->rear->data = data;
		q->rear->next = NULL;
	}
	

}

//��ͷ������
void QueuePop(Queue* q)
{
	assert(q);
	assert(q->front);
	QNode* pnext = q->front->next;
	free(q->front);
	q->front = pnext;
}


//��ȡ����ͷ��Ԫ��
QDataType QueueFront(Queue* q)
{
	assert(q);
	assert(q->front);
	return q->front->data;
}

//��ȡ��βԪ��
QDataType QueueBack(Queue* q)
{
	assert(q);
	assert(q->rear);
	return q->rear->data;
}

//��ȡ��������ЧԪ�ظ���
int QueueSize(Queue* q)
{
	assert(q);
	assert(q->front);
	QNode* num = q->front;
	int size = 0;
	while (num)
	{
		size++;
		num = num->next;
	}
	return size;
}


//�������Ƿ�Ϊ�գ����Ϊ�շ��ط�����������ǿշ���0
bool QueueEmpty(Queue* q)
{
	assert(q);
	return q->front == NULL;
}

//���ٶ���
void QueueDestroy(Queue* q)
{
	assert(q);
	//assert(q->front);
	while (q->front)
	{
		QueuePop(q);
	}
	q->rear = NULL;
}