#pragma once

#include"RBTree.h"

namespace bit
{
	template<class K, class V>
	class map
	{
		struct MapKeyOfT
		{
			const K& operator()(const pair<K, V>& kv)
			{
				return kv.first;
			}
		};
	public:
		typedef typename RBTree<K, pair<const K, V>, MapKeyOfT>::iterator iterator;
		typedef typename RBTree<K, const K, MapKeyOfT>::const_iterator const_iterator;

		iterator begin()
		{
			return _t.begin();
		}

		iterator end()
		{
			return _t.end();
		}

		const_iterator begin() const
		{
			return _t.begin();
		}

		const_iterator end() const
		{
			return _t.end();
		}

		pair<iterator, bool> insert(const pair<K, V>& kv)
		{
			return _t.Insert(kv);
		}

		iterator find(const K& key)
		{
			return _t.Find(key);
		}

		V& operator[](const K& key)
		{
			pair<iterator, bool> ret = insert(make_pair(key, V()));
			return ret.first->second;
		}

	private:
		RBTree<K, pair<const K, V>, MapKeyOfT> _t;
	};

	void test_map1()
	{
		map<int, int> m;
		int a[] = { 4, 2, 6, 1, 3, 5, 15, 7, 16, 14 };
		for (auto e : a)
		{
			m.insert(make_pair(e, e));
		}

		map<int, int>::iterator it = m.begin();
		while (it != m.end())
		{
			//it->first += 100;
			it->second += 100;

			cout << it->first << ":" << it->second << endl;
			++it;
		}
		cout << endl;
	}

	void test_map2()
	{
		string arr[] = { "Æ»¹û", "Î÷¹Ï", "Æ»¹û", "Î÷¹Ï", "Æ»¹û", "Æ»¹û", "Î÷¹Ï",
	"Æ»¹û", "Ïã½¶", "Æ»¹û", "Î÷¹Ï", "Ïã½¶", "²ÝÝ®" };
		map<string, int> countMap;
		for (auto& e : arr)
		{
			/*if (e == "²ÝÝ®")
			{
				int i = 0;
			}*/

			countMap[e]++;
		}

		for (auto& kv : countMap)
		{
			cout << kv.first << ":" << kv.second << endl;
		}
		cout << endl;
	}
}