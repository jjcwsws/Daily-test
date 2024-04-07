#define _CRT_SECURE_NO_WARNINGS 1

#include <string.h>

//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//void set_stu(struct Stu t)
//{
//	t.age = 20;
//	//t.name = "张三";//err
//	strcpy(t.name, "张三");//字符串拷贝
//}
//
//void print_stu(struct Stu t)
//{
//	printf("%s %d\n", t.name, t.age);
//}
//
//int main()
//{
//	struct Stu s = {0};
//	set_stu(s);
//	print_stu(s);
//	return 0;
//}

struct Stu
{
	char name[20];
	int age;
};

//void set_stu(struct Stu* ps)
//{
//	(*ps).age = 20;
//	//t.name = "张三";//err
//	strcpy((*ps).name, "张三");//字符串拷贝
//}

//void set_stu(struct Stu* ps)
//{
//	ps->age = 20;//结构体指针->结构体成员
//	//t.name = "张三";//err
//	strcpy(ps->name, "张三");//字符串拷贝
//}


//void print_stu(struct Stu t)
//{
//	printf("%s %d\n", t.name, t.age);
//}
//
//int main()
//{
//	struct Stu s = { 0 };
//	set_stu(&s);
//	print_stu(s);
//	return 0;
//}
//


//#include <stdio.h>
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
//




//写一个函数返回参数二进制中 1 的个数。
//比如： 15    00001111    4 个 1
//
//int number_of_1(unsigned int m)
//{
//	int count = 0;
//	while (m)
//	{
//		if (m % 2 == 1)
//			count++;
//		m /= 2;
//	}
//	return count;
//}


//int number_of_1(int m)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((m >> i) & 1) == 1)
//			count++;
//	}
//	return count;
//}
//
//int number_of_1(int m)
//{
//	int count = 0;
//	while (m)
//	{
//		m = m & (m - 1);
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	//-1
//	//10000000000000000000000000000001
//	//11111111111111111111111111111110
//	//11111111111111111111111111111111--> 32
//	int n = 0;
//	scanf("%d", &n);//15
//	int ret = number_of_1(n);
//	printf("%d\n", ret);//4
//	return 0;
//}
//

//获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	//30 28 26 ... 4 2 0
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//
//	return 0;
//}
//

//
//两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
//输入例子 :
//1999 2299
//输出例子 : 7
//

//int number_of_1(int m)
//{
//	int count = 0;
//	while (m)
//	{
//		m = m & (m - 1);
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	//异或 - 相同为0，相异为1
//	int ret = number_of_1(m ^ n);
//	printf("%d\n", ret);
//
//	return 0;
//}
////

int main() 
{
	int buf[10] = { 0 };
	int i = 0;
	int len = 9;
	for (i = 0; i < 10; ++i) 
	{
		scanf("%d", &buf[i]);
	}
	for (i = 0; i <= len; ++i) 
	{
		if (buf[i] % 2 == 0) 
		{
			int tmp = buf[len];
			buf[len] = buf[i];
			buf[i] = tmp;
			len = len - 1;
			i = i - 1;
		}
	}
	for (i = 0; i < 10; ++i) 
	{
		printf("%d ", buf[i]);
	}
	return 0;
}