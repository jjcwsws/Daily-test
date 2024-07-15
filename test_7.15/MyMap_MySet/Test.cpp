#include<iostream>
using namespace std;
#include<set>
#include<map>

void test_set1()
{
	// 排序+去重
	set<int> s;
	s.insert(5);
	s.insert(1);
	s.insert(6);
	s.insert(3);
	s.insert(4);
	s.insert(5);
	s.insert(1);

	set<int>::iterator it = s.begin();
	while (it != s.end())
	{
		cout << *it << " ";
		++it;
	}
	cout << endl;

	set<int>::iterator pos = s.find(5);
	if (pos != s.end())
	{
		cout << "找到了" << endl;
		s.erase(pos);
	}

	for (auto e : s)
	{
		cout << e << " ";
	}
	cout << endl;

	// 在就删除，不在就不做任何处理
	s.erase(3);
	s.erase(30);
	for (auto e : s)
	{
		cout << e << " ";
	}
	cout << endl;

	// 这个值在，找到有效位置，再进行删除
	//pos = s.find(5);
	//s.erase(pos);

	if (s.count(1))
	{
		cout << "在" << endl;
	}
	else
	{
		cout << "不在" << endl;
	}
}

void test_set2()
{
	// 排序+去重
	set<int> s;
	s.insert(5);
	s.insert(1);
	s.insert(6);
	//s.insert(3);
	s.insert(4);

	// [60, 70]
	// [)
	auto start = s.lower_bound(3);  // >=val
	cout << *start << endl;

	auto finish = s.upper_bound(5);  // >val
	cout << *finish << endl;
	//s.erase(start, finish);

	while (start != finish)
	{
		cout << *start << " ";
		++start;
	}
	cout << endl;

	for (auto e : s)
	{
		cout << e << " ";
	}
	cout << endl;
}

void test_set3()
{
	// 排序
	multiset<int> s;
	s.insert(5);
	s.insert(1);
	s.insert(6);
	s.insert(3);
	s.insert(4);
	s.insert(5);
	s.insert(1);
	s.insert(1);
	s.insert(5);
	s.insert(1);
	s.insert(1);
	s.insert(2);
	s.insert(7);
	s.insert(10);


	multiset<int>::iterator it = s.begin();
	while (it != s.end())
	{
		cout << *it << " ";
		++it;
	}
	cout << endl;

	cout << s.count(5) << endl;
	cout << s.count(1) << endl;

	it = s.find(5);
	while (it != s.end() && *it == 5)
	{
		// *it += 100;

		cout << *it << " ";
		++it;
	}
	cout << endl;
}

void test_map1()
{
	map<string, string> dict;
	dict.insert(pair<string, string>("sort", "排序"));

	//pair<string, string> kv("string", "字符串");
	pair<string, string> kv = { "string", "字符串" };
	dict.insert(kv);

	// C++11 多参数隐式类型转换(构造函数)
	dict.insert({ "apple", "苹果" });

	// C++98
	dict.insert(make_pair("sort", "排序"));
	
	//map<string, string>::iterator it = dict.begin();
	auto it = dict.begin();
	while (it != dict.end())
	{
		//cout << *it << endl;
		//cout << (*it).first << (*it).second << endl;
		cout << it->first << it->second << endl;
		++it;
	}
	cout << endl;

	for (auto& kv : dict)
	{
		cout << kv.first << ":" << kv.second << endl;
	}
	cout << endl;
}

void test_map2()
{
	// key相同，value不同，不会插入也不会更新
	map<string, string> dict;
	dict.insert(make_pair("sort", "排序"));
	dict.insert(make_pair("string", "字符串"));
	dict.insert(make_pair("sort", "xxx"));

	dict["left"]; // 插入
	cout << dict["sort"] << endl; // 查找
	dict["sort"] = "xxx"; // 修改
	dict["right"] = "右边"; // 插入+修改

	for (auto& kv : dict)
	{
		cout << kv.first << ":" << kv.second << endl;
	}
	cout << endl;
}

