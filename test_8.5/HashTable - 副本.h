#pragma once

template<class K>
struct HashFunc
{
	size_t operator()(const K& key)
	{
		return (size_t)key;
	}
};

// 特化
template<>
struct HashFunc<string>
{
	size_t operator()(const string& s)
	{
		size_t hash = 0;
		for (auto e : s)
		{
			hash += e;
			hash *= 131;
		}

		return hash;
	}
};

namespace open_address
{
	enum State
	{
		EMPTY,
		EXIST,
		DELETE
	};

	template<class K, class V>
	struct HashData
	{
		pair<K, V> _kv;
		State _state = EMPTY; // 标记
	};

	//struct HashFuncString
	//{
	//	size_t operator()(const string& s)
	//	{
	//		// "abcd"
	//		// "bcad"
	//		// "aadd"
	//		size_t hash = 0;
	//		for (auto e : s)
	//		{
	//			hash += e;
	//			hash *= 131;
	//		}
	//
	//		return hash;
	//	}
	//};

	template<class K, class V, class Hash = HashFunc<K>>
	class HashTable
	{
	public:
		HashTable(size_t size = 10)
		{
			_tables.resize(size);
		}

		HashData<K, V>* Find(const K& key)
		{
			Hash hs;
			// 线性探测
			size_t hashi = hs(key) % _tables.size();
			while (_tables[hashi]._state != EMPTY)
			{
				if (key == _tables[hashi]._kv.first
					&& _tables[hashi]._state == EXIST)
				{
					return &_tables[hashi];
				}

				++hashi;
				hashi %= _tables.size();
			}

			return nullptr;
		}

		bool Insert(const pair<K, V>& kv)
		{
			if (Find(kv.first))
				return false;

			// 扩容的问题  10:50继续
			//if ((double)_n / (double)_tables.size() >= 0.7)
			if (_n * 10 / _tables.size() >= 7)
			{
				//size_t newSize = _tables.size() * 2;
				//vector<HashData> newTables(newSize);
				//// 遍历旧表，映射到新表
				////....
				//_tables.swap(newTables);

				HashTable<K, V, Hash> newHT(_tables.size() * 2);
				// 遍历旧表，插入到新表
				for (auto& e : _tables)
				{
					if (e._state == EXIST)
					{
						newHT.Insert(e._kv);
					}
				}
				_tables.swap(newHT._tables);
			}

			Hash hs;
			// 线性探测
			size_t hashi = hs(kv.first) % _tables.size();
			while (_tables[hashi]._state == EXIST)
			{
				++hashi;
				hashi %= _tables.size();
			}

			_tables[hashi]._kv = kv;
			_tables[hashi]._state = EXIST;
			++_n;

			return true;
		}

		bool Erase(const K& key)
		{
			HashData<K, V>* ret = Find(key);
			if (ret)
			{
				_n--;
				ret->_state = DELETE;
				return true;
			}
			else
			{
				return false;
			}
		}

	private:
		vector<HashData<K, V>> _tables;
		size_t _n = 0;  // 实际存储的数据个数
	};

	void TestHT1()
	{
		int a[] = { 1,4,24,34,7,44,17,37 };
		HashTable<int, int> ht;
		for (auto e : a)
		{
			ht.Insert(make_pair(e, e));
		}

		for (auto e : a)
		{
			auto ret = ht.Find(e);
			if (ret)
			{
				cout << ret->_kv.first << ":E" << endl;
			}
			else
			{
				cout << ret->_kv.first << ":D" << endl;
			}
		}
		cout << endl;

		ht.Erase(34);
		ht.Erase(4);

		for (auto e : a)
		{
			auto ret = ht.Find(e);
			if (ret)
			{
				cout << ret->_kv.first << ":E" << endl;
			}
			else
			{
				cout << e << ":D" << endl;
			}
		}
		cout << endl;
	}

	struct Date
	{
		int _year;
		int _month;
		int _day;
	};

