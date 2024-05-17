#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int arr1[10];
//	int count = 10;
//	int arr2[count];//常量表达式才可以
//	//VS2019 VS2022 这样的IDE 不支持C99 中的变长数组
//
//	//C99 标准之前 数组的大小只能是常量表达式
//	//C99 标准中引入了：变长数组的概念，使得数组在创建的时候可以使用变量，但是这样的数组不能初始化
//
//	return 0;
//}

//int main()
//{
//	//int arr1[10] = {1,2,3,4,5,6,7,8,9,10};//完全初始化
//	//int arr2[10] = { 1,2,3 };//不完全初始化，剩余的元素默认都是0
//	//int arr3[10] = { 0 };//不完全初始化，剩余的元素默认都是0
//	//int arr4[] = { 0 };//省略数组的大小，数组必须初始化，数组的大小是根据初始化的内容来确定
//	//int arr5[] = { 1,2,3 };
//	//int arr6[];//err
//
//	char arr1[] = "abc";
//	char arr2[] = {'a', 'b', 'c'};
//	char arr3[] = { 'a', 98, 'c' };
//
//
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//              0 1 2 3 4 5 6 7 8 9 
//	//printf("%d\n", arr[5]);//[] 下标引用操作符
//	//printf("%d\n", arr[0]);//[] 下标引用操作符
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//10
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//              0 1 2 3 4 5 6 7 8 9 
//	//printf("%d\n", arr[5]);//[] 下标引用操作符
//	//printf("%d\n", arr[0]);//[] 下标引用操作符
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//10
//	for (i = 0; i < sz; i+=2)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}



//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//              0 1 2 3 4 5 6 7 8 9 
//	//printf("%d\n", arr[5]);//[] 下标引用操作符
//	//printf("%d\n", arr[0]);//[] 下标引用操作符
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//10
//	for (i = sz-1; i >= 0; i--)
//	{
//		printf("%d ", arr[i]);
//	}
//
// 
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//              0 1 2 3 4 5 6 7 8 9 
//	//printf("%d\n", arr[5]);//[] 下标引用操作符
//	//printf("%d\n", arr[0]);//[] 下标引用操作符
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//10
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}
//

//
//int main()
//{
//	int arr[10] = {0};//10 * 4
//	printf("%d\n", sizeof(arr));//40 - 计算的是数组的总大小，单位是字节
//	printf("%d\n", sizeof(arr[0]));//4
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算数组元素个数的方法
//	printf("%d\n", sz);
//
//	return 0;
//}
//


//%p  --  是用来打印地址的
//int main()
//{
//	int arr[10] = { 1,2,3,4,5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d] = %p\n", i, &arr[i]);
//	}
//
//	return 0;
//}


//int main()
//{
//	//数组的创建
//	int arr[4][5];
//	char ch[3][8];
//
//	return 0;
//}
//

//
//int main()
//{
//	//数组的初始化
//	int arr[4][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7},{5,6,7,8,9} };
//	int arr2[4][5] = { {1,2,3 }, {2, 3, 4 }, {3, 4, 5, 6, 7}, {5, 6, 7, 8, 9} };
//	//二维数组即使初始化的了
//	//行是可以省略的，但是列是不能省略的
//	int arr3[][5] = { {1,2,3 }, {2, 3, 4 }, {3, 4, 5, 6, 7}, {5, 6, 7, 8, 9} };
//
//	return 0;
//}
//

//int main()
//{
//	int arr[4][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7},{5,6,7,8,9} };
//	//printf("%d\n", arr[2][3]);
//	int i = 0;
//	//行号
//	for (i = 0; i < 4; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);//0 1 2 3 4
//		}
//		printf("\n");
//	}
//	return 0;
//}
//


//
//int main()
//{
//	int arr[4][5] = { 0 };
//	int i = 0;
//	//行号
//	for (i = 0; i < 4; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("&arr[%d][%d] = %p\n",i,j, &arr[i][j]);
//		}
//	}
//	return 0;
//}
//
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	//0~10
//	//越界访问
//	//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}
//

//输入10个整数，对这组数进行排序
//排序有很多的方法
//1. 冒泡排序
//2. 选择排序
//3. 插入排序
//4. 快速排序
//....

//void bubble_sort(int arr[10])
//{
//
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	//输入
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//排序 - 升序
//	bubble_sort(arr);//让这个函数来完成数组arr中数据的排序
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}


//void bubble_sort(int arr[10], int sz)//这里的arr的本质是指针
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		//一趟每部比较的对数
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				//交换
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}


void bubble_sort(int* arr, int sz)//这里的arr的本质是指针
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		//每一趟开始前就假设已经有序了
		int flag = 1;
		//一趟每部比较的对数
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				//交换
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;
			}
		}

		if (flag == 1)
			break;
	}
}

int main()
{
	int arr[10] = { 0 };
	//输入
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		scanf("%d", &arr[i]);
	}
	//冒泡排序 - 升序
	//趟数
	//arr作为数组进行了传参
	//数组传参，传递的是地址,传递的是首元素的地址
	//
	bubble_sort(arr, sz);//arr 是数组首元素的地址

	//输出
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}





//
//数组名该怎么理解？
//数组名通常情况下就是数组首元素的地址
//但是有2个例外：
//1. sizeof(数组名)，数组名单独放在sizeof()内部，这里的数组名表示整个数组，计算的是整个数组的大小
//2. &数组名，这里的数组名也表示整个数组，这里取出的是整个数组的地址
//除此之外所有遇到的数组名都表示数组首元素的地址
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6 };
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);
//
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//
//	printf("%p\n", &arr);//数组的地址
//	printf("%p\n", &arr+1);//+1，跳过整个数组
//
//	//printf("%d\n", sizeof(arr));
//	return 0;
//}