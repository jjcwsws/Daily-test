#define _CRT_SECURE_NO_WARNINGS 1


//int main()
//{
//	char ch = 'w';
//	//ch = 'a';
//
//	char* pc = &ch;//pc就是字符指针
//	*pc = 'a';
//
//	return 0;
//}

#include <stdio.h>

//int main()
//{
//	char arr[] = "abcdef";
//	//[a b c d e f \0]
//
//	const char* p = "abcdef";//常量字符串
//	printf("%s\n", p);//
//	printf("%c\n", *p);//
//
//	return 0;
//}



//#include <stdio.h>
//int main()
//{
//	char str1[] = "hello bit.";
//	char str2[] = "hello bit.";
//
//	const char* str3 = "hello bit.";
//	const char* str4 = "hello bit.";
//
//	if (str1 == str2)
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n");
//
//	if (str3 == str4)
//		printf("str3 and str4 are same\n");
//	else
//		printf("str3 and str4 are not same\n");
//
//	return 0;
//}



//指针数组
//整型数组 - 存放整形的数组
//字符数组 - 存放字符的数组
//指针数组 - 存放指针的数组
//

//int main()
//{
//	int* arr[10];//存放整型指针的数组
//
//	return 0;
//}

//使用指针数组模拟实现二维数组

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };//arr1 - int*
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//
//	//指针数组
//	int* arr[3] = { arr1, arr2, arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//数组名的理解
//数组名是数组首元素的地址
//有2个例外：
//1. sizeof(数组名)，这里的数组名不是数组首元素的地址，数组名表示整个数组，sizeof(数组名)计算的是整个数组的大小，单位是字节
//2. &数组名，这里的数组名表示整个数组， &数组名取出的是整个数组的地址
// 除此之外，所有的地方的数组名都是数组首元素的地址
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);
//	printf("%d\n", sizeof(arr));//4 / 8
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);//
//	printf("%p\n", arr+1);//
//
//	printf("%p\n", &arr[0]);//
//	printf("%p\n", &arr[0]+1);//
//
//	printf("%p\n", &arr);//
//	printf("%p\n", &arr+1);//
//
//	
//	return 0;
//}

//对于数组名来说
//&数组名得到的是数组的地址


//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	//数组的地址，存储到数组指针变量
//	//int[10] *p = &arr;//err
//	int (* p)[10] = &arr;//int(*)[10]
//
//	int* p2 = &arr;//err
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int (*p)[10] = &arr;//*&arr --> arr
//	int i = 0;
//	for (i = 0; i < 10; ++i)
//	{
//		//printf("%d ", *((*p) + i));
//		printf("%d ", (*p)[i]);
//	}
//
//	return 0;
//}

//
//数组指针怎么使用呢？一般在二维数组上才方便
//
//1 2 3 4 5
//2 3 4 5 6
//3 4 5 6 7
//

//二维数组传参，形参是二维数组的形式

//void Print(int arr[3][5], int r, int c)
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5, 2,3,4,5,6, 3,4,5,6,7 };
//	Print(arr, 3, 5);
//
//	return 0;
//}

//二维数组传参，形参是指针的形式
//
//void Print(int (*p)[5], int r, int c)
//{
//	int i = 0;
//	for (i = 0; i < r; i++)
//	{
//		int j = 0;
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", *(*(p + i) + j));
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5, 2,3,4,5,6, 3,4,5,6,7 };
//
//	//arr 是数组名，数组名表示数组首元素的地址
//
//	Print(arr, 3, 5);
//		
//	return 0;
//}
//

//一维数组传参，形参的部分可以是数组，也可以是指针
//void test1(int arr[5], int sz)
//{}
//void test2(int* p, int sz)
//{}
//
//int main()
//{
//	int arr[5] = { 0 };
//	test1(arr, 5);
//	test2(arr, 5);
//	return 0;
//}

//二维数组传参，形参的部分可以是数组，也可以是指针

//void test3(char arr[3][5], int r, int c)
//{}
//
//void test4(char (*p)[5], int r, int c)
//{}
//int main()
//{
//	char arr[3][5] = {0};
//	test3(arr, 3, 5);
//	test4(arr, 3, 5);
//
//	return 0;
//}
//

//函数指针 - 指向函数的指针
//数组指针 - 指向数组的指针

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int arr[10] = {0};
//	int (*pa)[10] = &arr;
//	//printf("%p\n", &Add);
//	//printf("%p\n", Add);
//	//函数名是函数的地址
//	//&函数名也是函数的地址
//
//	int (*pf)(int, int) = &Add;//pf是函数指针变量
//	//int (*)(int, int) 是函数指针类型
//	return 0;
//}



//void test(char* pc, int arr[10])
//{
//
//}
//
//int main()
//{
//	void (*pf)(char *, int [10]) = test;
//
//	return 0;
//}
//


//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	//int (*pf)(int, int) = &Add;
//	int (*pf)(int, int) = Add;
//
//	int r = Add(3, 5);
//	printf("%d\n", r);
//
//	int m = (*pf)(4, 5);
//
//	printf("%d\n", m);
//
//	return 0;
//}


//0 - int
//  - int* 
//0x0012ff40 - int
//           - int*

//void (*p)() -p是函数指针
//void (*)()是函数指针类型
//int main()
//{
//	//调用0地址处的函数
//	//1. 将0强制类型转换为void (*)()  类型的函数指针
//	//2. 调用0地址处的这个函数
//	( *( void (*)() )0 )();
//
//	return 0;
//}
//

//typedef unsigned int uint;
//typedef int* ptr_t;
//
//typedef int(*parr_t)[10];
//typedef int (*pf_t)(int, int) ;


//int main()
//{
//	uint u1;
//	ptr_t p1;
//	int* p2;
//	return 0;
//}


//int main()
//{
//	//signal 是一个函数声明
//	//signal 函数有2个参数，第一个参数的类型是int，第二个参数的类型是 void(*)(int) 函数指针类型
//	//该函数指针指向的函数有一个int类型的参数，返回类型是void
//	//signal 函数的返回类型也是void(*)(int) 函数指针类型,该函数指针指向的函数有一个int类型的参数，返回类型是void
//	//
//	typedef void(*pf_t)(int);
//	pf_t signal(int, pf_t);
//
//	void (* signal(int, void(*)(int) ) )(int);
//
//	return 0;
//}
//

















