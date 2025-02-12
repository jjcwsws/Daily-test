#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)

#include "Stack.h"


void Stacktest()
{
	Stack s;
	Stack* st = &s;
	StackInit(st);

	StackPush(st, 1);
	StackPush(st, 2);
	StackPush(st, 3);
	StackPush(st, 4);
	StackPush(st, 5);
	while (!StackEmpty(st))
	{
		printf("%d->", StackTop(st));
		StackPop(st);
	}

	StackDestroy(st);
}

int main()
{
	Stacktest();
	return 0;
}