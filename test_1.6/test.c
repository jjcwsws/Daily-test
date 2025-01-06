#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int int_num(const void*p1,const void*p2)
{
	return (*(int*)p1 - *(int*)p2);
}
void test1()
{
	int arr[] = { 10,9,8,7,6,5,4,3,2,1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(int), int_num);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
struct stu
{
	char name[20];
	int age;
};
int stu_name( const void* p1, const void* p2)
{
	return strcmp(((struct stu*)p1)->name , ((struct stu*)p2)->name);
}

void test2()
{
	struct stu arr[] = { {"zhangshan",18},{"lisi",19},{"wangwu",20} };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(struct stu), stu_name);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%s ", arr[i].name);
	}
	printf("\n");
}
int main()
{
	int input = 0;
	do
	{
		printf("****************************************\n");
		printf("*******0.exit 1.test1() 2.test2()*******\n");
		printf("****************************************\n");
		printf("请选择:");		
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			test1();
			break;
		case 2:
			test2();
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (input);
	return 0;
}
//#include <stdio.h>
////进行每对字节的交换
//void swap(char* p1,char* p2, int size)
//{
//	int i = 0;
//	for (i = 0; i < size; i++)
//	{
//		int temp = *p1;
//		*p1 = *p2;
//		*p2 = temp;
//		p1++;
//		p2++;
//	}
//}
////开发者实现的具体交换
//void bubble_sort(void* base, int num, int size, int (*cmp)(const void*, const void*))
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < num-1; i++)
//	{
//		for (j = 0; j < num - i - 1; j++)
//		{
//			if (cmp((char*)base + j * size, (char*)base + (j + 1) * size) > 0)//回调函数
//			{
//				swap((char*)base + j * size, (char*)base + (j + 1) * size, size);
//			}
//		}
//	}
//}
////用户要实现的交换数据类型
//int int_cmp(const void* p1, const void* p2)
//{
//	return (*(int*)p1 - *(int*)p2);
//}
//void test()
//{
//	int i = 0;
//	int arr[] = { 10,8,7,6,5,4,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz, sizeof(int), int_cmp);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	test();
//	return 0;
//}