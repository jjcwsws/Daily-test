#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
//���ͼ��
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
//	int b = 0;//��ʼ��
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
//			int b = a & 1;//��1��������λ���бȽϣ���ͬ��Ϊ1����ͬ��Ϊ0
//			a = a >> 1;//�Ƚ���һ�Σ�������һλ������λ
//			if (b == 1)
//			{
//				count++;//��λ��Ľ����1�������ͼ�1
//			}
//		}
//		printf("%d�Ķ�����λ�е�1�ĸ���Ϊ:%d\n", c, count);
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
//		int a1 = a >> 1;//���Ƶ�ż��λ
//		int a2 = a;
//		int arr1[16] = { 0 };
//		int arr2[16] = { 0 };
//		for (i = 0; i < 16; i++)
//		{
//			//ż��λ
//			arr1[i] = a1 & 1;//��λ������1����0�浽����
//			a1 = a1 >> 2;//�Ƶ�ż��λ
//
//			//����λ
//			arr2[i] = a2 & 1;//��λ������1����0�浽����
//			a2 = a2 >> 2;//�Ƶ�����λ
//		}
//		printf("ż��λ��");
//		for (i = 15; i >= 0; i--)
//		{
//			printf("%d", arr1[i]);
//		}
//		printf("\n����λ��");
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
		printf("������������%d��������λ��ͬ\n", count);
	}
    return 0;
}