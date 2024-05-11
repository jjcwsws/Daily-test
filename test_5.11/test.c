#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//int main()
//{
//	char arr1[] = "hello bit";//源头
//	char arr2[20] = "xxxxxxxxxxxx";//目的地
//	//对于数组，数组名其实是数组第一个元素的地址，也就是起始地址
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//
//	return 0;
//}

//
//int main()
//{
//	char arr[] = "hello bit";
//	memset(arr, 'x', 5);
//	printf("%s\n", arr);
//
//	return 0;
//}
//

//int main()
//{
//	int len = strlen("abcdef");
//	printf("%d\n", len);
//
//	return 0;
//}

//写一个函数可以找出两个整数中的最大值
//
//int get_max(int x, int y)
//{
//	int z = (x > y ? x : y);
//	return z;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	//输入
//	scanf("%d %d", &a, &b);
//	//计算
//	//int m = (a > b ? a : b);
//	//使用函数来完成
//	int m = get_max(a, b);
//	//输出
//	printf("较大值是：%d\n", m);
//
//	return 0;
//}
//

//
//void test()
//{
//	printf("hehe\n");
//}
//
//int main()
//{
//	test();
//	return 0;
//}
//

//写一个函数可以交换两个整形变量的内容。

//形式参数 - 形参
//void Swap(int x, int y)
//{
//	int tmp = x;
//	x = y;
//	y = tmp;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//
//	printf("交换前:a=%d b=%d\n", a, b);
//	//实际参数 - 实参
//	//当实参传递给形参的时候
//	//形参是实参的一份临时拷贝
//	//所以对形参的修改不会影响实参
//	//
//	Swap(a, b);
//	printf("交换后:a=%d b=%d\n", a, b);
//	
//	return 0;
//}

//int main()
//{
//	int num = 10;
//	int* p = &num;
//
//	*p = 20;
//	printf("%d\n", num);
//	return 0;
//}



//形式参数 - 形参
//void Swap(int* pa, int* pb)
//{
//	int tmp = *pa;//tmp = a
//	*pa = *pb;//a = b
//	*pb = tmp;//b = tmp
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//
//	printf("交换前:a=%d b=%d\n", a, b);
//	Swap(&a, &b);
//	printf("交换后:a=%d b=%d\n", a, b);
//	
//	return 0;
//}
//

//int get_max(int x, int y)
//{
//	int z = (x > y ? x : y);
//	return z;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	//输入
//	scanf("%d %d", &a, &b);//3 5
//	//使用函数来完成
//	int m = get_max(a, b);//变量
//
//	//m = get_max(a, 7);//变量，常量
//
//	//m = get_max(a, 2+3);//表达式
//
//	//m = get_max(a, get_max(4, 8));//函数的参数是函数调用
//
//	//输出
//	printf("较大值是：%d\n", m);
//
//	return 0;
//}
//



//形式参数 - 形参
//void Swap1(int x, int y)
//{
//	int tmp = x;
//	x = y;
//	y = tmp;
//}
//
//void Swap2(int* pa, int* pb)
//{
//	int tmp = *pa;//tmp = a
//	*pa = *pb;//a = b
//	*pb = tmp;//b = tmp
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//
//	printf("交换前:a=%d b=%d\n", a, b);
//	Swap1(a, b);
//	printf("交换后:a=%d b=%d\n", a, b);
//
//	printf("交换前:a=%d b=%d\n", a, b);
//	Swap2(&a, &b);
//	printf("交换后:a=%d b=%d\n", a, b);
//	
//	return 0;
//}

//写一个函数可以判断一个数是不是素数
//是素数返回1
//不是素数返回0
//2~sqrt(n)
#include <math.h>

//判断素数
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		if (is_prime(i) == 1)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//
//	printf("\ncount = %d\n", count);
//
//	return 0;
//}

//写一个函数判断一年是不是闰年
//是闰年返回1
//非闰年返回0
//int is_leap_year(int y)
//{
//	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}

//2. 实现函数
//int is_leap_year(int y)
//{
//	return  ((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0);
//}
//
//int main()
//{
//	int y = 0;
//	int count = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		//1. 函数怎么使用
//		//TDD - 测试驱动开发
//		//test driven development
//		//
//		if (is_leap_year(y) == 1)
//		{
//			printf("%d ", y);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//
//	return 0;
//}


//写一个函数，实现一个整形有序数组的二分查找。
int binary_search(int arr[], int k, int sz)
{
	int left = 0;
	int right = sz - 1;

	while (left<=right)
	{
		//int mid = (left + right) / 2;
		int mid = left + (right - left) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	//二分查找
	//找到了：返回下标
	//找不到：返回-1
	int ret = binary_search(arr, k, sz);
	if (ret == -1)
		printf("找不到\n");
	else
		printf("找到了，下标是:%d\n", ret);

	return 0;
}