	struct HashFuncDate
	{
		// 2024/6/3
		// 2024/3/6
		size_t operator()(const Date& d)
		{
			size_t hash = 0;
			hash += d._year;
			hash *= 131;

			hash += d._month;
			hash *= 131;

			hash += d._day;
			hash *= 131;

			return hash;
		}
	};

	struct Person
	{
		string _name;
		string _id;   // 身份证号码
		string _tel;
		int _age;
		string _class;

		string _address;  // 
		//...
	};

	// 11：57继续
	struct HashFuncPerson
	{
		// 2024/6/3
		// 2024/3/6
		size_t operator()(const Person& p)
		{
			size_t hash = 0;
			for (auto e : p._id)
			{
				hash += e;
				hash *= 131;
			}

			return hash;
		}
	};

	void TestHT2()
	{
		HashTable<string, string> dict;
		dict.Insert(make_pair("sort", "排序"));
		dict.Insert(make_pair("string", "字符串"));

		//HashFuncString hfs;
		//cout << hfs("bacd") << endl;
		//cout << hfs("abcd") << endl;
		//cout << hfs("aadd") << endl;

		HashTable<Date, string, HashFuncDate> DateHash;
	}
}

namespace hash_bucket
{
	template<class K, class V>
	struct HashNode
	{
		HashNode<K, V>* _next;
		pair<K, V> _kv;

		HashNode(const pair<K, V>& kv)
			:_next(nullptr)
			,_kv(kv)
		{}
	};

	template<class K, class V, class Hash = HashFunc<K>>
	class HashTable
	{
		typedef HashNode<K, V> Node;
	public:
		HashTable()
		{
			_tables.resize(10, nullptr);
			_n = 0;
		}

		~HashTable()
		{
			for (size_t i = 0; i < _tables.size(); i++)
			{
				Node* cur = _tables[i];
				while (cur)
				{
					Node* next = cur->_next;
					delete cur;

					cur = next;
				}
				_tables[i] = nullptr;
			}
		}

		bool Insert(const pair<K, V>& kv)
		{
			if (Find(kv.first))
				return false;

			Hash hs;

			// 负载因子到1就扩容
			if (_n == _tables.size())
			{
				vector<Node*> newTables(_tables.size()*2, nullptr);
				for (size_t i = 0; i < _tables.size(); i++)
				{
					// 取出旧表中节点，重新计算挂到新表桶中
					Node* cur = _tables[i];
					while (cur)
					{
						Node* next = cur->_next;

						// 头插到新表
						size_t hashi = hs(cur->_kv.first) % newTables.size();
						cur->_next = newTables[hashi];
						newTables[hashi] = cur;

						cur = next;
					}

					_tables[i] = nullptr;
				}

				_tables.swap(newTables);
			}

			size_t hashi = hs(kv.first) % _tables.size();
			Node* newnode = new Node(kv);

			// 头插
			newnode->_next = _tables[hashi];
			_tables[hashi] = newnode;

			++_n;
			return true;
		}

		Node* Find(const K& key)
		{
			Hash hs;
			size_t hashi = hs(key) % _tables.size();
			Node* cur = _tables[hashi];
			while (cur)
			{
				if (cur->_kv.first == key)
				{
					return cur;
				}

				cur = cur->_next;
			}

			return nullptr;
		}

		bool Erase(const K& key)
		{
			Hash hs;
			size_t hashi = hs(key) % _tables.size();
			Node* prev = nullptr;
			Node* cur = _tables[hashi];
			while (cur)
			{
				if (cur->_kv.first == key)
				{
					// 删除
					if (prev)
					{
						prev->_next = cur->_next;
					}
					else
					{
						_tables[hashi] = cur->_next;
					}

					delete cur;

					--_n;
					return true;
				}

				prev = cur;
				cur = cur->_next;
			}

			return false;
		}


