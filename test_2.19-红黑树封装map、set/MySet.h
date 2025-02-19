#pragma once
#include "RBTree.h"
namespace bit
{
	template<class K>
	class Set
	{
		struct SetKeyOfT
		{
			K& operator()(const K& key)
			{
				return key;
			}
		};
	public:
		typedef typename RBTree<K, K, SetKeyOfT>::iterator iterator;//set的迭代器使用的就是红黑树的迭代器

		iterator begin()//获取set的首元素位置的迭代器，即获取红黑树的最小元素的迭代器
		{
			return _rbt.begin();
		}
		iterator end()
		{
			return _rbt.end();
		}

		pair<iterator,bool> insert(const K& key)//插入元素实际就是插入到红黑树节点中去
		{
			return _rbt.Insert(key);
		}
	private:
		RBTree<K,const K,SetKeyOfT> _rbt;//对set的操作，就是对红黑树的操作，定义一个红黑树对象
	};
}
