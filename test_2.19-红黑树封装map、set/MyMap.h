#pragma once
#include "RBTree.h"
namespace bit
{
	template<class K,class V>
	class Map
	{
		struct MapKeyOfT
		{
			const K& operator()(const pair<K,V>& kv)
			{
				return kv.first;
			}
		};
	public:
		typedef typename RBTree<K, pair<K, V>, MapKeyOfT>::iterator iterator;

		iterator begin()
		{
			return _rbt.begin();
		}
		iterator end()
		{
			return _rbt.end();
		}

		pair<iterator,bool> insert(const pair<K,V>& kv)
		{
			return _rbt.Insert(kv);
		}
	private:
		RBTree<K, pair<K,V>, MapKeyOfT> _rbt;
	};

}
