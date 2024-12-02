#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
//#include <stdio.h>
//void Init(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//int main()
//{
//	int arr[10];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Init(arr,sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//#include <stdio.h>
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr,sz);
//	return 0;
//}
//#include <stdio.h>
//void reverse(int arr[5],int sz)
//{
//	int i = 0;
//	int left = 0;
//	int right = sz - 1;
//	while(left<right)
//	{
//		int temp= arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	reverse(arr,sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int flag = 1;
//	int temp = 0;
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("输入十个数:");
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < sz - 1; i++)//遍历sz-1次
//	{
//		for (j = 0; j < sz - i - 1; j++)//每次遍历循环比较sz-i-1次
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				temp = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = temp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)//比较之后值不变说明此时是有序的
//			break;
//	}
//	printf("从小到大的排序:");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}