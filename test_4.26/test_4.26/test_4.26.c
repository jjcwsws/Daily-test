////1. ��ͨ�������ռ䣬������Զ��������Ҳ���Զ��庯��
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
////2.�����ռ����Ƕ��
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
//	printf("%d\n", printf);  //������ӡ�����Ľ��������Ԥ�ڵĲ�һ������Ϊ���������õ���printf�ĵ�ַͨ�������������Լ������
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
////ȱʡ����
//#include<iostream>
//
//using namespace std;
//
////�����0���൱��ȱʡ���������ʵ��ʲô��û��������ȱʡ�����͸�ֵ��a���൱�ڱ�̥����˼��
//void func(int a = 0)
//{
//	cout << a << endl;
//}
//
//int main()
//{
//	func(10);
//	func();  //��c����������д�϶��ǲ��еģ�������c++������ȱʡ�����������ʲô��������ֻҪ��ǰ����ȱʡ�����Ĵ��ڣ����ܹ���
//	return 0;
//}
//
