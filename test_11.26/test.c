#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include <stdio.h>
//void reverse_string(char* arr)
//{
//	int len = strlen(arr);
//	char p = *arr;
//	*arr = *(arr + len - 1);
//
//	*(arr + len - 1) = '\0';
//	if (strlen(arr + 1) >= 2)
//		reverse_string(arr + 1);
//
//	*(arr + len - 1) = p;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	
//	reverse_string(arr);
//	return 0;
//}
//���ַ������ȣ��ݹ�
//int strlen_string(char* arr)
//{
//	if (*arr == '\0')
//		return 0;//�����ַ�0������0���ݹ����
//	else
//		return 1 + strlen_string(arr + 1);//�ݹ����
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int a=strlen_string(arr);
//	printf("%d", a);
//	return 0;
//}
//�ǵݹ�
//int strlen_string(char* arr)
//{
//	int count = 0;//�ж��ַ�����
//	while (1)
//	{
//		if (*arr != '\0')
//		{		
//			count++;
//			arr++;
//		}
//		else
//			break;
//	}
//	return count;
//	
//}
// ��n�Ľ׳�
// int fac(int n)
//{
//	if (n == 0)
//		return 1;
//	else
//		return n * fac(n - 1);
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int b = fac(a);
//	printf("%d", b);
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdefg";
//	int a = strlen_string(arr);
//	printf("%d", a);
//	return 0;
//}
// �ǵݹ�
//int fac(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	return ret;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int b = fac(a);
//	printf("%d", b);
//	return 0;
//}
//��ӡ������ÿһλ
void fun(int n)
{
	if (n / 10 == 0)
		printf("%d ", n);
	else
	{
		fun(n / 10);
		printf("%d ", n%10);
	}
}
int main()
{
	int a = 0;
	scanf("%d", &a);
    fun(a);
	return 0;
}