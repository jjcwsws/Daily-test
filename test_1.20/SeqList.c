#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "SeqList.h"



//扩容
void CheckSeqList(SL* s)
{
	if (s->size == s->capacity)
	{
		SLDataType* ps = (SLDataType*)realloc(s->p,sizeof(SLDataType) * (s->capacity*ADD_MAX));
		if (ps = NULL)
		{
			perror("CheckSeqList");
		}
		s->p = ps;
		s->capacity *= ADD_MAX;
	}
}
//初始化
void InitSeqList(SL* s)
{
	assert(s);
	s->p = (SLDataType*)malloc(sizeof(SLDataType) * MAX);
	if (s->p == NULL)
	{
		perror("InitSeqList");
	}
	s->size = 0;
	s->capacity = sizeof(SLDataType)*MAX;
}
//销毁
void SeqListDestroy(SL* s)
{
	assert(s);
	free(s->p);
	s->p = NULL;
	s->size = 0;
	s->capacity = 0;
}

//打印
void SeqListPrint(SL* s)
{
	assert(s);
	int i = 0;
	for (i = 0; i < s->size ; i++)
	{
		printf("%d ", s->p[i]);
	}
	printf("\n");
}

//尾增
void SeqListPushBack(SL* s, SLDataType x)
{
	assert(s);
	CheckSeqList(s);
	s->p[s->size] = x;
	s->size++;
}
//头增
void SeqListPushFront(SL* s, SLDataType x)
{
	assert(s);
	CheckSeqList(s);
	int i = 0;
	for (i = s->size-1; i >=0; i--)
	{
		s->p[i + 1] = s->p[i];
	}
	s->p[0] = x;
	s->size++;
}
 

//尾删
void SeqListPopBack(SL* s)
{
	assert(s);
	s->size--;
}

//头删
void SeqListPopFront(SL* s)
{
	assert(s);
	int i = 0;
	for (i = 0; i < s->size; i++)
	{
		s->p[i] = s->p[i + 1];
	}
	s->size--;
}

// 顺序表查找
int SeqListFind(SL* s, SLDataType x)
{
	int i = 0;
	for (i = 0; i < s->size; i++)
	{
		if (s->p[i] == x)
		{
			printf("%d ", x);
		}
	}
}

// 顺序表在pos位置插入x
void SeqListInsert(SL* s, int pos, SLDataType x)
{
	assert(s);
	if (pos >= 0 && pos < (s->size - 1))
	{
		CheckSeqList(s);
		s->p[pos + 1] = s->p[pos];
		s->p[pos] = x;
		s->size++;
	}
}

// 顺序表删除pos位置的值
void SeqListErase(SL* s, int pos)
{
	assert(s);
	if (pos == 0)
	{
		void SeqListPopFront(SL * s);
	}
	else if (pos == (s->size - 1))
	{
		void SeqListPopBack(SL * s);
	}
	else
	{
		int i = 0;
		for (i = pos; i < s->size; i++)
		{
			s->p[i] = s->p[i + 1];
		}
		s->size--;
	}

}