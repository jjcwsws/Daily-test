#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)

#include "sort.h"




void TestOP()
{
	srand((unsigned int)time(NULL));
	const int N = 1000000;
	int* a1 = (int*)malloc(sizeof(int) * N);
	int* a2 = (int*)malloc(sizeof(int) * N);
	int* a3 = (int*)malloc(sizeof(int) * N);
	int* a4 = (int*)malloc(sizeof(int) * N);
	int* a5 = (int*)malloc(sizeof(int) * N);
	int* a6 = (int*)malloc(sizeof(int) * N);
	//int* a7 = (int*)malloc(sizeof(int) * N);

	for (int i = 0; i < N; ++i)
	{
		a1[i] = rand() + i;
		a2[i] = a1[i];
		a3[i] = a1[i];
		a4[i] = a1[i];
		a5[i] = a1[i];
		a6[i] = a1[i];
		//a7[i] = a1[i];
	}

	int begin1 = clock();//获取时间
	//InsertSort(a1, N);
	int end1 = clock();

	int begin2 = clock();//获取时间
	ShellSort(a2, N);
	int end2 = clock();

	int begin3 = clock();//获取时间
	//SelectSort(a3, N);
	int end3 = clock();

	int begin4 = clock();//获取时间
	Heapsort(a4, N);
	int end4 = clock();

	int begin5 = clock();//获取时间
	//BubbleSort(a5, N);
	int end5 = clock();

	int begin6 = clock();//获取时间
	QuickSort(a6, 0, N-1);
	int end6 = clock();

	int begin7 = clock();//获取时间
	//InsertSort(a1, N);
	int end7 = clock();

	printf("InsertSort:%d\n", end1 - begin1);
	printf("ShellSort:%d\n", end2 - begin2);
	printf("SelectSort:%d\n", end3 - begin3);
	printf("Heapsort:%d\n", end4 - begin4);
	printf("BubbleSort:%d\n", end5 - begin5);
	printf("QuickSort:%d\n", end6 - begin6);
	//printf("InsertSort:%d\n", end1 - begin1);

	free(a1);
	free(a2);
	free(a3);
	free(a4);
	free(a5);
	free(a6);
	//free(a1);

}
int main()
{

	//TestOP();
	int a[] = { 2,6,4,8,7,5,9 };
	//InsertSort(a, sizeof(a) / sizeof(a[0]));
	//ShellSort(a, sizeof(a) / sizeof(a[0]));
	//SelectSort(a, sizeof(a) / sizeof(a[0]));
	//BubbleSort(a, sizeof(a) / sizeof(a[0]));
	//QuickSort(a, 0, sizeof(a) / sizeof(a[0]) - 1);
	QuickSortNonR(a, 0, sizeof(a) / sizeof(a[0]) - 1);

	ArrayPrint(a, sizeof(a) / sizeof(a[0]));
	return 0;
}