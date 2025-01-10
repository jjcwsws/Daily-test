#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
//#include <stdio.h>
//#include <assert.h>
//char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1 && str2);//断言str1和str2是否为空指针
//	char* cp = (char*)str1;
//	char* sstr1 ;
//	char* sstr2 ;
//	//*str2为'\0'返回str1的地址
//	if (!*str2)
//		return (char*)str1;
//	while(*cp)
//	{
//		int count = 0;
//		sstr1 = cp;
//		sstr2 = (char*)str2;
//		while (sstr1 && sstr2 && *sstr1++ == *sstr2++)
//		{
//			;
//		}
//		if (!*sstr2)
//			return cp;
//		cp++;
//	}
//	return NULL;
//}
//int main()
//{
//	char str[] = "This is a simple string";
//	char* pch = my_strstr(str, "simple");	
//	puts(pch);
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char str[] = "zyifan@shuai.net#566&520";
//	char sep[] = "@.# & ";//分隔符，strtok找到str中下一个标记就是分隔符，找到之后会将分隔符置为'\0',所以最好拷贝一下内容
//	//返回指向该标记的指针，同时返回分隔符前面字段的第一个字符的地址
//	char arr[30];
//	strcpy(arr, str);
//	char* p = NULL;
//	//当第一个参数不为NULL时，找到第一个标记，strtok会保存该标记的位置
//	//当第一个参数为NULL时，函数将在同一个字符串中被保存的位置开始查找，直到下一个标记
//	//如果字符串没有标记了，则返回空指针
//	for (p = strtok(arr, sep); p != NULL; p = strtok(NULL, sep))
//	{
//		printf("%s\n", p);
//	}
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//#include <errno.h>
//int main()
//{
//	FILE* pFile;
//	pFile = fopen("test.txt", "r");
//	if (pFile == NULL)
//	{
//		printf("Error opening file test.txt:%s\n", strerror(errno));
//		//也可以用perror
//		perror(pFile);
//	}
//	return 0;
//}
//#include <stdio.h>
//#include <ctype.h>
//int main()
//{
//	int i = 0;
//	char str[] = "Test String.\n";
//	char c;
//	while (str[i])
//	{
//		c = str[i];
//		if (isupper(c))
//			c=tolower(c);
//		putchar(c);
//		i++;
//	}
//	return 0;
//}
