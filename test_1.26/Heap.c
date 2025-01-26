#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "Heap.h"

//�ѵĳ�ʼ��
void HeapInit(Heap* hp)
{
	hp->a = NULL;
	hp->size = 0;
	hp->capacity = 0;
}

//�ѵĹ���
void HeapCreate(Heap* hp, HPDataType* a, int n)
{
	assert(hp);

	hp->a = (HPDataType*)malloc(sizeof(HPDataType) * n);
	if (hp->a == NULL)
	{
		perror("malloc fail");
		exit(-1);
	}
	memcpy(hp->a, a, sizeof(HPDataType) * n);
	int i = 0;
	/*for (i = n-1; i > 0; i++)
	{
		Adjustup(hp->a, i);
	}*/
}

//�ѵ�����
void HeapDestroy(Heap* hp)
{
	assert(hp);
	free(hp->a);
	hp->size = 0;
	hp->capacity = 0;
}


void swap(HPDataType* child, HPDataType* parent)
{
	HPDataType tmp = *child;
	*child = *parent;
	*parent = tmp;
}
void Adjustup(HPDataType* a, int child)
{
	int parent = (child - 1) / 2;
	while (child > 0)
	{
		if (a[child] < a[parent])
		{
			swap(&a[child], &a[parent]);
			child = parent;
			parent = (parent - 1) / 2;
		}
		else
		{
			break;
		}
	}
}

//�ѵò���
void HeapPush(Heap* hp, HPDataType x)
{
	assert(hp);
	assert(hp->a);
	//�������
	if (hp->size == hp->capacity)
	{
		
		hp->capacity = hp->capacity == 0 ? 4 : hp->capacity * 2;
		HPDataType* tmp = (HPDataType*)realloc(hp->a, sizeof(HPDataType) * hp->capacity);
		if (tmp == NULL)
		{
			perror("realloc fail");
			exit(-1);
		}
		hp->a = tmp;
	}
	hp->a[hp->size++] = x;

	//���ϵ���
	Adjustup(hp->a, hp->size-1);
}


//���µ���
Adjustdown(HPDataType* a, int n, int parent)
{
	int child = parent * 2 + 1;
	while (child < n)
	{
		if (child + 1 < n && a[child + 1] < a[child])
		{
			++child;
		}
		if (a[child] < a[parent])
		{
			swap(&a[child], &a[parent]);
			parent = child;
			child = child * 2 + 1;
		}
		else
		{
			break;
		}
	}
}
//�ѵ�ɾ��
void HeapPop(Heap* hp)
{
	assert(hp);
	assert(hp->size > 0);
	swap(&hp->a[0], &hp->a[hp->size - 1]);

	hp->size--;
	//���µ���
	Adjustdown(hp->a, hp->size, 0);

}

//ȡ�Ѷ�������
HPDataType HeapTop(Heap* hp)
{
	assert(hp);
	return hp->a[0];
}

//�ѵ����ݸ���
int HeapSize(Heap* hp)
{
	assert(hp);
	return hp->size;
}

//�ѵ��п�
int HeapEmpty(Heap* hp)
{
	assert(hp);
	return hp->size == 0;
}