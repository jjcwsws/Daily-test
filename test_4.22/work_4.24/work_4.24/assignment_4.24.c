#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//
//void print_table(int n)
//{
//	int i = 0, j = 0;
//	for (i = 1; i <= n; i++)
//	{
//		
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%2d ", j, i, i * j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int i = 0, j = 0, ret = 0;
//	int n = 0;
//	scanf("%d", &n);
//	print_table(n);
//	return 0;
//}

//int main()
//{
//    int y = 0;
//    for (y = 100; y <= 200; y++)
//    {
//        int n = 0;
//        int flag = 1;
//        for (n = 2; n < y; n++)
//        {
//            if (y % n == 0)
//            {
//                flag = 0;
//                break;
//            }
//        }
//        if (flag == 1)
//        {
//            printf("%d ", y);
//        }
//    }
//    return 0;
//}

//#include<math.h>
//is_prim(int n)
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
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prim(i) == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//void swap(int* a, int* b)
//{
//	int temp;
//	temp = *a;
//	*a = *b;
//	*b = temp;
//}
//void main()
//{
//	int x, y;
//	printf("����������ֵ��");
//	scanf("%d %d", &x, &y);
//	printf("����ǰ��x=%d,y=%d\n", x, y);
//	swap(&x, &y);
//	printf("������x=%d,y=%d\n", x, y);
//}
//
//
//
//int leap_year(int year)
//
//{
//
//	if ((year % 4 == 0 && year / 100 != 0) || (year % 400 == 0))
//
//	{
//
//		return 1;
//
//	}
//
//	else
//
//	{
//
//		return 0;
//
//	}
//
//}
//
//int main()
//
//{
//
//	int year;
//
//	int ret = 0;
//
//	printf("���������:");
//
//	scanf("%d", &year);
//
//	ret = leap_year(year);
//
//	if (ret == 1)
//
//	{
//
//		printf("%d��������\n", year);
//
//	}
//
//	else
//
//	{
//
//		printf("%d�������\n", year);
//
//	}
//
//	return 0;
//
//}