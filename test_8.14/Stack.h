#pragma once
#include<stdio.h>

namespace bit
{
	typedef struct Stack
	{
		int* a;
		int top;
		int capacity;
	}ST;

	void StackInit(ST* ps, int n = 4)
	{
		ps->a = (int*)malloc(sizeof(int)*n);
		//ps->a = NULL;
		ps->top = 0;
		ps->capacity = 0;
	}

	void StackPush(ST* ps, int x)
	{
		//...
	}
}