#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int i = 0;
//	int b = 0;
//	int flag = 1;
//	scanf("%d", &a);
//	int arr[51] = { 0 };
//	for (i = 0; i < a; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	scanf("%d", &b);
//	for (i = 0; i < a; i++)
//	{
//		if (b > arr[i])
//		{
//			printf("%d ", arr[i]);
//		}
//		else if (b < arr[i] && flag==1)
//		{
//			printf("%d ", b);
//			for (i = i; i < a; i++)
//			{
//				printf("%d ", arr[i]);
//			}
//			flag++;
//			break;
//		}
//	}
//	if (flag == 1)
//	{
//		printf("%d ", b);
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	int arr1[] = { 2,3,4,5,6 };
//	int arr2[] = { 3,4,5,6,7 };
//	int* p[] = { arr,arr1,arr2 };
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("p[0][%d]=%d==arr[%d]=%d==*(p[0]+%d)=%d\n", i,p[0][i], i,arr[i],i,*(p[0]+i));
//	}
//	return 0;
//}
//#include <stdio.h>
//int main() {
//    int i = 0;
//    int a = 0;
//    while (~scanf("%d", &a))
//    {
//        for (i = 0; i < a; i++)
//        {
//            int j = 0;
//            for (j = 0; j <= a - i; j++)//控制列，每行打印多少*
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//        for (i = 0; i < a + 1; i++)
//        {
//            int j = 0;
//            for (j = 0; j <= i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}