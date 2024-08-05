#include<iostream>
#include<unordered_map>
#include<unordered_set>
#include<set>
#include<map>
using namespace std;

#include"HashTable.h"


void test_set1()
{
	set<int> s;
	s.insert(3);
	s.insert(1);
	s.insert(5);
	s.insert(7);

	for (auto e : s)
	{
		cout << e << " ";
	}
	cout << endl;

	unordered_set<int> us;
	us.insert(3);
	us.insert(1);
	us.insert(5);
	us.insert(7);

	for (auto e : us)
	{
		cout << e << " ";
	}
	cout << endl;
}

void test_map1()
{
	unordered_map<string, string> dict;
	dict.insert(make_pair("sort", "����"));
	dict.insert(make_pair("string", "�ַ���"));
	cout << dict.load_factor() << endl;
	cout << dict.max_load_factor() << endl;


	//unordered_map<Date, string, HashFuncDate> dataMap;
}

//int main()
//{
//	const size_t N = 10000000;
//
//	unordered_set<int> us;
//	set<int> s;
//
//	vector<int> v;
//	v.reserve(N);
//	srand(time(0));
//	for (size_t i = 0; i < N; ++i)
//	{
//		v.push_back(rand()); // N�Ƚϴ�ʱ���ظ�ֵ�Ƚ϶�
//		//v.push_back(rand()+i); // �ظ�ֵ�����
//		//v.push_back(i); // û���ظ�������
//	}
//
//	// 21:15
//	size_t begin1 = clock();
//	for (auto e : v)
//	{
//		s.insert(e);
//	}
//	size_t end1 = clock();
//	cout << "set insert:" << end1 - begin1 << endl;
//
//	size_t begin2 = clock();
//	for (auto e : v)
//	{
//		us.insert(e);
//	}
//	size_t end2 = clock();
//	cout << "unordered_set insert:" << end2 - begin2 << endl;
//
//
//	size_t begin3 = clock();
//	for (auto e : v)
//	{
//		s.find(e);
//	}
//	size_t end3 = clock();
//	cout << "set find:" << end3 - begin3 << endl;
//
//	size_t begin4 = clock();
//	for (auto e : v)
//	{
//		us.find(e);
//	}
//	size_t end4 = clock();
//	cout << "unordered_set find:" << end4 - begin4 << endl << endl;
//
//	cout <<"�������ݸ�����"<< s.size() << endl;
//	cout <<"�������ݸ�����" << us.size() << endl << endl;
//
//	size_t begin5 = clock();
//	for (auto e : v)
//	{
//		s.erase(e);
//	}
//	size_t end5 = clock();
//	cout << "set erase:" << end5 - begin5 << endl;
//
//	size_t begin6 = clock();
//	for (auto e : v)
//	{
//		us.erase(e);
//	}
//	size_t end6 = clock();
//	cout << "unordered_set erase:" << end6 - begin6 << endl << endl;
//	
//	return 0;
//}

//int main()
//{
//	test_set1();
//
//	return 0;
//}

//class Solution {
//public:
//	int firstUniqChar(string s) {
//		int countA[26] = { 0 };
//		// ͳ�ƴ���
//		for (auto ch : s)
//		{
//			countA[ch - 'a']++;
//		}
//
//		for (int i = 0; i < s.size(); ++i)
//		{
//			if (countA[s[i] - 'a'] == 1)
//			{
//				return i;
//			}
//		}
//
//		return -1;
//	}
//};

#include"MyOrderedMap.h"
#include"MyOrderedSet.h"

int main()
{
	//hash_bucket::TestHT1();
	//TestHT2();
	//test_map1();

	bit::test_set1();
	bit::test_map1();


	return 0;
}