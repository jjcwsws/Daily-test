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
//求字符串长度，递归
//int strlen_string(char* arr)
//{
//	if (*arr == '\0')
//		return 0;//遇到字符0，返回0，递归结束
//	else
//		return 1 + strlen_string(arr + 1);//递归调用
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int a=strlen_string(arr);
//	printf("%d", a);
//	return 0;
//}
//非递归
//int strlen_string(char* arr)
//{
//	int count = 0;//判断字符变量
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
// 求n的阶乘
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
// 非递归
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
//打印整数的每一位
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