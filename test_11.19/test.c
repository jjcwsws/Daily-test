#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int ret = 1;
//	for (i = 1; i < 10; i++)
//	{
//		for (j = 1; j <=i; j++)
//		{
//			printf("%d*%d=%-2d ", j, i,i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int i, n, max;
//    scanf("%d", &max);
//    for (i = 1; i < 10; i++)
//    {
//        scanf("%d", &n);
//        if (n > max)
//            max = n;
//    }
//    printf("%d\n", max);
//    return 0;
//}
//#include <stdio.h>
//int  main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag * 1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//
//
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int a = 7;
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]);
	while (left < right)
	{
		int mid = left + (right - left) / 2;
		if (arr[mid] > a)
		{
			right = mid;
		}
		else if (arr[mid] < a)
		{
			left = mid + 1;
		}
		else
		{
			printf("找到了，下标是：%d\n", mid);
			break;
		}
	}
	if (left >= right)
		printf("找不到\n");
	return 0;
}