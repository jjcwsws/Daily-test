#define _CRT_SECURE_NO_WARNINGS 1


//int main()
//{
//	char ch = 'w';
//	//ch = 'a';
//
//	char* pc = &ch;//pc�����ַ�ָ��
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
//	const char* p = "abcdef";//�����ַ���
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



//ָ������
//�������� - ������ε�����
//�ַ����� - ����ַ�������
//ָ������ - ���ָ�������
//

//int main()
//{
//	int* arr[10];//�������ָ�������
//
//	return 0;
//}

//ʹ��ָ������ģ��ʵ�ֶ�ά����

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };//arr1 - int*
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//
//	//ָ������
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

//�����������
//��������������Ԫ�صĵ�ַ
//��2�����⣺
//1. sizeof(������)�����������������������Ԫ�صĵ�ַ����������ʾ�������飬sizeof(������)���������������Ĵ�С����λ���ֽ�
//2. &���������������������ʾ�������飬 &������ȡ��������������ĵ�ַ
// ����֮�⣬���еĵط�������������������Ԫ�صĵ�ַ
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

//������������˵
//&�������õ���������ĵ�ַ


//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	//����ĵ�ַ���洢������ָ�����
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
//����ָ����ôʹ���أ�һ���ڶ�ά�����ϲŷ���
//
//1 2 3 4 5
//2 3 4 5 6
//3 4 5 6 7
//

//��ά���鴫�Σ��β��Ƕ�ά�������ʽ

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

//��ά���鴫�Σ��β���ָ�����ʽ
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
//	//arr ������������������ʾ������Ԫ�صĵ�ַ
//
//	Print(arr, 3, 5);
//		
//	return 0;
//}
//

//һά���鴫�Σ��βεĲ��ֿ��������飬Ҳ������ָ��
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

//��ά���鴫�Σ��βεĲ��ֿ��������飬Ҳ������ָ��

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

//����ָ�� - ָ������ָ��
//����ָ�� - ָ�������ָ��

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
//	//�������Ǻ����ĵ�ַ
//	//&������Ҳ�Ǻ����ĵ�ַ
//
//	int (*pf)(int, int) = &Add;//pf�Ǻ���ָ�����
//	//int (*)(int, int) �Ǻ���ָ������
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

//void (*p)() -p�Ǻ���ָ��
//void (*)()�Ǻ���ָ������
//int main()
//{
//	//����0��ַ���ĺ���
//	//1. ��0ǿ������ת��Ϊvoid (*)()  ���͵ĺ���ָ��
//	//2. ����0��ַ�����������
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
//	//signal ��һ����������
//	//signal ������2����������һ��������������int���ڶ��������������� void(*)(int) ����ָ������
//	//�ú���ָ��ָ��ĺ�����һ��int���͵Ĳ���������������void
//	//signal �����ķ�������Ҳ��void(*)(int) ����ָ������,�ú���ָ��ָ��ĺ�����һ��int���͵Ĳ���������������void
//	//
//	typedef void(*pf_t)(int);
//	pf_t signal(int, pf_t);
//
//	void (* signal(int, void(*)(int) ) )(int);
//
//	return 0;
//}
//

















