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
//	//������arr��ʾ��ά�������Ԫ�ص�ַ��
//	//���Ƕ�ά�������Ԫ���Ƕ�ά����ĵ�һ��
//	//�������ﴫ�ݵ�arr����ʵ�൱�ڵ�һ�еĵ�ַ����һά����ĵ�ַ������������ָ��������
//	print_arr2(arr, 3, 5);
//	
//	return 0;
//}
//#include <stdio.h>
//void test(int *arr)//ok?(��)//���������Ƕ�ά�������Ԫ�صĵ�ַ��һά����ĵ�ַ��������ĵ�ַҪ������ָ��������(int(*arr)[5])
//{}
//void test(int* arr[5])//ok?(����//����һ������ָ��
//{}
//void test(int (*arr)[5])//ok?���̣�
//{}
//void test2(int** arr)//ok?������//����һ������ָ�룬��������һ��ָ�루int*��
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
//	int (*p[5])(int x, int y) = { 0, add, sub, mul, div };//ת�Ʊ�
//	while (input)
//	{
//		printf("*****************************\n");
//		printf("  1:add              2:sub\n");
//		printf("  3:mul              4:div\n");
//		printf("*****************************\n");
//		printf("��ѡ��");
//		scanf("%d", &input);
//		if (input <= 4 && input >= 1)
//		{
//			printf("���������:");
//			scanf("%d %d", &x, &y);
//			ret = (*p[input])(x, y);
//		}
//		else
//			printf("��������\n");
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
//1.sizeof(������),�������������ʾ�������飬������������Ĵ�С��
//2.&���������������������ʾ�������飬ȡ��������������ĵ�ַ��
//3.����֮�����е�����������ʾ��Ԫ�صĵ�ַ��
//4.sizeof�������Ԫ�����͵Ĵ�С�����ж��Ԫ�أ��������Ԫ�����͵Ĵ�С��֮��
//5.strlen������ַ����ĸ��������յ����ַ����ĵ�ַ������'\0'�㲻��ͳ�ƣ���'\0'��ͳ��
#include <stdio.h>
#include <string.h>
int main()
{
	//һά����
	int a[] = { 1,2,3,4 };
	printf("%d\n", sizeof(a));//a�����������飬�������������Ĵ�С��Ϊ16�ֽ�
	printf("%d\n", sizeof(a+0));//������Ԫ�ص�ַ������Ϊָ�룬��СΪ4/8���ֽ�
	printf("%d\n", sizeof(*a));//����Ԫ�صĴ�С�������͵Ĵ�С��Ϊ4���ֽ�
	printf("%d\n", sizeof(a+1));//����ڶ���Ԫ�صĵ�ַ������Ϊָ�룬��СΪ4/8���ֽ�
	printf("%d\n", sizeof(a[1]));//����ڶ���Ԫ�صĴ�С�������͵Ĵ�С��Ϊ4���ֽ�
	printf("%d\n", sizeof(&a));//������������ĵ�ַ������Ϊָ�룬��СΪ4/8���ֽ�
	printf("%d\n", sizeof(*&a));//*&a==a,����������Ĵ�С��Ϊ16�ֽ�
	printf("%d\n", sizeof(&a+1));//����ĵ�ַ+1�������������飬�䳬������ķ�Χ������Ӱ�����С������Ϊָ�룬��СΪ4/8���ֽ�
	printf("%d\n", sizeof(&a[0]));//������Ԫ�ص�ַ������Ϊָ�룬��СΪ4/8���ֽ�
	printf("%d\n", sizeof(&a[0]+1));//��Ԫ�صĵ�ַ+1��Ϊ�ڶ���Ԫ�صĵ�ַ������Ϊָ�룬��СΪ4/8���ֽ�
	//�ַ�����
	char arr[] = { 'a','b','c','d','e','f' };
	printf("%d\n", sizeof(arr));//��������Ĵ�С��Ϊ6���ֽ�
	printf("%d\n", sizeof(arr + 0));//������Ԫ�ص�ַ������Ϊָ�룬��СΪ4/8���ֽ�
	printf("%d\n", sizeof(*arr));//����Ԫ�صĴ�С����Ԫ�����͵Ĵ�С��Ϊ1���ֽ�
	printf("%d\n", sizeof(&arr + 1));//����ĵ�ַ+1�������������飬�䳬������ķ�Χ������Ӱ�����С������Ϊָ�룬��СΪ4/8���ֽ�
	printf("%d\n", sizeof(arr[1]));//����ڶ���Ԫ����ռ�Ĵ�С����Ԫ�����͵Ĵ�С��Ϊ1���ֽ�
	printf("%d\n", sizeof(&arr));//������������ĵ�ַ������Ϊָ�룬��СΪ4/8���ֽ�
	printf("%d\n", sizeof(&arr[0]+1));//��Ԫ�صĵ�ַ+1��Ϊ�ڶ���Ԫ�صĵ�ַ������Ϊָ�룬��СΪ4/8���ֽ�

	printf("%d\n", strlen(arr));//strlen����Ԫ�ص�ַ��ʼ��Ѱ������'\0'ֹͣ������������û��'\0'��Ϊ���ֵ
	printf("%d\n", strlen(arr + 0));//����Ԫ�ص�ַ��ʼ��Ѱ������'\0'ֹͣ������������û��'\0'��Ϊ���ֵ
	printf("%d\n", strlen(*arr));//strlen���յ���һ����ַ������ָ��ĵ�ַ��ʼ���㣬��*arr������Ԫ�أ��ʻᱨ��
	printf("%d\n", strlen(&arr + 1));//����ĵ�ַ+1�������������飬������+1���ĵ�ַ��ʼ��Ѱ������'\0'ֹͣ����Ϊ���ֵ
	printf("%d\n", strlen(arr[1]));//����ڶ���Ԫ�أ�����
	printf("%d\n", strlen(&arr));//��������ĵ�ַ���Ӵ˵�ַ��ʼ��Ѱ���������¸���ַʱ���������������飬���Ŵ�����ĵ�ַ+11��������Ѱ������'\0'ֹͣ����Ϊ���ֵ
	printf("%d\n", strlen(&arr[0] + 1));//����ڶ���Ԫ�صĵ�ַ���ӵڶ���Ԫ�صĵ�ַ��ʼ��Ѱ������'\0'ֹͣ����Ϊ���ֵ

	char arr[] = "abcdef";
	printf("%d\n", sizeof(arr));//������������Ĵ�С������'\0',ÿ��Ԫ�ش�СΪ1���ֽڣ��ܴ�СΪ7���ֽ�
	printf("%d\n", sizeof(arr + 0));//������Ԫ�ص�ַ������Ϊָ�룬Ϊ4/8���ֽ�
	printf("%d\n", sizeof(*arr));//������Ԫ����ռ�Ĵ�С����Ԫ�����͵Ĵ�С��Ϊ1���ֽ�
	printf("%d\n", sizeof(&arr + 1));//����ĵ�ַ+1�������������飬�䳬������ķ�Χ������Ӱ�����С������Ϊָ�룬��СΪ4/8���ֽ�
	printf("%d\n", sizeof(arr[1]));//����ڶ���Ԫ�صĴ�С����Ԫ�����͵Ĵ�С��Ϊ1���ֽ�
	printf("%d\n", sizeof(&arr));//��������ĵ�ַ������Ϊָ�룬��СΪ4/8���ֽ�
	printf("%d\n", sizeof(&arr[0] + 1));//����ڶ���Ԫ�صĵ�ַ������Ϊָ�룬��СΪ4/8���ֽ�

	printf("%d\n", strlen(arr));//strlen����Ԫ�ص�ַ��ʼ��Ѱ������'\0'ֹͣ����������'\0',��СΪ6���ֽ�
	printf("%d\n", strlen(arr + 0));//����Ԫ�ص�ַ��ʼ��Ѱ������'\0'ֹͣ����СΪ6���ֽ�
	printf("%d\n", strlen(*arr));//strlen���յ���һ����ַ������ָ��ĵ�ַ��ʼ���㣬��*arr������Ԫ�أ��ʻᱨ��
	printf("%d\n", strlen(&arr + 1));//����ĵ�ַ+1�������������飬������+1���ĵ�ַ��ʼ��Ѱ������'\0'ֹͣ����Ϊ���ֵ
	printf("%d\n", strlen(arr[1]));//����ڶ���Ԫ�أ�������һ����ַ������
	printf("%d\n", strlen(&arr));//��������ĵ�ַ���Ӵ˵�ַ��ʼ��Ѱ���������¸���ַʱ���������������飬���Ŵ�����ĵ�ַ+11��������Ѱ������'\0'ֹͣ����Ϊ���ֵ
	printf("%d\n", strlen(&arr[0] + 1));//����ڶ���Ԫ�صĵ�ַ���ӵڶ���Ԫ�صĵ�ַ��ʼ��Ѱ������'\0'ֹͣ����СΪ5���ֽ�

	char* p = "abcdef";//�ַ���������ʵ�ʸ�p���Ǹ��ַ������׵�ַ����pָ��a�ĵ�ַ
	printf("%d\n", sizeof(p));//pΪָ�룬��СΪ4/8���ֽ�
	printf("%d\n", sizeof(p + 1));//����bԪ�ص�ַ������Ϊָ�룬Ϊ4/8���ֽ�
	printf("%d\n", sizeof(*p));//������Ԫ����ռ�Ĵ�С����Ԫ�����͵Ĵ�С��Ϊ1���ֽ�
	printf("%d\n", sizeof(&p + 1));//p�ĵ�ַ+1�����ǵ�ַ������Ϊָ�룬��СΪ4/8���ֽ�
	printf("%d\n", sizeof(p[0]));//p[0]==*(p+0),������Ԫ�صĴ�С����Ԫ�����͵Ĵ�С��Ϊ1���ֽ�
	printf("%d\n", sizeof(&p));//����p�ĵ�ַ������Ϊָ�룬��СΪ4/8���ֽ�
	printf("%d\n", sizeof(&p[0] + 1));//����ڶ���Ԫ�صĵ�ַ������Ϊָ�룬��СΪ4/8���ֽ�

	printf("%d\n", strlen(p));//strlen����Ԫ�ص�ַ��ʼ��Ѱ������'\0'ֹͣ����������'\0'����СΪ6���ֽ�
	printf("%d\n", strlen(p + 1));//�ӵڶ���Ԫ�ص�ַ��ʼ��Ѱ������'\0'ֹͣ����С5���ֽ�
	printf("%d\n", strlen(*p));//strlen���յ���һ����ַ������ָ��ĵ�ַ��ʼ���㣬��*p������Ԫ�أ��˻ᱨ��
	printf("%d\n", strlen(&p + 1));//p�ĵ�ַ+1��û�б�������ΪҰָ�룬����'\0'ֹͣ����Ϊ���ֵ
	printf("%d\n", strlen(p[0]));//������Ԫ�أ�����
	printf("%d\n", strlen(&p));//����p�ĵ�ַ���Ӵ˵�ַ��ʼ��Ѱ���������¸���ַʱΪҰָ�룬����'\0'ֹͣ����Ϊ���ֵ
	printf("%d\n", strlen(&p[0] + 1));//����ڶ���Ԫ�صĵ�ַ���ӵڶ���Ԫ�صĵ�ַ��ʼ��Ѱ������'\0'ֹͣ����СΪ5���ֽ�

	//��ά����
	int pa[3][4] = { 0 };
	printf("%d\n", sizeof(pa));//������������Ĵ�С����СΪ48���ֽ�
	printf("%d\n", sizeof(pa[0][0]));//�����ά�����һ�е�һ��Ԫ�صĴ�С����Ԫ�����͵Ĵ�С����СΪ4���ֽ�
	printf("%d\n", sizeof(pa[0]));//�����ά�����һ�е������С����һά���������������СΪ16���ֽ�
	printf("%d\n", sizeof(pa[0] + 1));//�����ά�����һ�еڶ���Ԫ�صĵ�ַ
	printf("%d\n", sizeof(*(pa[0]+1)));//�����ά�����һ�еڶ���Ԫ�صĴ�С����Ԫ�����͵Ĵ�С��Ϊ4���ֽ�
	printf("%d\n", sizeof(pa+1));//�����ά�����һ������ĵ�ַ+1���ڶ��е������ַ������Ϊָ�룬��СΪ4/8���ֽ�
	printf("%d\n", sizeof(*(pa + 1)));//�����ά����ڶ�������ĵ�ַ���н����ü��ڶ������������������СΪ16���ֽ�
	printf("%d\n", sizeof(&pa[0] + 1));//�����ά�����һ������ĵ�ַ+1�����ڶ�������ĵ�ַ������Ϊָ�룬��СΪ4/8���ֽ�
	printf("%d\n", sizeof(*( &pa[0] + 1)));//�Եڶ�������ĵ�ַ���н����ã����ڶ������������������СΪ16���ֽ�
	printf("%d\n", sizeof(&pa));//�����ά����ĵ�ַ������Ϊָ�룬��СΪ4/8���ֽ�
	printf("%d\n", sizeof(pa[3]));//����������±꣬�����ʻ���ָ�룬��СΪ4/8���ֽ�
	return 0;
}