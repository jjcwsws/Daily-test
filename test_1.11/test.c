#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
//#include <stdio.h>
//#include <assert.h>
//void* my_memcopy(void* str2, const void* str1, size_t num)
//{
//	void* ret = str2;
//	assert(str2 && str1);
//	while (num--)
//	{
//		//完成每一对字节的交换
//		*(char*)str2 = *(char*)str1;
//		str2 = (char*)str2 + 1;
//		str1 = (char*)str1 + 1;
//	}
//	return ret;
//}
//int main()
//{
//	int str1[20] = { 1,2,3,4,5,6,7,8,9,10 };
//	int str2[20] = { 0 };
//	int* pc = (int*)my_memcopy(str2, str1, 40);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", pc[i]);
//	}
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int arr[20] = { 1,2,3,4,5,6,7,8,9,10 };
//	memmove(arr + 2, arr, 20);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//#include <stdio.h>
//#include <assert.h>
//void* my_memmove(void* dest, const void* src, size_t num)
//{
//	assert(dest && src);
//	if (src < dest)
//	{
//		void* ret = src;
//		src = (char*)src + num-1;
//		dest = (char*)dest + num-1;
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			src = (char*)src - 1;
//			dest = (char*)dest - 1;
//		}
//		return ret;
//	}
//	else
//	{
//		void* ret = dest;
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			src = (char*)src + 1;
//			dest = (char*)dest + 1;
//		}
//		return ret;
//	}
//}
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[20] = { 0 };
//	int* pc=(int*)my_memmove(arr1+2 , arr1, 20);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", pc[i]);
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char* str1 = "alfjlkfafj";
//	char* str2 = "alffljaoiogi";
//	int n =memcmp(str1, str2, 8);
//	if (n > 0)
//		printf("str1>str2\n");
//	else if (n < 0)
//		printf("str2<str1\n");
//	else
//		printf("str1=str2\n");
//	return 0;
//}
//#include <stdio.h>
//struct point
//{
//	int x;
//	int y;
//}p1;//声明类型的同时定义变量p1--全局变量
//struct point p2;//定义结构体变量p2
//
////初始化：定义变量的同时赋初值
//struct point p3 = { 3,4 };
//
//struct Stu
//{
//	char name[15];
//	int age;
//};
//struct Stu s = { "zhangsan", 19 };//初始化
//
//struct Node
//{
//	int data;
//	struct point p;//结构体嵌套
//	struct Node* next;
//};
//struct Node n2 = { 20,{5,6},NULL };//结构体嵌套初始化
//int mian()
//{
//	
//	return 0;
//}
#include <stdio.h>
//1
struct s1
{
	char c1;
	int i;
	char c2;
};
//2
struct s2
{
	char c1;
	char c2;
	int i;
};
//3
struct s3
{
	double d;
	char c;
	int i;
};
//4
struct s4
{
	char c1;
	struct s3 x;
	double d;
};
int main()
{
	printf("%d\n", sizeof(struct s1));
	printf("%d\n", sizeof(struct s2));
	printf("%d\n", sizeof(struct s3));
	printf("%d\n", sizeof(struct s4));
	return 0;
}