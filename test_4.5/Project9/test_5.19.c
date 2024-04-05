#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


//unsigned long pulArray[] = { 6,7,8,9,10 };
//unsigned long* pulPtr;
//pulPtr = pulArray;
//*(pulPtr + 3) += 3;
//printf("%d,%d\n", *pulPtr, *(pulPtr + 3));

//int main()
//{
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	int i = 0;
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + sz - 1 - i));
//	}
//	return 0;
//}

//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		int j = 0;
//
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	for (i = 0; i < line - 1; i++)
//	{
//		int j = 0;
//
//		for (j = 0; j < i + 1; j++)
//		{
//			printf(" ");
//		}
//
//		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <math.h>
//
//int main()
//{
//	int i = 0;
//	for (i = 1;i <= 99999;i++)
//	{
//		int tmp = i;
//		int count = 0;//n
//		int sum = 0;
//
//		while (tmp)
//		{
//			tmp /= 10;
//			count++;
//		}
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow((tmp % 10), count);
//			tmp /= 10;
//		}
//		if (sum == i)
//		{
//			printf("%d是水仙花数\n", i);
//		}
//	}
//	return 0;
//}


//#include<stdlib.h>
//int fun(int n, int a)
//{
//	int num = 0;
//	while (n > 0)
//	{
//		num = num * 10 + a;
//		n--;
//	}
//	return num;
//}
//
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int Sn = 0;
//	for (int i = 1; i <= 5; i++)
//	{
//		Sn = Sn + fun(i, a);
//	}
//	printf("%d\n", Sn);
//	system("pause");
//	return 0;
//}

//struct student
//{
//	int num;
//	char name[32];
//	float score;
//}stu;


//struct S
//{
//	int a;
//	int b;
//};
//int main()
//{
//	struct S a, * p = &a;
//	a.a = 99;
//	printf("%d\n", __________);
//	return 0;
//}

//int main()
//{
//	int money;
//	scanf("%d", &money);
//	int total = 0;
//	int empty = 0;
//	total += money;
//	empty = money;
//	while (empty >= 2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d", total);
//	return 0;
//}