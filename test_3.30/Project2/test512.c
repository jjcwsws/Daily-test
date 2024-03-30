#define _CRT_SECURE_NO_WARNINGS 1

//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;
//	b = ++c, c++, ++a, a++;
//	b += a++ + c;
//	printf("a = %d b = %d c = %d\n:", a, b, c);
//	return 0;
//}

//int main()
//{
//	int a = 2;
//	int b = 3;
//
//	a = a ^ b;
//	b = a ^ b;//a ^ b ^ b
//	a = a ^ b;//a^b^a
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}

//int main()
//{
//    int m = 0;
//    scanf("%d", &m);
//    int i = 31;
//    printf("二进制：");
//    while (i >= 0)
//    {
//        printf("%d ", (m >> i) & 1);
//        i--;
//    }
//    printf("\n奇数位：");
//    for (i = 30; i >= 0; i -= 2)
//    {
//        printf("%d ", (m >> i) & 1);
//    }
//    printf("\n偶数位：");
//    for (i = 31; i >= 1; i -= 2)
//    {
//        printf("%d ", (m >> i) & 1);
//    }
//
//    return 0;
//}
//
//#include<stdio.h> 
//int main()
//{
//    int  m;
//    int count = 0;
//    scanf("%d", &m);
//    int a[32];
//    for (int i = 0; i < 32; i++)
//    {
//        /*a[i] = m % 2;
//        m /= 2;
//        if (a[i] == 1)
//            count++;*/
//
//        if (((m >> i) & 1) == 1)
//        {
//            count++;
//        }
//    }
//    printf("%d\n", count);
//    return 0;
//}


//int main()
//{
//    int x = 0;
//    int y = 0;
//    int count = 0;
//    printf("输入两个整数:");
//    scanf("%d %d", &x, &y);
//
//    for (int i = 0; i < 32; i++)
//    {
//        if (((x >> i) & 1) != ((y >> i) & 1))
//        {
//            count++;
//        }
//    }
//    printf("count:%d", count);
//
//    return 0;
//}

//int main()
//
//{
//
//	int year;
//
//	int ret = 0;
//
//	printf("请输入年份:");
//
//	scanf("%d", &year);
//
//	ret = leap_year(year);
//
//	if (ret == 1)
//
//	{
//
//		printf("%d年是闰年\n", year);
//
//	}
//
//	else
//
//	{
//
//		printf("%d年非闰年\n", year);
//
//	}
//
//	return 0;
//
//}