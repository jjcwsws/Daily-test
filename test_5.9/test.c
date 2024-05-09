#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
//
//int main()
//{
//	int arr[] = { 1,2,3 };//数组如果初始化的话，可以不直接指定大小，会根据初始化的内容来确定大小的
//	return 0;
//}

//int main()
//{
//	int n = 10;
//	int arr[n];
//
//	return 0;
//}

//int Max(int x, int y)
//{
//	return (x > y ? x : y);
//}

//int Max(int x, int y)
//{
//	int z = (x > y ? x : y);
//	return z;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	//输入
//	scanf("%d%d", &a, &b);
//	//求较大值
//	int m = Max(a, b);
//	//输出
//	printf("%d\n", m);
//
//	return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    //输入
//    scanf("%d", &n);
//    //计算
//    int m = (n / 12) * 4 + 2;
//    //输出
//    printf("%d\n", m);
//    return 0;
//}
//

//#include <stdio.h>
//
//int main() {
//    int ret = printf("Hello world!");
//    printf("\n%d\n", ret);
//    return 0;
//}


#include <stdio.h>

//
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    while (scanf("%d %d %d", &a, &b, &c) == 3)
//    {
//        //判断三角形
//        if (a + b > c && a + c > b && b + c > a)
//        {
//            //等边三角形
//            if (a == b && b == c)
//            {
//                printf("Equilateral triangle!\n");
//            }
//            else if ((a == b && a != c) || (a == c && a != b) || (b == c && b != a))
//            {
//                printf("Isosceles triangle!\n");
//            }
//            else
//            {
//                printf("Ordinary triangle!\n");
//            }
//        }
//        else
//        {
//            printf("Not a triangle!\n");
//        }
//    }
//
//    return 0;
//}
//

//#include <limits.h>
//
//INT_MAX;
//
//int main()
//{
//
//	return 0;
//}
//
//#include <stdio.h>
//int sum(int a)
//{
//    int c = 0;
//    static int b = 3;
//    c += 1;
//    b += 2;
//    return (a + b + c);
//}
//int main()
//{
//    int i;
//    int a = 2;
//    for (i = 0; i < 5; i++)
//    {
//        printf("%d,", sum(a));
//    }
//}
//
//int main()
//{
//	printf("%d\n", 1);
//	printf("%2d\n", 1);
//	printf("%02d\n", 1);
//
//	return 0;
//}
//
//#include <stdio.h>
//
//int main() {
//    int h = 0;
//    int m = 0;
//    int k = 0;
//    //输入
//    scanf("%d:%d %d", &h, &m, &k);
//    //计算
//    int h2 = (h + (m + k) / 60) % 24;
//    int m2 = (m + k) % 60;
//    //输出
//    printf("%02d:%02d\n", h2, m2);
//    return 0;
//}

#include <stdio.h>

//int范围大概是：-21亿~21亿
////
//int main() {
//    int age = 0;
//    scanf("%d", &age);
//    long long seconds = 31560000 * age;
//    //6312000000
//    printf("%lld\n", seconds);
//    return 0;
//}
//
//#include <stdio.h>
//
//int main() {
//    int w = 0;
//    int h = 0;
//    //输入
//    scanf("%d %d", &w, &h);
//    //计算
//    float bmi = w / ((h / 100.0) * (h / 100.0));
//    //输出
//    printf("%.2f\n", bmi);
//
//    return 0;
//}

//
//#include <stdio.h>
//
//int main() {
//    char ch = 0;
//    scanf("%c", &ch);
//    printf("%d\n", ch);
//    return 0;
//}
//


//%p - 专门用来打印地址的，是16进制的形式表示地址的
//
//int main()
//{
//	int a = 15;//虽然a占有4个字节，但是当我们&a的时候，拿到的是4个字节中第一个字节的地址
//	//printf("%p\n", &a);
//
//	int * pa = &a;//pa存放a的地址的，是一个变量，叫：指针变量，意思是存放指针的变量
//	*pa = 30;//解引用操作符，*pa 就是a
//	
//	printf("%d\n", a);
//	return 0;
//}

//指针 - 地址 -编号
//指针变量 - 变量 - 存放地址的变量

//口头语中说的指针，基本上都是指针变量

//
//int main()
//{
//	double d = 3.14;
//	double* pd = &d;
//	*pd = 0;
//	printf("%lf\n", d);
//	return 0;
//}
//
//
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	printf("%zd\n", sizeof(p));//size_t
//	printf("%zd\n", sizeof(int*));
//
//	return 0;
//}
//

struct S
{
	char name[20];
	int age;
	float score;
};

//void print1(struct S t)
//{
//	printf("%s %d %f\n", t.name, t.age, t.score);
//}
//
//void print2(struct S* ps)
//{
//	printf("%s %d %f\n", (*ps).name, (*ps).age, (*ps).score);
//	printf("%s %d %f\n", ps->name, ps->age, ps->score);
//}
//
////结构体变量.成员
////结构指针->成员
//
//int main()
//{
//	struct S s = { "zhangsan", 20, 85.5f };
//	print1(s);
//	print2(&s);
//
//	return 0;
//}




