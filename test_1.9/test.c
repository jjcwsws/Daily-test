#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
//#include <stdio.h>
//void print_arr1(int arr[3][5], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//void print_arr2(int (*arr)[5], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			printf("%d ", (*(arr+i))[j]);//*(arr+i)==arr[i]
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = {1,2,3,4,5,6,7,8,9,10};
//	print_arr1(arr, 3, 5);
//	//数组名arr表示二维数组的首元素地址，
//	//但是二维数组的首元素是二维数组的第一行
//	//所以这里传递的arr，其实相当于第一行的地址，是一维数组的地址，可以用数组指针来接收
//	print_arr2(arr, 3, 5);
//	
//	return 0;
//}
//#include <stdio.h>
//void test(int *arr)//ok?(×)//传过来的是二维数组的首元素的地址即一维数组的地址，而数组的地址要用数组指针来接收(int(*arr)[5])
//{}
//void test(int* arr[5])//ok?(×）//这是一个数组指针
//{}
//void test(int (*arr)[5])//ok?（√）
//{}
//void test2(int** arr)//ok?（×）//这是一个二级指针，用来接收一级指针（int*）
//{}
//int main()
//{
//	int arr[3][5] = {0};
//	test(arr);
//	return 0;
//}
//#include <stdio.h>
//void test(int** ptr)
//{
//
//}
//int main()
//{
//	char c = 'b';
//	char* pc = &c;
//	char** ppc = &pc;
//	char* arr[10];
//	test(&pc);
//	test(ppc);
//	test(arr);
//	return 0;
//}

