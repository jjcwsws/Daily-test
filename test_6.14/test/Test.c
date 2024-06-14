#include<stdio.h>

#include"SeqList.h"

//long long Fac(size_t N)
//{
//	if (0 == N)
//		return 1;
//
//	return Fac(N - 1) * N;
//}
//
//long long Fib(size_t N)
//{
//	if (N < 3)
//		return 1;
//
//	return Fib(N - 1) + Fib(N - 2);
//}
//
//void Func1()
//{
//	int a = 0;
//	printf("%p\n", &a);
//}
//
//void Func2()
//{
//	int x = 0;
//	int b = 1;
//	printf("%p\n", &b);
//	printf("%p\n", &x);
//}
//
//
//int main()
//{
//	//Fac(10000);
//	//Fib(5);
//
//	Func1();
//	Func2();
//
//
//	return 0;
//}

void TestSeqList1()
{
	SL sl;
	SLInit(&sl);
	SLPushBack(&sl, 1);
	SLPushBack(&sl, 2);
	SLPushBack(&sl, 3);
	SLPushBack(&sl, 4);
	SLPushBack(&sl, 5);
	SLPushBack(&sl, 6);
	SLPushBack(&sl, 6);
	SLPushBack(&sl, 0);
	SLPushBack(&sl, 0);
	SLPrint(&sl);

	SLPopBack(&sl);
	SLPopBack(&sl);
	SLPrint(&sl);

	SLPopBack(&sl);
	SLPopBack(&sl);
	SLPopBack(&sl);
	SLPopBack(&sl);
	SLPopBack(&sl);
	SLPopBack(&sl);
	SLPopBack(&sl);
	//SLPopBack(&sl);
	//SLPopBack(&sl);
	/*SLPopBack(&sl);
	SLPopBack(&sl);
	SLPopBack(&sl);
	SLPopBack(&sl);*/
	SLPrint(&sl);

	SLPushBack(&sl, 1);
	SLPushBack(&sl, 2);
	SLPrint(&sl);

	SLDestroy(&sl);
}

void TestSeqList2()
{
	SL sl;
	SLInit(&sl);
	SLPushBack(&sl, 1);
	SLPushBack(&sl, 2);
	SLPushBack(&sl, 3);
	SLPushBack(&sl, 4);
	SLPushBack(&sl, 5);
	SLPrint(&sl);

	SLPushFront(&sl, 10);
	SLPushFront(&sl, 20);
	SLPushFront(&sl, 30);
	SLPushFront(&sl, 40);
	SLPrint(&sl);
}

int main()
{
	TestSeqList2();

	return 0;
}

//int* p1 = (int*)malloc(12);

//int* p2 = realloc(p1, 200);

//printf("%p, %p\n", p1, p2);

