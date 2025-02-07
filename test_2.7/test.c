#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)

#include "sort.h"




//void TestOP()
//{
//	srand((unsigned int)time(NULL));
//	const int N = 10000;
//	int* a1 = (int*)malloc(sizeof(int) * N);
//	int* a2 = (int*)malloc(sizeof(int) * N);
//	int* a3 = (int*)malloc(sizeof(int) * N);
//	int* a4 = (int*)malloc(sizeof(int) * N);
//	int* a5 = (int*)malloc(sizeof(int) * N);
//	int* a6 = (int*)malloc(sizeof(int) * N);
//	int* a7 = (int*)malloc(sizeof(int) * N);
//
//	for (int i = 0; i < N; ++i)
//	{
//		a1[i] = rand();
//		a2[i] = a1[i];
//		a3[i] = a1[i];
//		a4[i] = a1[i];
//		a5[i] = a1[i];
//		a6[i] = a1[i];
//		a7[i] = a1[i];
//	}
//
//	int begin1 = clock();//获取时间
//	InsertSort(a1, N);
//	int end1 = clock();
//
//	int begin2 = clock();//获取时间
//	InsertSort(a1, N);
//	int end1 = clock();
//
//	int begin1 = clock();//获取时间
//	InsertSort(a1, N);
//	int end1 = clock();
//
//	int begin1 = clock();//获取时间
//	InsertSort(a1, N);
//	int end1 = clock();
//
//	int begin1 = clock();//获取时间
//	InsertSort(a1, N);
//	int end1 = clock();
//
//	int begin1 = clock();//获取时间
//	InsertSort(a1, N);
//	int end1 = clock();
//
//	int begin1 = clock();//获取时间
//	InsertSort(a1, N);
//	int end1 = clock();
//
//
//}
int main()
{

	//TestOP();
	int a[] = { 2,6,4,8,7,5,9 };
	//InsertSort(a, sizeof(a) / sizeof(a[0]));
	//ShellSort(a, sizeof(a) / sizeof(a[0]));
	SelectSort(a, sizeof(a) / sizeof(a[0]));
	ArrayPrint(a, sizeof(a) / sizeof(a[0]));
	return 0;
}