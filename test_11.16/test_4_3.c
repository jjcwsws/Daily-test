#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include <stdio.h>
int main()
{   //7��������������
	int a = 0;
	printf("%d\n", sizeof(int));//4
	printf("%d\n", sizeof(char));//1
	printf("%d\n", sizeof(short));//2
	printf("%d\n", sizeof(float));//4
	printf("%d\n", sizeof(double));//8
	printf("%d\n", sizeof(long));//sizeof(long)>=sizeof(int),32λ��4��64λ��8
	printf("%d\n", sizeof(long long));//8
	return 0;
}
//��ȫ�ֱ����;ֲ�����ͬ��ʱ���ֲ���������
//ȫ�ֱ���
int a = 0;
int main()
{
	int a = 0;//�ֲ�����
	int b = 0, c = 0;
	scanf("%d %d", &b, &c);
	int sum = b + c;
	printf("%d", sum);
	return 0;
}