#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
//#include <stdio.h>
//int YSJZ(int arr[3][3], int x, int y, int z)
//{
//	int i = 0;
//	int j = y - 1;
//	int k = 0;
//	while(j>=0 && i<x)
//	{
//		if (arr[i][j] > z)
//		{
//			j--;
//		}
//		else if (arr[i][j] < z)
//		{
//			i++;
//		}
//		else if (arr[i][j] == z)
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int arr[3][3] = { {1,3,4},{2,4,6},{5,7,9} };
//	if (YSJZ(arr, 3, 3, 7))
//	{
//		printf("���ҳɹ�");
//	}
//	else
//	{
//		printf("����ʧ��");
//	}
//	
//	return 0;
//}
//�ַ�������
//#include <stdio.h>
//void Reverse_c(char c[5])
//{
//	//��ת�����ַ�
//	int n = 0;
//	scanf("%d", &n);
//	//����
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 3; j++)
//		{
//			char temp = c[j];
//			c[j] = c[j + 1];
//			c[j + 1] = temp;
//		}
//	}
//	//��ӡ
//	printf("%s", c);
//}
//
//int main()
//{
//	char c[5] = "ABCD";
//	Reverse_c(c);
//	return 0;
//}

//��2
//#include <stdio.h>
//#include <string.h>
//void strReverse(char c[5], int left, int right)
//{
//	while (left < right)
//	{
//		char temp = c[left];
//		c[left] = c[right];
//		c[right] = temp;
//		left++;
//		right--;
//	}
//}
//void Reverse_c(char c[5])
//{
//	int times = 0;
//	scanf("%d", &times);
//	int len = strlen(c);
//	times %= len;//���������ȣ��ͻ��ظ�֮ǰ����������ֻ��Ҫ����֮ǰ�ľ���
//	int pos = times - 1;
//	strReverse(c, 0, pos);//ǰ������
//	strReverse(c, pos + 1, len - 1);//��������
//	strReverse(c, 0, len - 1);//��������
//	printf("%s", c);
//
//}
//int main()
//{
//	char c[5] = "ABCD";
//	Reverse_c(c);
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//void strReverse(char str1[6], int left, int right)
//{
//	while (left < right)
//	{
//		char temp = str1[left];
//		str1[left] = str1[right];
//		str1[right] = temp;
//		left++;
//		right--;
//	}
//}
//int Reverse_str(char str1[6], char str2[6])
//{
//	int times = 0;
//	int len = strlen(str1);
//	for (times = 0; times < len; times++)
//	{
//		int pos = times - 1;
//		strReverse(str1, 0, pos);
//		strReverse(str1,pos + 1, len - 1);
//		strReverse(str1, 0, len - 1);
//		if (strcmp(str1, str2) == 0)
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	char str1[6] = "AABCD";
//	char str2[6] = "BCDAA";
//	int a=Reverse_str(str1, str2);
//	printf("%d", a);
//	return 0;
//}

#include <stdio.h>
#include <string.h>
int isRotation(char* s1, char* s2) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);

    // ���Ȳ�����򲻿�������ת����ַ���
    if (len1 != len2) {
        return 0;
    }

    // ��s1���ӵ��������һ����ʱ�ַ���s1s1
    char s1s1[256];
    strcpy(s1s1, s1);
    strcat(s1s1, s1);

    // ��s1s1�в���s2
    if (strstr(s1s1, s2) != NULL) 
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}
int main() {
    char s1[] = "AABCD";
    char s2[] = "BCDAA";
    if (isRotation(s1, s2)) {
        printf("s2 is a rotation of s1.");
    }
    else {
        printf("s2 is not a rotation of s1.");
    }

    return 0;
}