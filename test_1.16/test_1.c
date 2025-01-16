#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int* ptr = NULL;
//	ptr = (int*)malloc(num * sizeof(int));
//	if (NULL != ptr)
//	{
//		int i = 0;
//		for (i = 0; i < num; i++)
//		{
//			*(ptr + i) = 0;
//		}
//	}
//	free(ptr);//释放ptr所指向的动态内存
//	ptr = NULL;//释放空间后需要手动置为空指针
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int* ptr = (int*)calloc(10, sizeof(int));
//	if (NULL != ptr)
//	{
//		;
//	}
//	free(ptr);//释放ptr所指向的动态内存
//	ptr = NULL;//释放空间后需要手动置为空指针
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int* ptr = (int*)malloc(100);
//	if (NULL != ptr)
//	{
//		
//	}
//	else
//	{
//		perror("ptr");
//	}
//	//扩展容量
//	ptr = (int*)realloc(ptr, 1000);
//
//	int* p = NULL;
//	//p = realloc(ptr, 1000);
//	p = realloc(ptr, 10000);
//	if (p != NULL)
//	{
//		ptr = p;
//	}
//	free(ptr);
//	ptr = NULL;
//	return 0;
//}
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//int flobalVar = 1;
//static int staticGlobalVar = 1;
//void Test(void)
//{
//	static int staticVar = 1;
//	int localVar = 1;
//	int num1[10] = { 1,2,3,4 };
//
//	char char2[] = "abcd";
//	char* pChar3 = "abcd";
//
//	int* ptr1 = (int*)malloc(sizeof(int)*4);
//	int* ptr2 = (int*)calloc(4,sizeof(int));
//	int* ptr3 = (int*)realloc(ptr2, sizeof(int)*4);
//
//	
//	free(ptr1);
//	free(ptr2);
//	free(ptr3);
//	
//}
typedef struct st_type
{
	int i;
	int* p_a;
}type_a;
int main()
{
	type_a* p = (type_a*)malloc(sizeof(type_a));
	p->i = 100;
	
	if (p == NULL)
	{
		perror("p");
	}
	p->p_a = (int*)malloc(p->i * sizeof(int));
	if (p->p_a == NULL)
	{
		perror("p->p_a");
	}
	int i = 0;
	for (i = 0; i < 100; i++)
	{
		p->p_a[i] = i;
	}
	free(p->p_a);
	p->p_a = NULL;
	free(p);
	p = NULL;
	return 0;
}