		void Some()
		{
			size_t bucketSize = 0;
			size_t maxBucketLen = 0;
			size_t sum = 0;
			double averageBucketLen = 0;

			for (size_t i = 0; i < _tables.size(); i++)
			{
				Node* cur = _tables[i];
				if (cur)
				{
					++bucketSize;
				}

				size_t bucketLen = 0;
				while (cur)
				{
					++bucketLen;
					cur = cur->_next;
				}

				sum += bucketLen;

				if (bucketLen > maxBucketLen)
				{
					maxBucketLen = bucketLen;
				}
			}

			averageBucketLen = (double)sum / (double)bucketSize;

			printf("load factor:%lf\n", (double)_n/ _tables.size());
			printf("all bucketSize:%d\n", _tables.size());
			printf("bucketSize:%d\n", bucketSize);
			printf("maxBucketLen:%d\n", maxBucketLen);
			printf("averageBucketLen:%lf\n\n", averageBucketLen);
		}

	private:
		//vector<list<pair<K, V>>> _tables;
		vector<Node*> _tables; // 指针数组
		size_t _n;
	};

	void TestHT1()
	{
		HashTable<int, int> ht;
		int a[] = { 1,4,24,34,7,44,17,37 };
		for (auto e : a)
		{
			ht.Insert(make_pair(e, e));
		}

		ht.Insert(make_pair(5, 5));
		ht.Insert(make_pair(15, 15));
		ht.Insert(make_pair(25, 25));

		ht.Erase(5);
		ht.Erase(15);
		ht.Erase(25);
		ht.Erase(35);

		//ht.Print();

		HashTable<string, string> dict;
		dict.Insert(make_pair("sort", "排序"));
		dict.Insert(make_pair("string", "字符串"));
	}

	void TestHT2()
	{
		const size_t N = 30000;

		unordered_set<int> us;
		set<int> s;
		HashTable<int, int> ht;

		vector<int> v;
		v.reserve(N);
		srand(time(0));
		for (size_t i = 0; i < N; ++i)
		{
			//v.push_back(rand()); // N比较大时，重复值比较多
			v.push_back(rand() + i); // 重复值相对少
			//v.push_back(i); // 没有重复，有序
		}

		// 21:15
		size_t begin1 = clock();
		for (auto e : v)
		{
			s.insert(e);
		}
		size_t end1 = clock();
		cout << "set insert:" << end1 - begin1 << endl;

		size_t begin2 = clock();
		for (auto e : v)
		{
			us.insert(e);
		}
		size_t end2 = clock();
		cout << "unordered_set insert:" << end2 - begin2 << endl;

		size_t begin10 = clock();
		for (auto e : v)
		{
			ht.Insert(make_pair(e, e));
		}
		size_t end10 = clock();
		cout << "HashTbale insert:" << end10 - begin10 << endl << endl;

		size_t begin3 = clock();
		for (auto e : v)
		{
			s.find(e);
		}
		size_t end3 = clock();
		cout << "set find:" << end3 - begin3 << endl;

		size_t begin4 = clock();
		for (auto e : v)
		{
			us.find(e);
		}
		size_t end4 = clock();
		cout << "unordered_set find:" << end4 - begin4 << endl;

		size_t begin11 = clock();
		for (auto e : v)
		{
			ht.Find(e);
		}
		size_t end11 = clock();
		cout << "HashTable find:" << end11 - begin11 << endl << endl;

		cout << "插入数据个数：" << us.size() << endl << endl;
		ht.Some();
	
		size_t begin5 = clock();
		for (auto e : v)
		{
			s.erase(e);
		}
		size_t end5 = clock();
		cout << "set erase:" << end5 - begin5 << endl;

		size_t begin6 = clock();
		for (auto e : v)
		{
			us.erase(e);
		}
		size_t end6 = clock();
		cout << "unordered_set erase:" << end6 - begin6 << endl;

		size_t begin12 = clock();
		for (auto e : v)
		{
			ht.Erase(e);
		}
		size_t end12 = clock();
		cout << "HashTable Erase:" << end12 - begin12 << endl << endl;
	}
}
