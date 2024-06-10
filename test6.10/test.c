#define _CRT_SECURE_NO_WARNINGS 1


//int main()
//{
//	int a = 10;//变量
//	int arr[10];//数组
//
//	return 0;
//}
#include <stdio.h>
#include <stdlib.h>

//int main()
//{
//	//int arr[10];
//	int* p = (int*)malloc(40);
//
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	//开辟成功
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//
//	free(p);
//	p = NULL;
//
//
//	//int a = 10;
//	//int* ptr = &a;
//	//free(ptr);//err
//	return 0;
//}


//int main()
//{
//	int* p = (int*)calloc(INT_MAX, sizeof(int));
//	if (p == NULL)
//	{
//		perror("calloc");
//		return 1;
//	}
//	//打印数据
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", p[i]);
//	}
//	//释放
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	//初始化为1~10
//	int i = 0;
//	for (i = 0; i < 10; i++) 
//	{
//		p[i] = i + 1;
//	}
//	//增加一些空间
//	int* ptr = (int*)realloc(p, 8000);
//	if (ptr != NULL)
//	{
//		p = ptr;
//		ptr = NULL;
//	}
//	else
//	{
//		perror("realloc");
//		return 1;
//	}
//	//打印数据
//	for (i = 0; i < 20; i++)
//	{
//		printf("%d\n", p[i]);
//	}
//	//释放
//	free(p);
//	p = NULL;
//
//	return 0;
//}
//

//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	int i = 0;
//	//对动态开辟空间的越界访问
//	for (i = 0; i < 20; i++)
//	{
//		p[i] = i;//越界访问
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//3. 对非动态开辟内存使用free释放

//int main()
//{
//	int a = 10;
//	int* p = &a;
//	printf("%d\n", *p);
//	//
//	free(p);
//	p = NULL;
//
//	return 0;
//}


//4. 使用free释放一块动态开辟内存的一部分
//
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		*p = i;
//		p++;
//	}
//	//释放
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//5. 对同一块动态内存多次释放

//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 1;
//	}
//	//使用
//
//	free(p);
//	p = NULL;
//
//	free(p);
//	return 0;
//}


void test()
{
	int* p = (int*)malloc(100);
	if (NULL != p)
	{
		*p = 20;
	}
}

int main()
{
	test();
	//
	while (1);

	return 0;
}

