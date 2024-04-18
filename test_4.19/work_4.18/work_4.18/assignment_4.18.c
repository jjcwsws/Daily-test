#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//int main() {
//    int i, j, n;
//    for (i = 1;i <= 9;i++) 
//    {
//        for (n = 1; n <= 9 - i; n++)
//            printf("        ");
//
//        for (j = 1;j <= i;j++)
//            printf("%d*%d=%2d  ", i, j, i * j);
//
//        printf("\n");
//    }
//    return 0;
//}

//int main() {
//    int i, j;
//    for (i = 1;i <= 9;i++) {
//        for (j = 1;j <= 9;j++) {
//            if (j < i) 
//                printf("        ");
//            else
//                printf("%d*%d=%2d  ", i, j, i * j);
//        }
//        printf("\n");
//    }
//    return 0;
//}

//int main() {
//    int i, j;   
//    for (i = 1;i <= 9;i++) {
//        for (j = 1;j <= 9;j++)
//            printf("%d*%d=%2d\t", i, j, i * j);
//        printf("\n");
//    }
//    return 0;
//}

//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int max = arr[0];
//	int i = 0;
//	for (i = 1; i < 10; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	printf("%d\n", max);
//	return 0;
//}

//int main()
//{
//	double sum1 = 0.0, sum2 = 0.0, sum = 0.0;
//	for (int i = 1; i < 100; i += 2)
//	{
//		sum1 = sum1 + (1.0) / i;
//	}
//	for (int i = 2; i < 101; i += 2)
//	{
//		sum2 = sum2 + (1.0) / i;
//	}
//	sum = sum1 - sum2;
//	printf("%lf\n", sum);
//}

//int main()
//{
//	int n = 0;
//	int count = 0;
//	for (n = 0; n < 101; n++)
//	{
//		if (9 == n % 10 || 9 == n / 10)
//		{
//			printf("%d ", n);
//			count++;
//		}
//	}
//	printf("\n一共出现%d个9\n", count + 1);
//}

//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int key = 0;
//	scanf_s("%d", &key);
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < key)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > key)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了，下标是：%d", mid);
//			break;
//		}
//	}
//	if (left > right)
//
//	{
//		printf("没找到");
//	}
//	return 0;
//}
