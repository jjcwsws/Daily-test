#define _CRT_SECURE_NO_WARNINGS 1

//int main()
//{
//	int flag = 5;
//	if (flag == 0)
//	{
//		printf("hehe\n");
//	}
//	if (!flag)//flag 为假 打印hehe
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

//&  * 应用于指针

//int main()
//{
//	int a = 10;
//	//pa是指针变量
//	int* pa = &a;//&-取地址操作符-取出a的地址
//
//	*pa = 20;//解引用操作符(间接访问操作符)-单目操作符-通用pa中存放的地址，找到指向的空间（内容）
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
//	printf("%d\n", sizeof a);//说明sizeof不是函数
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = {0};
//	printf("%d\n", sizeof(arr));//40 - 计算整个数组的大小，单位字节
//	printf("%d\n", sizeof(int [10]));//
//	return 0;
//}

//
//~ 按补码二进制位取反
//
//int main()
//{
//	int a = 0;
//	printf("%d\n", ~a);//?
//	//00000000000000000000000000000000
//	//11111111111111111111111111111111 - 补码
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
//	//scanf 读取失败返回的是EOF
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
//	//scanf 读取失败返回的是EOF
//	//假设scanf 读取失败，返回EOF ---> -1
//	while (~scanf("%d", &a))
//	{
//		printf("%d\n", a);
//	}
//	return 0;
//}

//--前置、后置--
//++前置、后置++

//int main()
//{
//	int a = 1;
//	int b = a++;//后置++，先使用，后++
//	//b=a,a=a+1
//	printf("a=%d b=%d\n", a, b);//2 1
//	return 0;
//}

//
//int main()
//{
//	int a = 1;
//	int b = a--;//后置--，先使用，后--
//	//b=a,a=a-1
//	printf("a=%d b=%d\n", a, b);//0 1
//	return 0;
//}
//

//int main()
//{
//	int a = 1;
//	int b = ++a;//前置++，先++，后使用
//	//a=a+1,b=a
//	printf("a=%d b=%d\n", a, b);//2 2
//	return 0;
//}


//int main()
//{
//	int a = 1;
//	int b = --a;//前置--，先--，后使用
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
//	int a = (int)3.14;//强制
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
//	//a 和 b 都是5，打印 hehe
//	if (a == 5 && b == 5)
//	{
//		printf("hehe\n");
//	}
//	//a 或者 b是5 打印哈哈
//	if (a == 5 || b == 5)
//	{
//		printf("haha\n");
//	}
//	return 0;
//}
