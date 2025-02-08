#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)

#include "Stack.h"

//初始化栈
void StackInit(Stack* ps)
{
	ps->a = NULL;
	ps->top = 0;
	ps->capacity = 0;
}

//入栈
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

//出栈
void StackPop(Stack* ps)
{
	assert(ps->top > 0);
	ps->top--;
}

//获取栈顶元素
STDataType StackTop(Stack* ps)
{
	assert(ps->top > 0);
	return ps->a[ps->top-1];
}

//获取栈中有效元素个数
int StackSize(Stack* ps)
{
	assert(ps);
	return ps->top;
}

//检测栈是否为空，如果为空返回非零结果，如果不为空返回0
bool StackEmpty(Stack* ps)
{
	assert(ps);
	return ps->top == 0;
}

//销毁栈
void StackDestroy(Stack* ps)
{
	assert(ps);
	free(ps->a);
	ps->a = NULL;
	ps->top = 0;
	ps->capacity = 0;
}