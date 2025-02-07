#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)


#include "sort.h"

void ArrayPrint(int* a, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}

void Swap(int* left, int* right)
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


//ϣ������
void ShellSort(int* a, int n)
{
	//һ��һ����
	//int gap = n;
	//while(gap>1)
	//{
	//	gap = gap / 2;
	//  gap = gap / 3 + 1;
	//	//gap������
	//	for (int j = 0; j < gap; j++)
	//	{
	//		//һ������
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
	
	//���鲢��
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

		Swap(&a[begin], &a[min]);
		//���max �� begin�غϣ�����һ��
		if (max == begin)
		{
			max = min;
		}
		Swap(&a[end], &a[max]);
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

	////�������ϵ��������
	//int i = 0;
	//for (i = 1; i < n; i++)
	//{
	//	Adjustup(a, i);
	//}

	//�������µ�����С��
	int i = 0;
	for (i = (n - 1 - 1) / 2; i >= 0; i--)
	{
		Adjustdown(a, n, i);
	}

	//����
	int end = n - 1;

	while (end)
	{
		swap(&a[0], &a[end]);
		Adjustdown(a, end, 0);
		--end;
	}
}