//#include <stdio.h>
//int add(int a, int b)
//{
//	return a + b;
//}
//int sub(int a, int b)
//{
//	return a - b;
//}
//int mul(int a, int b)
//{
//	return a * b;
//}
//int div(int a, int b)
//{
//	return a / b;
//}
//int main()
//{
//	int x, y;
//	int input = 1;
//	int ret = 0;
//	int (*p[5])(int x, int y) = { 0, add, sub, mul, div };//转移表
//	while (input)
//	{
//		printf("*****************************\n");
//		printf("  1:add              2:sub\n");
//		printf("  3:mul              4:div\n");
//		printf("*****************************\n");
//		printf("请选择：");
//		scanf("%d", &input);
//		if (input <= 4 && input >= 1)
//		{
//			printf("输入操作数:");
//			scanf("%d %d", &x, &y);
//			ret = (*p[input])(x, y);
//		}
//		else
//			printf("输入有误\n");
//		printf("ret=%d\n", ret);
//	}	
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//int int_cmp(const void* p1, const void* p2)
//{
//	return (*(int*)p1 - (*(int*)p2));
//}
//int main()
//{
//	int arr[] = { 1,3,5,7,9,2,4,6,8,0 };
//	int i = 0;
//	qsort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(int), int_cmp);
//	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}
//#include <stdio.h>
//int int_cmp(const void* p1, const void* p2)
//{
//	return (*(int*)p1 - *(int*)p2);
//}
//void swap(char* p1, char* p2, int size)
//{
//	int i = 0;
//	for (i = 0; i < size; i++)
//	{
//		char tmp = *p1;
//		* p1 = *p2;
//		*p2  = tmp;
//		p1++;
//		p2++;
//	}
//}
//void bubble(void* base, int count, int size, int(*cmp)(const void*, const void*))
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < count-1; i++)
//	{
//		for (j = 0; j < count - i - 1; j++)
//		{
//			if (cmp((char*)base + j * size, (char*)base + (j + 1) * size) > 0)
//			{
//				swap((char*)base + j * size, (char*)base + (j + 1) * size, size);
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 1,3,5,7,9,2,4,6,8,0 };
//	int i = 0;
//	bubble(arr, sizeof(arr) / sizeof(arr[0]), sizeof(int), int_cmp);
//	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}
//1.sizeof(数组名),这里的数组名表示整个数组，计算整个数组的大小。
//2.&数组名，这里的数组名表示整个数组，取出的是整个数组的地址。
//3.除此之外所有的数组名都表示首元素的地址。
//4.sizeof计算的是元素类型的大小，若有多个元素，便计算多个元素类型的大小的之和
//5.strlen计算的字符串的个数，接收的是字符串的地址，遇到'\0'便不再统计，且'\0'不统计
#include <stdio.h>
#include <string.h>
int main()
{
	//一维数组
	int a[] = { 1,2,3,4 };
	printf("%d\n", sizeof(a));//a代表整个数组，求的是整个数组的大小，为16字节
	printf("%d\n", sizeof(a+0));//代表首元素地址，本质为指针，大小为4/8个字节
	printf("%d\n", sizeof(*a));//代表元素的大小，即类型的大小，为4个字节
	printf("%d\n", sizeof(a+1));//代表第二个元素的地址，本质为指针，大小为4/8个字节
	printf("%d\n", sizeof(a[1]));//代表第二个元素的大小，即类型的大小，为4个字节
	printf("%d\n", sizeof(&a));//代表整个数组的地址，本质为指针，大小为4/8个字节
	printf("%d\n", sizeof(*&a));//*&a==a,即整个数组的大小，为16字节
	printf("%d\n", sizeof(&a+1));//数组的地址+1，跳过整个数组，虽超出数组的范围，并不影响求大小，本质为指针，大小为4/8个字节
	printf("%d\n", sizeof(&a[0]));//代表首元素地址，本质为指针，大小为4/8个字节
	printf("%d\n", sizeof(&a[0]+1));//首元素的地址+1，为第二个元素的地址，本质为指针，大小为4/8个字节
	//字符数组
	char arr[] = { 'a','b','c','d','e','f' };
	printf("%d\n", sizeof(arr));//整个数组的大小，为6个字节
	printf("%d\n", sizeof(arr + 0));//代表首元素地址，本质为指针，大小为4/8个字节
	printf("%d\n", sizeof(*arr));//代表元素的大小，即元素类型的大小，为1个字节
	printf("%d\n", sizeof(&arr + 1));//数组的地址+1，跳过整个数组，虽超出数组的范围，并不影响求大小，本质为指针，大小为4/8个字节
	printf("%d\n", sizeof(arr[1]));//代表第二个元素所占的大小，即元素类型的大小，为1个字节
	printf("%d\n", sizeof(&arr));//代表整个数组的地址，本质为指针，大小为4/8个字节
	printf("%d\n", sizeof(&arr[0]+1));//首元素的地址+1，为第二个元素的地址，本质为指针，大小为4/8个字节

	printf("%d\n", strlen(arr));//strlen从首元素地址开始搜寻，遇到'\0'停止，而此数组中没有'\0'，为随机值
	printf("%d\n", strlen(arr + 0));//从首元素地址开始搜寻，遇到'\0'停止，而此数组中没有'\0'，为随机值
	printf("%d\n", strlen(*arr));//strlen接收的是一个地址，从所指向的地址开始计算，而*arr代表首元素，故会报错
	printf("%d\n", strlen(&arr + 1));//数组的地址+1，跳过整个数组，从数组+1处的地址开始搜寻，遇到'\0'停止，故为随机值
	printf("%d\n", strlen(arr[1]));//代表第二个元素，报错
	printf("%d\n", strlen(&arr));//代表数组的地址，从此地址开始搜寻，搜索到下个地址时跳过的是整个数组，接着从数组的地址+11处继续搜寻，遇到'\0'停止，故为随机值
	printf("%d\n", strlen(&arr[0] + 1));//代表第二个元素的地址，从第二个元素的地址开始搜寻，遇到'\0'停止，故为随机值

	char arr[] = "abcdef";
	printf("%d\n", sizeof(arr));//计算整个数组的大小，包括'\0',每个元素大小为1个字节，总大小为7个字节
	printf("%d\n", sizeof(arr + 0));//代表首元素地址，本质为指针，为4/8个字节
	printf("%d\n", sizeof(*arr));//代表首元素所占的大小，即元素类型的大小，为1个字节
	printf("%d\n", sizeof(&arr + 1));//数组的地址+1，跳过整个数组，虽超出数组的范围，并不影响求大小，本质为指针，大小为4/8个字节
	printf("%d\n", sizeof(arr[1]));//代表第二个元素的大小，即元素类型的大小，为1个字节
	printf("%d\n", sizeof(&arr));//代表数组的地址，本质为指针，大小为4/8个字节
	printf("%d\n", sizeof(&arr[0] + 1));//代表第二个元素的地址，本质为指针，大小为4/8个字节

	printf("%d\n", strlen(arr));//strlen从首元素地址开始搜寻，遇到'\0'停止，但不计算'\0',大小为6个字节
	printf("%d\n", strlen(arr + 0));//从首元素地址开始搜寻，遇到'\0'停止，大小为6个字节
	printf("%d\n", strlen(*arr));//strlen接收的是一个地址，从所指向的地址开始计算，而*arr代表首元素，故会报错
	printf("%d\n", strlen(&arr + 1));//数组的地址+1，跳过整个数组，从数组+1处的地址开始搜寻，遇到'\0'停止，故为随机值
	printf("%d\n", strlen(arr[1]));//代表第二个元素，并不是一个地址，报错
	printf("%d\n", strlen(&arr));//代表数组的地址，从此地址开始搜寻，搜索到下个地址时跳过的是整个数组，接着从数组的地址+11处继续搜寻，遇到'\0'停止，故为随机值
	printf("%d\n", strlen(&arr[0] + 1));//代表第二个元素的地址，从第二个元素的地址开始搜寻，遇到'\0'停止，大小为5个字节

	char* p = "abcdef";//字符串常量，实际给p的是该字符串的首地址，即p指向a的地址
	printf("%d\n", sizeof(p));//p为指针，大小为4/8个字节
	printf("%d\n", sizeof(p + 1));//代表b元素地址，本质为指针，为4/8个字节
	printf("%d\n", sizeof(*p));//代表首元素所占的大小，即元素类型的大小，为1个字节
	printf("%d\n", sizeof(&p + 1));//p的地址+1，还是地址，本质为指针，大小为4/8个字节
	printf("%d\n", sizeof(p[0]));//p[0]==*(p+0),代表首元素的大小，即元素类型的大小，为1个字节
	printf("%d\n", sizeof(&p));//代表p的地址，本质为指针，大小为4/8个字节
	printf("%d\n", sizeof(&p[0] + 1));//代表第二个元素的地址，本质为指针，大小为4/8个字节

	printf("%d\n", strlen(p));//strlen从首元素地址开始搜寻，遇到'\0'停止，但不计算'\0'，大小为6个字节
	printf("%d\n", strlen(p + 1));//从第二个元素地址开始搜寻，遇到'\0'停止，大小5个字节
	printf("%d\n", strlen(*p));//strlen接收的是一个地址，从所指向的地址开始计算，而*p代表首元素，顾会报错
	printf("%d\n", strlen(&p + 1));//p的地址+1，没有被束缚，为野指针，遇到'\0'停止，故为随机值
	printf("%d\n", strlen(p[0]));//代表首元素，报错
	printf("%d\n", strlen(&p));//代表p的地址，从此地址开始搜寻，搜索到下个地址时为野指针，遇到'\0'停止，故为随机值
	printf("%d\n", strlen(&p[0] + 1));//代表第二个元素的地址，从第二个元素的地址开始搜寻，遇到'\0'停止，大小为5个字节

	//二维数组
	int pa[3][4] = { 0 };
	printf("%d\n", sizeof(pa));//计算整个数组的大小，大小为48个字节
	printf("%d\n", sizeof(pa[0][0]));//代表二维数组第一行第一个元素的大小，即元素类型的大小，大小为4个字节
	printf("%d\n", sizeof(pa[0]));//代表二维数组第一行的数组大小，即一维数组的数组名，大小为16个字节
	printf("%d\n", sizeof(pa[0] + 1));//代表二维数组第一行第二个元素的地址
	printf("%d\n", sizeof(*(pa[0]+1)));//代表二维数组第一行第二个元素的大小，即元素类型的大小，为4个字节
	printf("%d\n", sizeof(pa+1));//代表二维数组第一行数组的地址+1即第二行的数组地址，本质为指针，大小为4/8个字节
	printf("%d\n", sizeof(*(pa + 1)));//代表二维数组第二行数组的地址进行解引用即第二行数组的数组名，大小为16个字节
	printf("%d\n", sizeof(&pa[0] + 1));//代表二维数组第一行数组的地址+1，即第二行数组的地址，本质为指针，大小为4/8个字节
	printf("%d\n", sizeof(*( &pa[0] + 1)));//对第二行数组的地址进行解引用，即第二行数组的数组名，大小为16个字节
	printf("%d\n", sizeof(&pa));//代表二维数组的地址，本质为指针，大小为4/8个字节
	printf("%d\n", sizeof(pa[3]));//超出数组的下标，但本质还是指针，大小为4/8个字节
	return 0;
}