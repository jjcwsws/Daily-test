#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//int main()
//{
//	char arr1[] = "hello bit";//Դͷ
//	char arr2[20] = "xxxxxxxxxxxx";//Ŀ�ĵ�
//	//�������飬��������ʵ�������һ��Ԫ�صĵ�ַ��Ҳ������ʼ��ַ
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

//дһ�����������ҳ����������е����ֵ
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
//	//����
//	scanf("%d %d", &a, &b);
//	//����
//	//int m = (a > b ? a : b);
//	//ʹ�ú��������
//	int m = get_max(a, b);
//	//���
//	printf("�ϴ�ֵ�ǣ�%d\n", m);
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

//дһ���������Խ����������α��������ݡ�

//��ʽ���� - �β�
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
//	printf("����ǰ:a=%d b=%d\n", a, b);
//	//ʵ�ʲ��� - ʵ��
//	//��ʵ�δ��ݸ��βε�ʱ��
//	//�β���ʵ�ε�һ����ʱ����
//	//���Զ��βε��޸Ĳ���Ӱ��ʵ��
//	//
//	Swap(a, b);
//	printf("������:a=%d b=%d\n", a, b);
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



//��ʽ���� - �β�
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
//	printf("����ǰ:a=%d b=%d\n", a, b);
//	Swap(&a, &b);
//	printf("������:a=%d b=%d\n", a, b);
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
//	//����
//	scanf("%d %d", &a, &b);//3 5
//	//ʹ�ú��������
//	int m = get_max(a, b);//����
//
//	//m = get_max(a, 7);//����������
//
//	//m = get_max(a, 2+3);//���ʽ
//
//	//m = get_max(a, get_max(4, 8));//�����Ĳ����Ǻ�������
//
//	//���
//	printf("�ϴ�ֵ�ǣ�%d\n", m);
//
//	return 0;
//}
//



//��ʽ���� - �β�
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
//	printf("����ǰ:a=%d b=%d\n", a, b);
//	Swap1(a, b);
//	printf("������:a=%d b=%d\n", a, b);
//
//	printf("����ǰ:a=%d b=%d\n", a, b);
//	Swap2(&a, &b);
//	printf("������:a=%d b=%d\n", a, b);
//	
//	return 0;
//}

//дһ�����������ж�һ�����ǲ�������
//����������1
//������������0
//2~sqrt(n)
#include <math.h>

//�ж�����
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
//		//�ж�i�Ƿ�Ϊ����
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

//дһ�������ж�һ���ǲ�������
//�����귵��1
//�����귵��0
//int is_leap_year(int y)
//{
//	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}

//2. ʵ�ֺ���
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
//		//1. ������ôʹ��
//		//TDD - ������������
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


//дһ��������ʵ��һ��������������Ķ��ֲ��ҡ�
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
	//���ֲ���
	//�ҵ��ˣ������±�
	//�Ҳ���������-1
	int ret = binary_search(arr, k, sz);
	if (ret == -1)
		printf("�Ҳ���\n");
	else
		printf("�ҵ��ˣ��±���:%d\n", ret);

	return 0;
}

