#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
//#include <stdio.h>
//#include <assert.h>
//char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1 && str2);//����str1��str2�Ƿ�Ϊ��ָ��
//	char* cp = (char*)str1;
//	char* sstr1 ;
//	char* sstr2 ;
//	//*str2Ϊ'\0'����str1�ĵ�ַ
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
//	char sep[] = "@.# & ";//�ָ�����strtok�ҵ�str����һ����Ǿ��Ƿָ������ҵ�֮��Ὣ�ָ�����Ϊ'\0',������ÿ���һ������
//	//����ָ��ñ�ǵ�ָ�룬ͬʱ���طָ���ǰ���ֶεĵ�һ���ַ��ĵ�ַ
//	char arr[30];
//	strcpy(arr, str);
//	char* p = NULL;
//	//����һ��������ΪNULLʱ���ҵ���һ����ǣ�strtok�ᱣ��ñ�ǵ�λ��
//	//����һ������ΪNULLʱ����������ͬһ���ַ����б������λ�ÿ�ʼ���ң�ֱ����һ�����
//	//����ַ���û�б���ˣ��򷵻ؿ�ָ��
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
//		//Ҳ������perror
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
