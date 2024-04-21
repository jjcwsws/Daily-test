#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i = 5)
//			printf("%d ", i);
//	}
//	return 0;
//}

//int func(int a)
//{
//    int b;
//    switch (a)
//    {
//    case 1: b = 30;
//    case 2: b = 20;
//    case 3: b = 16;
//    default: b = 0;
//    }
//    return b;
//}

//int main() {
//	int x = 3;
//	int y = 3;
//	switch (x % 2) {
//	case 1:
//		switch (y)
//		{
//		case 0:
//			printf("first");
//		case 1:
//			printf("second");
//			break;
//		default: printf("hello");
//		}
//	case 2:
//		printf("third");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 3; i <= 100; i++)
//	{
//		if (i%3 == 0)
//		{
//			printf("%d ",  i );
//		}
//	}
//	return 0;
//}

//int main() 
//{
//	int a, b, c, t;
//	printf("请输入三个整数：\n");
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b) { // 3 2 1
//		t = a; // t=3
//		a = b; // a=2
//		b = t; // b=3
//	}
//	if (a < c) {
//		t = a; // t=2
//		a = c; // a=1
//		c = t; // c=2
//	}
//	if (b < c) {
//		t = b; // t=3
//		b = c; // b=2
//		c = t; // c=3
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}

//int main()
//{
//    int i = 100, j = 0;
//    for (i; i < 200; i++)
//    {
//        for (j = 2; j < i; j++)
//        {
//            if (i % j == 0)
//            {
//             break;
//            }
//        }
//        if (i == j)
//        {
//            printf("%d ", i);
//        }
//    }
//    return 0;
//}

//int main()
//{
//	int year = 1000;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if ((0 == year % 4 && year % 100 != 0) || 0 == year % 400)
//			printf("%d ", year);
//
//	}
//	return 0;
//}

//int main()
//{
//    int m = 0;
//    int n = 0;
//    int tmp = 0;
//    scanf("%d %d", &m, &n);
//
//    while (tmp = m % n)
//    {
//        m = n;
//        n = tmp;
//    }
//    printf("%d", n);
//    return 0;
//}