void test_map3()
{
	multimap<string, string> dict;
	dict.insert(make_pair("sort", "排序"));
	dict.insert(make_pair("string", "字符串"));
	dict.insert(make_pair("sort", "xxx"));
	dict.insert(make_pair("sort", "排序"));

	for (auto& kv : dict)
	{
		cout << kv.first << ":" << kv.second << endl;
	}
	cout << endl;
}

//V& operator[](const K& key)
//{
//	pair<iterator, bool> ret = insert(make_pair(key, V()));
//	return ret.first->second;
//}

void test_map4()
{
	string arr[] = { "苹果", "西瓜", "苹果", "西瓜", "苹果", "苹果", "西瓜",
"苹果", "香蕉", "苹果", "西瓜", "香蕉", "草莓" };
	map<string, int> countMap;
	//for (auto& e : arr)
	//{
	//	map<string, int>::iterator it = countMap.find(e);
	//	if (it != countMap.end())
	//	{
	//		it->second++;
	//	}
	//	else
	//	{
	//		countMap.insert(make_pair(e, 1));
	//	}
	//}

	//for (auto& e : arr)
	//{
	//	pair<map<string, int>::iterator, bool> ret;
	//	ret = countMap.insert(make_pair(e, 1));

	//	// 已经存在了
	//	if (ret.second == false)
	//	{
	//		ret.first->second++;
	//	}
	//}

	for (auto& e : arr)
	{
		countMap[e]++;
	}

	for (auto& kv : countMap)
	{
		//kv.first = "xxx";
		//kv.second = 1;
		cout << kv.first << ":" << kv.second << endl;
	}
	cout << endl;
}

#include"AVLTree.h"
#include"RBTree.h"

//void TestRBTree_AVLTree()
//{
//	const int N = 10000000;
//	vector<int> v;
//	v.reserve(N);
//	srand(time(0));
//
//	for (size_t i = 0; i < N; i++)
//	{
//		v.push_back(rand() + i);
//		//v.push_back(i);
//		//cout << v.back() << endl;
//	}
//
//	RBTree<int, int> t1;
//	AVLTree<int, int> t2;
//
//	size_t begin1 = clock();
//	for (auto e : v)
//	{
//		t1.Insert(make_pair(e, e));
//	}
//	size_t end1 = clock();
//
//	size_t begin2 = clock();
//	for (auto e : v)
//	{
//		t2.Insert(make_pair(e, e));
//	}
//	size_t end2 = clock();
//
//	cout << "RBTree RoateSize:" << t1.GetRotateSize() << endl;
//	cout << "AVLTree RoateSize:" << t2.GetRotateSize() << endl;
//
//
//	cout << "RBTree Insert:" << end1 - begin1 << endl;
//	cout << "AVLTree Insert:" << end2 - begin2 << endl;
//
//	cout << "RBTree IsBalance:" << t1.IsBalance() << endl;
//	cout << "AVLTree IsBalance:" << t2.IsBalance() << endl;
//
//	cout << "RBTree Height:" << t1.Height() << endl;
//	cout << "RBTree Size:" << t1.Size() << endl;
//
//	cout << "AVLTree Height:" << t2.Height() << endl;
//	cout << "AVLTree Size:" << t2.Size() << endl;
//
//	size_t begin3 = clock();
//	// 确定在的值
//	for (auto e : v)
//	{
//		t1.Find(e);
//	}
//
//	// 随机值
//	/*for (size_t i = 0; i < N; i++)
//	{
//		t1.Find((rand() + i));
//	}*/
//
//	size_t end3 = clock();
//
//	size_t begin4 = clock();
//	// 确定在的值
//	for (auto e : v)
//	{
//		t2.Find(e);
//	}
//
//	// 随机值
//	/*for (size_t i = 0; i < N; i++)
//	{
//		t2.Find((rand() + i));
//	}*/
//
//	size_t end4 = clock();
//
//	cout << "RBTree Find:" << end3 - begin3 << endl;
//	cout << "AVLTree Find:" << end4 - begin4 << endl;
//}

#include"MyMap.h"
#include"MySet.h"

int main()
{
	//test_set3();
	//test_map2();
	//TestAVLTree2();
	//TestRBTree2();
	//TestRBTree_AVLTree();

	bit::test_map2();
	//bit::test_set1();

	return 0;
}