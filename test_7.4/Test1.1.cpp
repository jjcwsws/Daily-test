#include<iostream>
using namespace std;


void func(const string& s)
{
	//string::const_reverse_iterator it = s.rbegin();
	auto it = s.rbegin();
	while (it != s.rend())
	{
		// *it = 'x';

		cout << *it << " ";
		++it;
	}
	cout << endl;
	//auto it = s.crbegin();
	//while (it != s.crend())
	//{
	//	// *it = 'x';

	//	cout << *it << " ";
	//	++it;
	//}
	//cout << endl;
}

//int main()
//{
//	string s1("hello world");
//	// ����
//	// 1���±�+[]
//	// 2��������
//	// 3����Χfor
//
//	string::reverse_iterator it1 = s1.rbegin();
//	while (it1 != s1.rend())
//	{
//		//*it1 = 'x';
//
//		cout << *it1 << " ";
//		++it1;
//	}
//	cout << endl;
//
//	func(s1);
//
//	return 0;
//}

// reserve ����
// reverse ��ת ����
//int main()
//{
//	try
//	{
//		string s1;
//		string s2("hello world");
//
//		// ʵ����û�вο���ʹ�õļ�ֵ
//		cout << s1.max_size() << endl;
//		cout << s2.max_size() << endl;
//		s1.reserve(s1.max_size());
//	}
//	catch (const exception& e)
//	{
//		cout << e.what() << endl;
//	}
//
//	return 0;
//}

//int main()
//{
//	try
//	{
//		string s1;
//		string s2("hello worldxxxxxxxxxxxxx");
//		// ȷ����Ҫ���ٿռ䣬��ǰ���ÿռ伴��
//		s1.reserve(500);
//
//		size_t old = s1.capacity();
//		cout << old << endl;
//
//
//		for (size_t i = 0; i < 500; i++)
//		{
//			s1.push_back('x');
//			if (old != s1.capacity())
//			{
//				cout << s1.capacity() << endl;
//				old = s1.capacity();
//			}
//		}
//	}
//	catch (const exception& e)
//	{
//		cout << e.what() << endl;
//	}
//
//	return 0;
//}

//int main()
//{
//	string s1;
//	cout << s1.capacity() << endl;
//	s1.reserve(10);
//	cout << s1.capacity() << endl;
//
//
//	string s2("hello worldxxxxxxxxxxxxx");
//	cout << s2.capacity() << endl;
//	s2.reserve(10);
//	cout << s2.capacity() << endl;
//	
//	return 0;
//}

//int main()
//{
//	string s1("hello world");
//	cout << s1.size() << endl;
//	cout << s1.capacity() << endl;
//	cout << s1 << endl;
//
//	// > capacity -�� ����+β��
//	//s1.resize(100);
//	s1.resize(100, 'x');
//	cout << s1.size() << endl;
//	cout << s1.capacity() << endl;
//	cout << s1 << endl;
//
//	// size < n < capacity  -> β��
//	string s2("hello world");
//	cout << s2.size() << endl;
//	cout << s2.capacity() << endl;
//	cout << s2 << endl;
//	s2.resize(12);
//	cout << s2.size() << endl;
//	cout << s2.capacity() << endl;
//
//	// n < size -> ɾ�����ݣ�����ǰn��
//	string s3("hello world");
//	cout << s3.size() << endl;
//	cout << s3.capacity() << endl;
//	cout << s3 << endl;
//	s3.resize(5);
//	cout << s3.size() << endl;
//	cout << s3.capacity() << endl;
//
//	string s5;
//	s5.resize(100, '#');
//	cout << s5 << endl;
//
//	return 0;
//}

//int main()
//{
//	try
//	{
//		string s1("hello world");
//		cout << s1[11] << endl;
//		//cout << s1[20] << endl;
//
//		cout << s1.at(20) << endl;	
//	}
//	catch (const exception& e)
//	{
//		cout << e.what() << endl;
//	}
//
//	return 0;
//}

// ��  +=(push_back/append)/insert
// ɾ  erase
// ��  []
// ��  []/������

//int main()
//{
//	// 21:14
//	string s1("hello");
//	s1.push_back(' ');
//	s1.append("world");
//	cout << s1 << endl;
//
//	string s2 = "xxxx";
//	const string& s3 = "xxxx";
//
//	s2.append(++s1.begin(), --s1.end());
//	cout << s2 << endl;
//
//	s1 += '!';
//	s1 += "xxxxx";
//	s1 += s2;
//	cout << s1 << endl;
//
//	return 0;
//}

// strxxx
int main()
{

	return 0;
}