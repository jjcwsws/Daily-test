#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>

//在整个工程中，main函数有且仅有一个
//
//int main()
//{
//	printf("hehe\n");
//	return 0;
//}

//scanf函数返回的是读取到数据的个数
//如果scanf函数读取失败会返回EOF
//EOF end of file 文件结束标志
//#define EOF -1


//int main() {
//    int iq = 0;
//    int eq = 0;
//    //输入
//    while (scanf("%d", &iq) == 1)
//    {
//        if (iq >= 140)
//            printf("Genius\n");
//    }
//
//    return 0;
//}

//ctrl + Z

#include <stdio.h>

// int main() {
//     int iq = 0;
//     //输入
//     scanf("%d", &iq);
//     if(iq >= 140)
//         printf("Genius\n");

//     return 0;
// }


// int main() {
//     int iq = 0;
//     //输入
//     while (scanf("%d", &iq) == 1)
//     {
//         if (iq >= 140)
//             printf("Genius\n");
//     }

//     return 0;
// }



#include <stdio.h>

// int main() 
// {
//     printf("     **\n");
//     printf("     **\n");    
//     printf("************\n");
//     printf("************\n");
//     printf("    *  *\n");
//     printf("    *  *\n");

//     return 0;
// }


// int main() 
// {
//     printf("     **     \n");
//     printf("     **     \n");    
//     printf("************\n");
//     printf("************\n");
//     printf("    *  *    \n");
//     printf("    *  *    \n");

//     return 0;
// }


//#include <stdio.h>
//
//int main()
//{
//    printf("Name    Age    Gender\n");
//    printf("---------------------\n");
//    printf("Jack    18     man");
//    return 0;
//}
//
//#include <stdio.h>
//
//int main() {
//    printf("I lost my cellphone!\n");
//    return 0;
//}
//

//void test()
//{
//	int b = 0;
//}
//
//int main()
//{
//	int a = 0;
//	return 0;
//}
//
//int main()
//{
//	printf("%d\n", 9 / 5);
//	printf("%d\n", 9 % 5);
//
//	return 0;
//}
//
//
//#include <stdio.h>
//
//int main() {
//    int m = 0;
//    //输入
//    scanf("%d", &m);
//    //判断
//    if (m % 5 == 0)
//        printf("YES\n");
//    else
//        printf("NO\n");
//
//    return 0;
//}
//
//
//#include <stdio.h>
//
//int main() {
//    int x = 0;
//    int y = 0;
//    scanf("%d", &x);
//
//    if (x < 0)
//        y = 1;
//    else if (x == 0)
//        y = 0;
//    else
//        y = -1;
//
//    printf("%d\n", y);
//
//    return 0;
//}
//
//
//#include <stdio.h>
//
//int main() {
//    int seconds = 0;
//    int h = 0;
//    int m = 0;
//    int s = 0;
//    //输入
//    scanf("%d", &seconds);
//    //计算
//    h = seconds / 3600;
//    m = (seconds % 3600) / 60;
//    s = seconds % 60;
//    //输出
//    printf("%d %d %d\n", h, m, s);
//
//    return 0;
//}
//
#include <stdio.h>

// int main() {
//     int a = 0;
//     int b = 0;
//     scanf("%d %d", &a, &b);
//     int m = a/b;
//     int n = a%b;
//     printf("%d %d\n", m, n);

//     return 0;
// }

//
//int main() {
//    int a = 0;
//    int b = 0;
//    scanf("%d %d", &a, &b);
//    printf("%d %d\n", a / b, a % b);
//
//    return 0;
//}
//
//#include <stdio.h>
//
//int main() {
//    int a = 40;
//    int c = 212;
//    printf("%d\n", (-8 + 22) * a - 10 + c / 2);
//    return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//
//	//输入
//	scanf("%d %d", &a, &b);
//
//	int sum = a+b;
//	//输出
//	printf("%d\n", sum);
//
//	return 0;
//}

//int Add(int x, int y)
//{
//	 int z = x + y;
//	 return z;
//}
//
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//
//	//输入
//	scanf("%d %d", &a, &b);
//
//	int sum = Add(a, b);
//	//输出
//	printf("%d\n", sum);
//
//	return 0;
//}
//
//int main()
//{
//	/*int a = 0;
//	int b = 1;
//	int c = 2;*/
//	//....
//	//1~10
//	//数组 - 可以保存一组相同类型的数
//	//char ch[8];//字符数组
//	// 
//	//
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};//整型数组
//	//             0 1 2 3 4 5 6 7 8 9
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d ", arr[i]);
//		i = i + 1;//i++;
//	}
//	//printf("%d\n", arr[5]);
//	return 0;
//}
//
//int main()
//{
//	/*int a = 7 / 2;
//	printf("%d\n", a);*/
//
//	//printf("%lf\n", 7.0 / 2);
//	//printf("%lf\n", 7 / 2.0);
//	//printf("%lf\n", 7.0 / 2.0);
//
//
//	return 0;
//}
//
//
//
//int main()
//{
//	int a = 0;
//	a = 10;//赋值
//
//	a = a + 5;
//	a += 5;//复合赋值
//
//	a = a - 2;
//	a -= 2;
//
//	a = a * 3;
//	a *= 3;
//
//	return 0;
//}
//

//C语言中如何表示真假呢？
//0   - 假
//非0 - 真
//-1

//int main()
//{
//	int a = 0;
//	if (a)//a为真进入if
//	{
//		printf("hehe\n");
//	}
//	if (!a)//a为假进入if
//	{
//		printf("haha\n");
//	}
//	printf("%d\n", !a);
//	return 0;
//}
//
//
//int main()
//{
//	int a = 5;
//	int b = a;
//	printf("%d\n", b);
//	return 0;
//}
//
//int main()
//{
//	int a = 100;
//	//sizeof 是一个操作符，不是函数
//	//sizeof计算的是变量占有内存的大小，单位是字节
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof a);//sizeof 后边的括号省略，就说明sizeof 不是函数
//
//	printf("%d\n", sizeof(int));
//	//printf("%d\n", sizeof int);//err- 这是一个错误的示范
//
//
//	return 0;
//}
//

//int main()
//{
//	int a = 1;
//	//int b = ++a;//前置++，先++，后使用
//	/*a = a + 1;
//	b = a;*/
//	
//	int b = a++;//后置++，先使用，再++
//	//b=a
//	//a=a+1
//	printf("a=%d b=%d\n", a, b);//2 1
//
//	return 0;
//}

//
//int main()
//{
//	int a = 3;
//	//int b = --a;//先--，后使用
//	//a=a-1
//	//b=a
//	int b = a--;//先使用，再--
//	//b = a
//	//a = a-1
//	printf("a=%d b=%d\n", a, b);//2 3
//
//	return 0;
//}
//

//int main()
//{
//	int a = 5;
//	printf("%d\n", --a);
//	printf("%d\n", a);
//
//	return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//	int a = 1;
//	int b = (++a) + (++a) + (++a);
//	printf("%d\n", b);
//	return 0;
//}
//


int main()
{
	//强制类型转换
	int a = (int)3.14;
	printf("%d\n", a);
	return 0;
}

