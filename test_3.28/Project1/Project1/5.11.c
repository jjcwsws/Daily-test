#define _CRT_SECURE_NO_WARNINGS 1

//int main()
//{
//	int flag = 5;
//	if (flag == 0)
//	{
//		printf("hehe\n");
//	}
//	if (!flag)//flag Ϊ�� ��ӡhehe
//	{
//		printf("hehe\n");
//	}
//	if (flag)
//	{
//		printf("haha\n");
//	}
//	return 0;
//}

//int main()
//{
//	int a = 5;
//	int b = -a;
//	printf("%d\n", b);
//	return 0;
//}

//&  * Ӧ����ָ��

//int main()
//{
//	int a = 10;
//	//pa��ָ�����
//	int* pa = &a;//&-ȡ��ַ������-ȡ��a�ĵ�ַ
//
//	*pa = 20;//�����ò�����(��ӷ��ʲ�����)-��Ŀ������-ͨ��pa�д�ŵĵ�ַ���ҵ�ָ��Ŀռ䣨���ݣ�
//	int c = *pa;
//
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof a);//˵��sizeof���Ǻ���
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = {0};
//	printf("%d\n", sizeof(arr));//40 - ������������Ĵ�С����λ�ֽ�
//	printf("%d\n", sizeof(int [10]));//
//	return 0;
//}

//
//~ �����������λȡ��
//
//int main()
//{
//	int a = 0;
//	printf("%d\n", ~a);//?
//	//00000000000000000000000000000000
//	//11111111111111111111111111111111 - ����
//	//11111111111111111111111111111110
//	//10000000000000000000000000000001 -1
//	return 0;
//}
//

//
//int main()
//{
//	int a = 13;
//	//00000000000000000000000000001101
//	//00000000000000000000000000010000
//	a |= (1<<4);
//	printf("%d\n", a);
//	//00000000000000000000000000011101
//	//11111111111111111111111111101111
//	//00000000000000000000000000001101
//
//	a &= (~(1 << 4));
//	printf("%d\n", a);
//
//	return 0;
//}
//




//int main()
//{
//	int a = 0;
//	while (scanf("%d", &a) == 1)
//	{
//		printf("%d\n", a);
//	}
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	//scanf ��ȡʧ�ܷ��ص���EOF
//	while (scanf("%d", &a) != EOF)
//	{
//		printf("%d\n", a);
//	}
//	return 0;
//}
//

//int main()
//{
//	int a = 0;
//	//scanf ��ȡʧ�ܷ��ص���EOF
//	//����scanf ��ȡʧ�ܣ�����EOF ---> -1
//	while (~scanf("%d", &a))
//	{
//		printf("%d\n", a);
//	}
//	return 0;
//}

//--ǰ�á�����--
//++ǰ�á�����++

//int main()
//{
//	int a = 1;
//	int b = a++;//����++����ʹ�ã���++
//	//b=a,a=a+1
//	printf("a=%d b=%d\n", a, b);//2 1
//	return 0;
//}

//
//int main()
//{
//	int a = 1;
//	int b = a--;//����--����ʹ�ã���--
//	//b=a,a=a-1
//	printf("a=%d b=%d\n", a, b);//0 1
//	return 0;
//}
//

//int main()
//{
//	int a = 1;
//	int b = ++a;//ǰ��++����++����ʹ��
//	//a=a+1,b=a
//	printf("a=%d b=%d\n", a, b);//2 2
//	return 0;
//}


//int main()
//{
//	int a = 1;
//	int b = --a;//ǰ��--����--����ʹ��
//	//a=a-1,b=a
//	printf("a=%d b=%d\n", a, b);//0 0
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	printf("%d\n", a++);//
//	printf("%d\n", a);//
//
//	return 0;
//}
//

//int main()
//{
//	int a = (int)3.14;//ǿ��
//	printf("%d\n", a);
//	// int a = int(3.14)//err
//	return 0;
//}
//

//#include <stdio.h>
//void test1(int arr[])//int*
//{
//	printf("%d\n", sizeof(arr));//(2)
//}
//void test2(char ch[])//char*
//{
//	printf("%d\n", sizeof(ch));//(4)
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));//(1)
//	printf("%d\n", sizeof(ch));//(3)
//	test1(arr);//&arr[0]
//	test2(ch);// &ch[0]
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	//a �� b ����5����ӡ hehe
//	if (a == 5 && b == 5)
//	{
//		printf("hehe\n");
//	}
//	//a ���� b��5 ��ӡ����
//	if (a == 5 || b == 5)
//	{
//		printf("haha\n");
//	}
//	return 0;
//}
