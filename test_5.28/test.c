#define _CRT_SECURE_NO_WARNINGS 1

//写一个C语言的代码，在屏幕上打印：hello bit
//
//#include <stdio.h>
//
//int main()
//{
//	printf("hello bit\n");
//	return 0;
//}
//



//代码一般是从main函数开始写

//
//C语言中main函数是程序的入口
//程序是从main函数的第一行开始执行的
//main函数有且仅有一个
//

//
//printf是一个库函数 - C语言编译器提供的一个现成的函数
//直接可以使用
//功能就是在屏幕上打印数据
//但是在使用之前得包含头文件，stdio.h
//"hehe" - 是一个字符串
//双引号引起来的就是字符串
//
//#include <stdio.h>
//
//int main()
//{
//	printf("hehe\n");
//	printf("呵呵\n");
//
//	return 0;
//}


//这种写法是非常古老 - 不推荐
//void main()
//{
//
//}


//这种写法也有
//int main(void)//void在这里标是main函数不接受任何参数
//{
//
//	return 0;
//}

//以后再去研究
//int main(int argc, char* argv[])
//{
//
//	return 0;
//}
//

#include <stdio.h>

//sizeof 是一个操作符，是计算机类型/变量所占内存空间的大小

//
//%d - 以10进制的形式打印一个整数
//
//int main()
//{
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//
//	return 0;
//}
//
//int main()
//{
//	printf("%d\n%d\n", 10, 20);
//	return 0;
//}
//

//
//int main()
//{
//	//类型  变量名;
//	//类型  变量名 = 初始值;
//
//	//int age;
//	//int age2 = 20;
//	//55.5 小数直接写出来，编译器默认是double类型的
//	//55.5f  这个时候就是float类型
//	//float weight = 55.5f;
//	//double weight2 = 88.5;
//
//	//int _2b;
//	//int _2B;
//	//int char;
//	//变量名要起的有意义
//	//
//	int num = 10;
//	printf("%d\n", num);//10
//	num = 20;//
//	printf("%d\n", num);//20
//
//	return 0;
//}

#include <stdio.h>

//首先原则上我们的变量名尽量不要冲突
//但是当全局变变量和局部变量的名字冲突的情况下，局部优先的

//int a = 100;//全局变量
//
//int main()
//{
//	int b = 10;//局部变量
//	printf("a=%d\n", a);
//
//	return 0;
//}

int main()
{
	//写一个代码，求2个整数的和
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	//输入2个整数的值
	//&num1 - 取出num1的地址
	//& 取地址操作符

	scanf("%d %d", &num1, &num2);//10 20

	sum = num1 + num2;

	//打印
	printf("%d\n", sum);

	return 0;
}