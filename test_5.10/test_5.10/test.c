//#define _CRT_SECURE_NO_WARNINGS 1
//int main()
//{
//	3 + 5;
//	printf("hehe");
//	;//空语句
//	return 0;
//}
#include <stdio.h>

//int main()
//{
//	int age = 0;
//	//输入
//	scanf("%d", &age);
//
//	if (age < 18)
//		printf("未成年\n");
//
//	return 0;
//}

//int main()
//{
//	int age = 0;
//	//输入
//	scanf("%d", &age);
//
//	if (age < 18)
//		printf("未成年\n");
//	else
//		printf("成年\n");
//
//	return 0;
//}
//
//int main()
//{
//	int age = 0;
//	//输入
//	scanf("%d", &age);
//
//	//<18 青少年
//	//18~30 青年
//	//31~50 中年
//	//51~80 中老年
//	//81~100 老年
//	//101+ 老寿星
//
//	//if (age < 18)
//	//	printf("青少年\n");
//	//else if (age >= 18 && age <= 30)
//	//	printf("青年\n");
//	//else if (age >= 31 && age <= 50)
//	//	printf("中年\n");
//	//else if (age >= 51 && age <= 80)
//	//	printf("中老年\n");
//	//else if (age >= 81 && age <= 100)
//	//	prnitf("老年\n");
//	//else
//	//	printf("老寿星\n");
//
//	/*if (age < 18)
//		printf("青少年\n");
//	else
//		if (age >= 18 && age <= 30)
//			printf("青年\n");
//		else if (age >= 31 && age <= 50)
//			printf("中年\n");
//		else if (age >= 51 && age <= 80)
//			printf("中老年\n");
//		else if (age >= 81 && age <= 100)
//			printf("老年\n");
//		else
//			printf("老寿星\n");
//	*/
//
//	if (age > 18)
//	{
//		printf("成年\n");
//		printf("交女朋友\n");
//	}
//	else
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	{
//		if (b == 2)
//			printf("hehe\n");
//		else
//			printf("haha\n");
//	}
//	return 0;
//}
//养成好的代码风格
//未来找工作的时候，有笔试和面试
//笔试需要写代码
//面试需写代码
//DEV C++
//

//int main()
//{
//	int a = 10;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//
//	}
//	return 0;
//}
//int test()
//{
//	int n = 20;
//	if (n > 5)
//		return 1;
//	return 2;
//	printf("hehe\n");
//}
//
//int main()
//{
//	int m = test();
//	printf("%d\n", m);
//
//	return 0;
//}


//int main()
//{
//	int n = 5;
//	if (5 == n)
//		printf("hehe\n");
//
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	//输入
//	scanf("%d", &n);
//	if (n % 2 == 1)
//	{
//		printf("是奇数\n");
//	}
//	else
//	{
//		printf("不是奇数\n");
//	}
//	return 0;
//}
//

//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		//判断i是奇数的话，就打印i
//		if(i % 2 == 1)
//			printf("%d ", i);
//		++i;
//	}
//	return 0;
//}

//
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		printf("%d ", i);
//		i = i+2;
//	}
//	return 0;
//}
//

//int main()
//{
//	int day = 0;
//	//输入
//	scanf("%d", &day);
//	if (1 == day)
//		printf("星期1\n");
//	else if (2 == day)
//		printf("星期2\n");
//	else if (3 == day)
//		printf("星期3\n");
//	else if (4 == day)
//		printf("星期4\n");
//	else if (5 == day)
//		printf("星期5\n");
//	else if (6 == day)
//		printf("星期6\n");
//	else if (7 == day)
//		printf("星期天\n");
//	else
//		printf("输入错误\n");
//
//	return 0;
//}
//
//
//int main()
//{
//	int day = 0;
//	const int n = 1;
//	scanf("%d", &day);
//	switch (day)
//	{
//	default:
//		printf("输入错误\n");
//		break;
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("weekday\n");
//		break;
//	case 6:
//	case 7:
//		printf("weekend\n");
//		break;
//	}
//
//	return 0;
//}
//

//
//
//#include <stdio.h>
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:
//		m++;
//	case 2:
//		n++;
//	case 3:
//		switch (n)
//		{//switch允许嵌套使用
//		case 1:
//			n++;
//		case 2:
//			m++;
//			n++;
//			break;
//		}
//	case 4:
//		m++;
//		break;
//	default:
//		break;
//	}
//	printf("m = %d, n = %d\n", m, n);
//	return 0;
//}
//

//
//
//int main()
//{
//	while (1)
//		printf("hehe\n");
//
//	return 0;
//}

//在屏幕上打印1~10
//break - （跳出）终止循环
//continue

//int main()
//{
//	int n = 1;
//	while (n<=10)
//	{
//		if (n == 5)
//			break;
//		printf("%d ", n);
//		n++;
//	}
//	return 0;
//}


//int main()
//{
//	int n = 1;
//	while (n <= 10)
//	{
//		n++;
//		if (n == 5)
//			continue;//跳过本次循环continue后边的代码，直接去while循环的判断部分
//		printf("%d ", n);
//	}
//	return 0;
//}

//C语言标准规定了
//sizeof(long) >= sizeof(int)
//       4               4
//       8               4
//long double     double
//
//

//int main()
//{
//	printf("%d\n", sizeof(long));
//	return 0;
//}

//int main()
//{
//	int ch = getchar();//A
//	printf("%c\n", ch);//A
//	putchar(ch);//打印字符
//	return 0;
//}
//
//int main()
//{
//	int ch = 0;
//	//
//	//EOF - end of file 文件结束标志
//	//#define EOF    (-1)
//	//在函数读取失败的时候返回了EOF
//	//scanf 函数读取成功，返回的是读取到的数据的个数
//	//读取失败返回EOF
//	//getchar 读取成功返回字符的ASCII码值
//	//读取失败返回EOF
//	//ctrl+Z - 回让scanf 或者 getchar 返回EOF
//	/*while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}*/
//
//	return 0;
//}
//
//int main()
//{
//	//123456
//	char password[20] = {0};
//	printf("请输入密码:>");
//	scanf("%s", password);//123456
//	printf("请确认密码(Y/N):");
//	char input = 0;
//	//scanf("%c", &input);//Y
//	//把\n处理掉
//	//getchar();//\n
//
//	//清理掉缓冲区中剩余的数据
//	/*while (getchar() != '\n')
//	{
//		;
//	}*/
//
//	//清空缓冲区
//	//fflush(stdin);//达不到效果，因为在新版本的VS上这个函数的功能被取消了
//
//	input = getchar();
//	if ('Y' == input)
//		printf("确认成功\n");
//	else
//		printf("确认失败\n");
//
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	char ch = '\0';
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch > '9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}
//
//

int main()
{
	int n = 10;
	scanf("%d", &n);

	return 0;
}