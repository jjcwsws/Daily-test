#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
//法1--遍历
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
//法2--异或法
//#include <stdio.h>
//void FindDog(int arr[], int sz, int* dog1, int* dog2)
//{
//	//1.异或出两个单身狗
//	int ret = 0;
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		ret^= arr[i];
//	}
//	//2.将单身狗分组
//	int pos = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((ret >> i) & 1) == 1)
//		{
//			pos = i;//记录出现1的位置
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
// strncpy的模拟实现
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


//strncat的模拟实现
//#include <stdio.h>
//#include <assert.h>
//char* my_strncat(char* str1, const char* str2, size_t size)
//{
//	char* ret = str1;
//	assert(str1 && str2);
//	while (*str1)//寻找到str1中'\0'的位置
//	{
//		str1++;
//	}
//	while (size && *str2)//进行拷贝
//	{
//
//		*str1 = *str2;
//		str1++;
//		str2++;
//		size--;
//	}
//	*str1 = 0;//末尾拷贝一个'\0'
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
//1.空字符
//2.空白字符
//3.+ -

#include <stdio.h>
#include <assert.h>
#include <ctype.h>
#include <limits.h>
enum state
{
	VALID,
	UNVALID
}state = UNVALID;//判断是否合法化的0的一个标志，默认非法
int my_atoi(const char* str)
{
	assert(str);
	//判断是否为空字符
	if (*str == '\0')
	{
		return 0;
	}
	
	
	//判断空白字符
	while (isspace(*str))
	{
		str++;
	}
	//跳过+ -
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
			ret = ret * 10 + flag*(*str - '0');//统计合法数字
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
		printf("非法：%d", ret);
	return 0;
}