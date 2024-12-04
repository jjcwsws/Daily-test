#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
//输出图形
#include <stdio.h>
//int main() {
//    int a = 0;
//    while (scanf("%d", &a) != EOF)
//    {
//        int i = 0;
//        for (i = 0; i < a; i++)
//        {
//            int j = 0;
//            for (j = 0; j < a; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;//初始化
//	scanf("a=%d b=%d", &a, &b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a=%d b=%d", a, b);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	
//	while (~scanf("%d", &a))
//	{
//		int c = a;
//		int i = 0;
//		int count = 0;
//		for (i = 0; i < 32; i++)
//		{
//
//			int b = a & 1;//与1按二进制位进行比较，相同则为1，不同则为0
//			a = a >> 1;//比较完一次，向右移一位二进制位
//			if (b == 1)
//			{
//				count++;//按位与的结果是1，计数就加1
//			}
//		}
//		printf("%d的二进制位中的1的个数为:%d\n", c, count);
//	}
//	
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int i = 0;
//	while (~scanf("%d", &a))
//	{
//		int a1 = a >> 1;//先移到偶数位
//		int a2 = a;
//		int arr1[16] = { 0 };
//		int arr2[16] = { 0 };
//		for (i = 0; i < 16; i++)
//		{
//			//偶数位
//			arr1[i] = a1 & 1;//按位出来的1或者0存到数组
//			a1 = a1 >> 2;//移到偶数位
//
//			//奇数位
//			arr2[i] = a2 & 1;//按位出来的1或者0存到数组
//			a2 = a2 >> 2;//移到奇数位
//		}
//		printf("偶数位：");
//		for (i = 15; i >= 0; i--)
//		{
//			printf("%d", arr1[i]);
//		}
//		printf("\n奇数位：");
//		for (i = 15; i >= 0; i--)
//		{
//			printf("%d", arr2[i]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
int main()
{
	int a = 0;
	int b = 0;
	while (~scanf("%d%d", &a, &b))
	{
		int i = 0;
		int count = 0;
		int c = a ^ b;
		int d = 0;
		for (i = 0; i < 32; i++)
		{
			d = c & 1;
			c = c >> 1;
			if (d == 1)
				count++;
		}
		printf("两个整数中有%d个二进制位不同\n", count);
	}
    return 0;
}