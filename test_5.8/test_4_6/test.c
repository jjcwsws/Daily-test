#define _CRT_SECURE_NO_WARNINGS 1

//scanf
//printf
//�⺯�� - C���Եı������ṩ���ֳɵĺ���,ֱ�ӿ���ʹ��
//scanf���������������ݣ����ݴӼ��̶�ȡ���ڴ���
//printf����ҵ��������ݣ����ݴ��ڴ��ӡ(���)����Ļ��
//ʹ�õ�ʱ��Ҫ����ͷ�ļ�stdio.h
#include <stdio.h>

//
// %c - �ַ�
// %d - ����
// %s - �ַ���
// %f - float
// %lf - double
// %p - ��ַ�Ĵ�ӡ
// 
//int main()
//{
//	//int a = 0;
//	//scanf("%d", &a);
//	//printf("%d", a);
//
//	char ch = 0;
//	scanf("%c", &ch);
//	printf("%c", ch);
//
//	return 0;
//}
//


//int main()
//{
//	{
//		int a = 100;
//	}
//	printf("%d\n", a);
//
//	return 0;
//}



//int a = 2023;
//
//void test()
//{
//	printf("2---> %d\n", a);
//}
//
//int main()
//{
//	printf("1---> %d\n", a);
//	test();
//
//	return 0;
//}


//��Ҫ�����ⲿ����
//extern int g_val;
//
//int main()
//{
//	printf("%d\n", g_val);
//
//	return 0;
//}



//int main()
//{
//	{
//		int a = 3;
//		int b = 5;
//		int c = a + b;
//		printf("%d\n", c);
//	}
//	//...
//
//	return 0;
//}

//int a = 10;
//
//int main()
//{
//	//
//	//....
//	//
//	return 0;
//}


//int main()
//{
//	int a = 3;
//	printf("%d\n", a);
//	a = 10;
//	printf("%d\n", a);
//
//	return 0;
//}

//int main()
//{
//	//������
//	//�����a�Ǿ��г����Եģ����ܸı䣬���Ǳ����ϻ��Ǳ���
//
//	//const int a = 3;
//
//	//printf("%d\n", a);
//	//a = 10;
//	//printf("%d\n", a);
//
//	//����
//	//const int n = 10;
//	////int arr[n];
//	//int arr[n];
//
//	return 0;
//}
//

//3. #define ����ı�ʶ������
//#define SIZE 10
//#define MAX 10000
//#define CH 'W'
//
//
//int main()
//{
//	//10;
//	//int a = SIZE;
//	//int arr[SIZE] = {0};
//	printf("%c", CH);
//	return 0;
//}
//

//
//4. ö�ٳ���
//ö�� - һһ�о�
//��������Щֵ�ǿ���һһ�о�
// �Ա��С�Ů������
// ��ԭɫ��red green blue
// Ѫ�ͣ�
//

//enum SEX
//{
//	//�г���ö������enum SEX�Ŀ���ȡֵ
//	//ö�ٳ���
//	MALE=4,
//	FEMALE=6,
//	SECRET=9
//};
//
//int main()
//{
//	enum SEX s = FEMALE;
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//
//	return 0;
//}
//

//int main()
//{
//	char c;
//	'c';
//	return 0;
//}
//
//"zhangsan"
//
//"hello world"
//

//int main()
//{
//	//"abcdef";
//	//char ch1 = 'a';
//	//char ch2 = 'b';
//	//char ch3 = 'c';
//	char ch[] = {'a', 'b', 'c', 'd', 'e', 'f'};
//	char ch2[] = "abcdef";
//
//	printf("%s\n", ch);
//	printf("%s\n", ch2);
//
//	return 0;
//}
//

//#include <string.h>
//
//int main()
//{
//	char ch1[] = { 'a', 'b', 'c'};//[a][b][c]
//	char ch2[] = "abc";            //[a][b][c][\0]
//
//	int len1 = strlen(ch1);
//	printf("%d\n", len1);
//
//	int len2 = strlen(ch2);
//	printf("%d\n", len2);
//
//	return 0;
//}
//

//ת���ַ� - ת��ԭ����˼

//int main()
//{
//	printf("(are you ok\?\?)");
//	//
//	//are you ok]
//	//??) - ����ĸ��  --> ]
//	//
//	return 0;
//}
//
//int main()
//{
//	//printf("ab\ndef");
//	//abcdef
//	printf("c:\\test\\test.c");
//
//	return 0;
//}
//
//
//int main()
//{
//	//printf("%c\n", 'a');
//	//printf("%c\n", 'x');
//	//printf("%c\n", '\'');
//	//printf("%s\n", "abc");
//	//printf("%s\n", "a");
//	//printf("%s\n", "\"");
//	//printf("a\\tb");
//	//printf("\a");
//	/*printf("abcdef\n");
//	printf("abc\bdef\n");*/
//
//	return 0;
//}

//int main()
//{
//	printf("%c", '\133');
//	//8���Ƶ�130 ת����10���ƺ�õ�88����88��ΪASCIIֵ������ַ�
//	return 0;
//}

//int main()
//{
//	printf("%c\n", '\x31');
//
//	return 0;
//}
//

//#include <string.h>
//
//int main()
//{
//	printf("%d\n", strlen("c:\test\x11\328\test.c"));
//
//	return 0;
//}
//


//
//int main()
//{
//	//��//��ͷ��ע��������C++ע�ͷ��
//	//ע��
//	//strlen��һ���⺯��
//	//�������\0֮ǰ���ֵ��ַ��ĸ���
//	//
//	/*
//	int a = 10;
//	*/
//	/*
//	* C����ע�ͷ�� - ��֧��ע��Ƕ��
//	* ��������Ǵ���һ�����ͱ�������ֵ0
//	*/
//	int b = 0;
//
//	printf("%d\n", strlen("abcdef"));
//	return 0;
//}
//
//
//
//int main()
//{
//	printf("������ؾ�ҵ��ѧϰ\n");
//	printf("��Ը��ú�ѧϰ��?(1/0)>:");
//	int flag = 0;
//	scanf("%d", &flag);
//
//	if (flag == 1)
//		printf("��offer\n");
//	else if(flag == 0)
//		printf("������\n");
//
//	return 0;
//}
//


//
//50000�д��룬�Ͳ�����
//

//int main()
//{
//	int line = 0;
//
//	while (line < 50000)
//	{
//		printf("�ô���: %d\n", line);
//		line++;
//	}
//
//	if (line == 50000)
//		printf("��offer\n");
//	else
//		printf("�����˼\n");
//
//	return 0;
//}
//
//

