////1. 普通的命名空间，里面可以定义变量，也可以定义函数
//namespace xjt
//{
//	int printf = 1;
//	int rand = 2;
//	int Add(int a, int b)
//	{
//		return a + b;
//	}
//}
//
////2.命名空间可以嵌套
//namespace xjt
//{
//	int printf = 1;
//	int rand = 2;
//	int Add(int a, int b)
//	{
//		return a + b;
//	}
//	namespace xjt2
//	{
//		int a = 0;
//		int Sub(int a, int b)
//		{
//			return a - b;
//		}
//	}
//}
//
//
//namespace xjt
//{
//	int printf = 1;
//	int rand = 2;
//	int Add(int a, int b)
//	{
//		return a + b;
//	}
//}
//#include<iostream>
//
//int main()
//{
//
//	printf("%d\n", printf);  //这样打印出来的结果和我们预期的不一样，因为你这样调用的是printf的地址通过下面两个可以加深理解
//	printf("%p\n", printf);  //6A35CE70
//	printf("%p\n", rand);   //6A42FAB0;
//}
//
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int a = 1;
//	float b = 2.1;
//	double c = 2.111;
//	char arr[10] = { 0 };
//	char d[] = "hello world";
//	cin >> arr;
//	cout << arr << endl;
//	cout << a << endl;
//	cout << b << endl;
//	cout << c << endl;
//	cout << d << endl;
//	return 0;
//}
////缺省参数
//#include<iostream>
//
//using namespace std;
//
////这儿的0就相当于缺省参数，如果实参什么都没传过来，缺省参数就赋值给a，相当于备胎的意思。
//void func(int a = 0)
//{
//	cout << a << endl;
//}
//
//int main()
//{
//	func(10);
//	func();  //在c语言中这样写肯定是不行的，但是在c++中有了缺省参数，如果你什么都不传，只要你前面有缺省参数的存在，就能过。
//	return 0;
//}
//
