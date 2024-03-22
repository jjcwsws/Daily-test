#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//int main()
//{
//	char arr1[] = "hello bit";
//	char arr2[20] = "xxxxxxxxxxxx";
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//
//	return 0;
//}

//
//int main()
//{
//	char arr[] = "hello bit";
//	memset(arr, 'x', 5);
//	printf("%s\n", arr);
//
//	return 0;
//}
//

//int main()
//{
//	int len = strlen("abcdef");
//	printf("%d\n", len);
//
//	return 0;
//}

//int get_max(int x, int y)
//{
//	int z = (x > y ? x : y);
//	return z;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	//int m = (a > b ? a : b);
//	int m = get_max(a, b);
//	printf("较大值是：%d\n", m);
//
//	return 0;
//}
//

//
//void test()
//{
//	printf("hehe\n");
//}
//
//int main()
//{
//	test();
//	return 0;
//}

//void Swap(int x, int y)
//{
//	int tmp = x;
//	x = y;
//	y = tmp;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//
//	printf("交换前:a=%d b=%d\n", a, b);
//	Swap(a, b);
//	printf("交换后:a=%d b=%d\n", a, b);
//	
//	return 0;
//}

//int main()
//{
//	int num = 10;
//	int* p = &num;
//
//	*p = 20;
//	printf("%d\n", num);
//	return 0;
//}


//void Swap(int* pa, int* pb)
//{
//	int tmp = *pa;//tmp = a
//	*pa = *pb;//a = b
//	*pb = tmp;//b = tmp
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//
//	printf("交换前:a=%d b=%d\n", a, b);
//	Swap(&a, &b);
//	printf("交换后:a=%d b=%d\n", a, b);
//	
//	return 0;
//}
//

//int get_max(int x, int y)
//{
//	int z = (x > y ? x : y);
//	return z;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);//3 5
//	int m = get_max(a, b);//变量
//
//	//m = get_max(a, 7);
//
//	//m = get_max(a, 2+3);
//
//	//m = get_max(a, get_max(4, 8));
//
//	printf("较大值是：%d\n", m);
//
//	return 0;
//}
//
