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
		typedef typename RBTree<K, K, SetKeyOfT>::iterator iterator;//set�ĵ�����ʹ�õľ��Ǻ�����ĵ�����

		iterator begin()//��ȡset����Ԫ��λ�õĵ�����������ȡ���������СԪ�صĵ�����
		{
			return _rbt.begin();
		}
		iterator end()
		{
			return _rbt.end();
		}

		pair<iterator,bool> insert(const K& key)//����Ԫ��ʵ�ʾ��ǲ��뵽������ڵ���ȥ
		{
			return _rbt.Insert(key);
		}
	private:
		RBTree<K,const K,SetKeyOfT> _rbt;//��set�Ĳ��������ǶԺ�����Ĳ���������һ�����������
	};
}
