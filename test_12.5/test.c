#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include <stdio.h>
//������Ƕ�׵���
//int Add_1(int x, int y)
//{
//	return x + y;//��ֵ���ظ�����Add_1
//}
//int Add(int x, int y)
//{
//	return Add_1(x, y);//������Add_1��ֵ���ظ�Add
//}
//int main()
//{
//	int a = 2;
//	int b = 3;
//	int c=Add(a,b);
//	printf("%d", c);
//	return 0;
//
//��ʽ����
//int main()
//{
//	int a = 2;
//	printf("%d ", printf("%d ", printf("%d ", a)));//printf�ķ���ֵ������Ļ�ϴ�ӡ���ַ��ĸ���
//	return 0;
//}
//void print(int x)
//{
//	if (x > 9)
//	{
//		print(x / 10);
//	}
//	printf("%d ", x % 10);
//}
//int main()
//{
//	int num = 1234;
//	print(num);
//	return 0;
//}
//int mul(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * mul(n - 1);
//}
//int main()
//{
//	//n�Ľ׳�
//	int n = 0;
//	scnaf("%d", &n);
//	int a=mul(n);
//	printf("%d", a);
//	
//	return 0;
//}
//int fin(int x)
//{
//	if (x <= 2)
//		return 1;
//	else
//		return fib(x - 2) + fib(x - 1);
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int b = fib(a);
//	printf("%d", b);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int sum = 0;
//	while (a > 1)
//	{
//		sum *= a;
//		a -= 1;
//	}
//	printf("%d", sum);
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	int sum = 0;
//
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n -= 1;
//
//	}
//	printf("%d", c);
//	return 0;
//}
//���ͼ��
#include <stdio.h>
int main()
{
    int a = 0;
    while (~scanf("%d", &a))
    {
        int i = 0;
        for (i = 0; i < a; i++)//������
        {
            int j = 0;
            for (j = 0; j <= i; j++)//������
            {
                printf("* ");
            }
            printf("\n");
        }
    }
    return 0;
}