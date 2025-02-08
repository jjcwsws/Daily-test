#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)


#include "sort.h"
#include "Stack.h"

void ArrayPrint(int* a, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}

void swap(int* left, int* right)
{
	int tmp = *left;
	*left = *right;
	*right = tmp;
}

void InsertSort(int* a, int n)
{

	for (int i = 0; i < n - 1; i++)
	{
		int end = i;
		while (end >= 0)
		{
			int tmp = a[end + 1];
			if (a[end] > tmp)
			{
				a[end + 1] = a[end];
			}
			else
			{
				break;
			}
			end--;
			a[end + 1] = tmp;
		}	
	}
}


//希尔排序
void ShellSort(int* a, int n)
{
	//一组一组排
	//int gap = n;
	//while(gap>1)
	//{
	//	gap = gap / 2;
	//  gap = gap / 3 + 1;
	//	//gap组排序
	//	for (int j = 0; j < gap; j++)
	//	{
	//		//一组排序
	//		for (int i = j; i < n - gap; i += gap)
	//		{
	//			int end = i;
	//			while (end >= 0)
	//			{
	//				int tmp = a[end + gap];
	//				if (a[end] > tmp)
	//				{
	//					a[end + gap] = a[end];
	//				}
	//				else
	//				{
	//					break;
	//				}
	//				end -= gap;
	//				a[end + gap] = tmp;
	//			}
	//		}
	//	}
	//}
	
	//多组并排
	int gap = n;
	while (gap > 1)
	{
		gap = gap / 2;
		for (int i = 0; i < n - gap; i++)
		{
			int end = i;
			while (end >= 0)
			{
				int tmp = a[end + gap];
				if (a[end] > tmp)
				{
					a[end + gap] = a[end];
				}
				else
				{
					break;
				}
				end -= gap;
				a[end + gap] = tmp;
			}
		}
	}
}

void SelectSort(int* a, int n)
{
	int begin = 0;
	int end = n - 1;
	while (begin < end)
	{
		int min = begin, max = begin;
		for (int i = begin + 1; i <= end; i++)
		{
			if (a[i] < a[min])
			{
				min = i;
			}

			if (a[i] > a[max])
			{
				max = i;
			}
		}

		swap(&a[begin], &a[min]);
		//如果max 与 begin重合，修正一下
		if (max == begin)
		{
			max = min;
		}
		swap(&a[end], &a[max]);
		begin++;
		end--;
	}
}


void Adjustdown(int* a, int n, int parent)
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

void Heapsort(int* a, int n)
{

	////数组向上调整建大堆
	//int i = 0;
	//for (i = 1; i < n; i++)
	//{
	//	Adjustup(a, i);
	//}

	//数组向下调整建小堆
	int i = 0;
	for (i = (n - 1 - 1) / 2; i >= 0; i--)
	{
		Adjustdown(a, n, i);
	}

	//排序
	int end = n - 1;

	while (end)
	{
		swap(&a[0], &a[end]);
		Adjustdown(a, end, 0);
		--end;
	}
}

//冒泡排序
void BubbleSort(int* a, int n)
{
	for (int i = 0; i < n-1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				swap(&a[j], &a[j + 1]);
			}
		}
	}
}

// 快速排序hoare版本
int PartSort1(int* a, int left, int right)
{
	int key = left;

	while (left < right)
	{
		while (left < right && a[right] >= a[key])
		{
			right--;
		}

		while (left < right && a[left] <= a[key])
		{
			left++;
		}

		swap(&a[left], &a[right]);
	}
	//交换key位置与相遇位置
	swap(&a[key], &a[left]);
	return left;
}

//三数取中
int GetMidi(int* a, int left, int right)
{
	int mid = (left + right) / 2;
	if (a[mid] > a[left])
	{
		if (a[left] > a[right])
			return left;
		else if (a[mid] > a[right])
			return right;
		else
			return mid;
	}
	else
	{
		if (a[mid] > a[right])
			return mid;
		else if (a[left] > a[right])
			return right;
		else;
			return left;
	}
}

// 快速排序挖坑法
int PartSort2(int* a, int left, int right)
{
	int mid = GetMidi(a, left, right);
	swap(&a[mid], &a[left]);
	int key = a[left];
	int hole = left;
	while (left < right)
	{
		while (left < right && a[right] >= key)
		{
			right--;
		}
		a[hole] = a[right];
		hole = right;

		while (left < right && a[left] <= key)
		{
			left++;
		}
		a[hole] = a[left];
		hole = left;
	}
	a[hole] = key;
	return hole;
}


// 快速排序前后指针法
int PartSort3(int* a, int left, int right)
{
	int key = left;
	int prev = left;
	int cur = prev + 1;
	while (cur <= right)
	{
		if (a[cur] < a[key] && ++prev != cur)
		{
			swap(&a[prev], &a[cur]);
		}
		cur++;
	}
	swap(&a[key], &a[prev]);
	return prev;
}

void QuickSort(int* a, int left, int right)
{

	if (left >= right)
		return;
	//小区间优化
	if ((right - left + 1) > 10)
	{
		int keyi = PartSort3(a, left, right);
		QuickSort(a, left, keyi - 1);
		QuickSort(a, keyi + 1, right);
	}
	else
	{
		InsertSort(a + left, right - left);
	}
	
}

// 快速排序 非递归实现
void QuickSortNonR(int* a, int left, int right)
{
	Stack st;
	StackInit(&st);
	StackPush(&st, right);
	StackPush(&st, left);
	while (!StackEmpty(&st))
	{
		left = StackTop(&st);
		StackPop(&st);

		right = StackTop(&st);
		StackPop(&st);

		int key = PartSort1(a, left, right);

		if (key + 1 < right)
		{
			StackPush(&st, right);
			StackPush(&st, key + 1);

		}
		if (left < key - 1)
		{
			StackPush(&st, key - 1);
			StackPush(&st, left);
		}
		
	}
	StackDestroy(&st);

}