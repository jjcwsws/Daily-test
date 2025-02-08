#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)

#include "Stack.h"

//��ʼ��ջ
void StackInit(Stack* ps)
{
	ps->a = NULL;
	ps->top = 0;
	ps->capacity = 0;
}

//��ջ
void StackPush(Stack* ps, STDataType data)
{
	assert(ps);
	if (ps->top == ps->capacity)
	{
		ps->capacity = ps->capacity == 0 ? 4 : 2 * ps->capacity;
		STDataType* tmp = (STDataType*)realloc(ps->a, sizeof(STDataType) * ps->capacity);
		if (tmp == NULL)
		{
			perror("realloc fail");
			exit(-1);
		}
		ps->a = tmp;
	}
	ps->a[ps->top] = data;
	ps->top++;
}

//��ջ
void StackPop(Stack* ps)
{
	assert(ps->top > 0);
	ps->top--;
}

//��ȡջ��Ԫ��
STDataType StackTop(Stack* ps)
{
	assert(ps->top > 0);
	return ps->a[ps->top-1];
}

//��ȡջ����ЧԪ�ظ���
int StackSize(Stack* ps)
{
	assert(ps);
	return ps->top;
}

//���ջ�Ƿ�Ϊ�գ����Ϊ�շ��ط������������Ϊ�շ���0
bool StackEmpty(Stack* ps)
{
	assert(ps);
	return ps->top == 0;
}

//����ջ
void StackDestroy(Stack* ps)
{
	assert(ps);
	free(ps->a);
	ps->a = NULL;
	ps->top = 0;
	ps->capacity = 0;
}