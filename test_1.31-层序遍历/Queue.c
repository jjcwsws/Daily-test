#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)

#include "Queue.h"

//初始化队列
void QueueInit(Queue* q)
{
	q->front = NULL;
	q->rear = NULL;
}

//队尾入队列
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

//队头出队列
void QueuePop(Queue* q)
{
	assert(q);
	assert(q->front);
	QNode* pnext = q->front->next;
	free(q->front);
	q->front = pnext;
}


//获取队列头部元素
QDataType QueueFront(Queue* q)
{
	assert(q);
	assert(q->front);
	return q->front->data;
}

//获取队尾元素
QDataType QueueBack(Queue* q)
{
	assert(q);
	assert(q->rear);
	return q->rear->data;
}

//获取队列中有效元素个数
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


//检测队列是否为空，如果为空返回非零结果，如果非空返回0
bool QueueEmpty(Queue* q)
{
	assert(q);
	return q->front == NULL;
}

//销毁队列
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