#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)

#include "SeqList.h"


void test()
{
	SL s;
	InitSeqList(&s);
	SeqListPushBack(&s, 1);
	SeqListPushBack(&s, 1);
	SeqListPushBack(&s, 1);
	SeqListPrint(&s);
	SeqListDestroy(&s);
}
int main()
{
	test();
	return 0;
}