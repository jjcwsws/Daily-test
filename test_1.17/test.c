#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
//��1--����
//#include <stdio.h>
//void FindDigital(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int count = 0;
//		int j = 0;
//		for (j = 0; j < sz; j++)
//		{
//			if (arr[i] == arr[j])
//				count++;
//		}
//		if (count == 1)
//		{
//			printf("%d ", arr[i]);
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	FindDigital(arr, sz);
//
//}
//��2--���
//#include <stdio.h>
//void FindDog(int arr[], int sz, int* dog1, int* dog2)
//{
//	//1.������������
//	int ret = 0;
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		ret^= arr[i];
//	}
//	//2.����������
//	int pos = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((ret >> i) & 1) == 1)
//		{
//			pos = i;//��¼����1��λ��
//			break;
//		}
//	}
//	for (i = 0; i < sz; i++)
//	{
//		if (((arr[i] >> pos) & 1) == 1)
//		{
//			*dog1 ^= arr[i];
//		}
//	}
//	*dog2 = ret ^ *dog1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int dog1 = 0;
//	int dog2 = 0;
//	FindDog(arr, sz, &dog1, &dog2);
//	printf("%d %d", dog1, dog2);
//
//}
// 
// strncpy��ģ��ʵ��
//#include <stdio.h>
//#include <assert.h>
//char* my_strncpy(char* str1, const char* str2, size_t size)
//{
//	char* ret = str1;
//	assert(str1 && str2);
//	while (size && *str2)
//	{
//		
//		*str1 = *str2;
//		str1++;
//		str2++;
//		size--;
//	}
//	if (size != 0)
//	{
//		*str1 = 0;
//	}
//	return ret;
//}
//int main()
//{
//	char str1[10] = { 0 };
//	char str2[10] = "ghijklmn";
//	char* ret = my_strncpy(str1, str2, 6);
//	printf("%s\n", ret);
//	return 0;
//}


//strncat��ģ��ʵ��
//#include <stdio.h>
//#include <assert.h>
//char* my_strncat(char* str1, const char* str2, size_t size)
//{
//	char* ret = str1;
//	assert(str1 && str2);
//	while (*str1)//Ѱ�ҵ�str1��'\0'��λ��
//	{
//		str1++;
//	}
//	while (size && *str2)//���п���
//	{
//
//		*str1 = *str2;
//		str1++;
//		str2++;
//		size--;
//	}
//	*str1 = 0;//ĩβ����һ��'\0'
//	return ret;
//}
//int main()
//{
//	char str1[20] = "abcdef";
//	char str2[10] = "ghijkl";
//	char* ret = my_strncat(str1, str2, 3);
//	printf("%s\n", ret);
//	return 0;
//}
//atoi
//1.���ַ�
//2.�հ��ַ�
//3.+ -

#include <stdio.h>
#include <assert.h>
#include <ctype.h>
#include <limits.h>
enum state
{
	VALID,
	UNVALID
}state = UNVALID;//�ж��Ƿ�Ϸ�����0��һ����־��Ĭ�ϷǷ�
int my_atoi(const char* str)
{
	assert(str);
	//�ж��Ƿ�Ϊ���ַ�
	if (*str == '\0')
	{
		return 0;
	}
	
	
	//�жϿհ��ַ�
	while (isspace(*str))
	{
		str++;
	}
	//����+ -
	int flag = 1;
	if (*str == '+')
	{
		str++;
	}
	else if (*str == '-')
	{
		flag = -1;
		str++;
	}

	long long ret = 0;
	while (*str != '\0')
	{
		if (isdigit(*str))
		{
			ret = ret * 10 + flag*(*str - '0');//ͳ�ƺϷ�����
			if (ret<INT_MIN || ret>INT_MAX)
			{
				return 0;
			}
		}
		else
		{
			return (int)ret;
		}
		str++;
	}
	state = VALID;
	return (int)ret;
}
int main()
{
	int ret = my_atoi(" -123");
	if (state == VALID)
		printf("%d", ret);
	else
		printf("�Ƿ���%d", ret);
	return 0;
}