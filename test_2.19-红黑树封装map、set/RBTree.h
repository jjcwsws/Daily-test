#pragma once
#include <iostream>
#include <assert.h>
using namespace std;


namespace bit
{



	enum Color//���ں�ڽڵ㣬��ö�ٽṹ����ʾ
	{
		RED,
		BLACK
	};



	template<class T>
	struct RBTreeNode
	{
		RBTreeNode(const T& data, Color color = RED)
			:_left(nullptr)
			,_right(nullptr)
			,_parent(nullptr)
			,_data(data)
			,_color(color)
		{}

		RBTreeNode<T>* _left;
		RBTreeNode<T>* _right;
		RBTreeNode<T>* _parent;

		T _data;

		Color _color;//Ĭ�ϸ���ɫ�ŷ��Ϲ�����Ĭ�ϸ���ɫ�Ļ���������ÿ���ڵ㶼�Ǻ�ɫ�ڵ㣬
		//��ô�Ͳ��ܱ�֤ÿ��·���ĺ�ɫ�ڵ���ͬ��Υ���˵�4�����ʡ�������ɫ���Ϳ��Ը��ݹ��������
	};





	template<class T>
	class RBTreeIterator
	{

		typedef RBTreeNode<T> Node;
		typedef Node* PNode;
		typedef RBTreeIterator<T> Self;
	public:
		RBTreeIterator(const PNode node)
			:_node(node)
		{}

		T& operator*()
		{
			return _node->_data;
		}
		T* operator->()
		{
			return &(operator*());
		}

		Self& operator++()
		{
			if (_node->_right)//�����������꣬ȥ����������
			{
				_node = _node->_right;
				while (_node && _node->_left)
				{
					_node = _node->_left;
				}
			}
			else//������δ�����꣬����������������
			{
				PNode cur = _node;
				PNode parent = cur->_parent;

				while (cur != parent->_left)
				{
					cur = parent;
					parent = parent->_parent;
				}
				_node = parent;
			}

			return *this;
		}

		Self& operator--()
		{
			PNode cur = _node;
			PNode parent = cur->_parent;
			if (_node->_left)//�����������꣬ȥ����������
			{
				_node = _node->_left;
				while (_node->_right)
				{
					_node = _node->_right;
				}
			}
			else//������δ�����꣬����������������
			{
				PNode cur = _node;
				PNode parent = cur->_parent;
				if (cur != parent->_right)
				{
					cur = parent;
					parent = parent->_parent;
				}
				_node = parent;
			}
			return *this;
		}

		bool operator==(const Self& x)
		{
			return _node == x._node;
		}

		bool operator!=(const Self& x)
		{
			return _node != x._node;
		}
	

	private:
		PNode _node;
	};



	template<class K, class T,class KeyOfT>
	class RBTree
	{
		typedef RBTreeNode<T> Node;
		typedef Node* PNode;
	public:
		typedef RBTreeIterator<T> iterator;

		RBTree()
			:_Root(nullptr)
		{}

		iterator begin()
		{
			PNode cur = _Root;

			while (cur && cur->_left)
			{
				cur = cur->_left;
			}
			return iterator(cur);
		}

		iterator end()
		{		
			return iterator(nullptr);
		}


		pair<iterator,bool> Insert(const T& data)
		{
			if (_Root == nullptr)
			{
				_Root = new Node(data, BLACK);
				_Root->_parent = nullptr;
			}

			//Ѱ�Ҳ���λ��
			KeyOfT kot;
			PNode cur = _Root;
			PNode parent = nullptr;
			while (cur)
			{
				if (kot(data) < kot(cur->_data))
				{
					parent = cur;
					cur = cur->_left;
				}
				else if (kot(data) > kot(cur->_data))
				{
					parent = cur;
					cur = cur->_right;
				}
				else
					return make_pair(iterator(cur),false);
			}
			//����
			cur = new Node(data);
			if (kot(data) < kot(parent->_data))
			{
				parent->_left = cur;
			}
			else if (kot(data) > kot(parent->_data))
			{
				parent->_right = cur;
			}
			cur->_parent = parent;


			//����
			while (parent && parent->_color == RED)//ֻҪͣ�������һ�ͼ����ж�
			{
				PNode grandparent = parent->_parent;
				PNode uncle = nullptr;

				//�ȶ���uncle��λ�ã�����uncle�Ƿ����
				if (parent == grandparent->_left)
				{
					uncle = grandparent->_right;

				}
				else
				{
					uncle = grandparent->_left;
				}

				
				if (uncle && uncle->_color == RED)//pΪ�졢u������Ϊ��
				{
					
					//    g
					//  p   u
					// cur
					parent->_color = BLACK;
					uncle->_color = BLACK;
					grandparent->_color = RED;

					//���ڵ㣬���½���
					if (grandparent == _Root)
					{
						grandparent->_color = BLACK;
						break;
					}
					//���ϸ���
					cur = grandparent;
					parent = cur->_parent;

				}
				else if (cur == parent->_left && parent == grandparent->_left )//curΪp�����ӣ�pΪg�����ӣ�pΪ��
				{
					
				
					//     g
					//  p     u
					//cur
					RotateR(grandparent);
					parent->_color = BLACK;
					grandparent->_color = RED;
					break;

				}
				else if (cur == parent->_right &&  parent == grandparent->_right )//curΪp���Һ��ӣ�pΪg���Һ��ӣ�pΪ��
				{
			
					//     g
					// u      p
					//          cur
					RotateL(grandparent);
					parent->_color = BLACK;
					grandparent->_color = RED;
					break;
				
				}
				else if (cur == parent->_right && parent == grandparent->_left )//pΪg�����ӣ�curΪp���Һ��ӣ�pΪ��
				{
					//   g
					//p     u
					//  cur
					RotateL(parent);
					RotateR(grandparent);
					cur->_color = BLACK;
					grandparent->_color = RED;
					break;
				}
				else if (cur == parent->_left && parent == grandparent->_right)//pΪg���Һ��ӣ�curΪp�����ӣ�pΪ��
				{
					//   g
					//u     p
					//   cur

					RotateR(parent);
					RotateL(grandparent);
					cur->_color = BLACK;
					grandparent->_color = RED;
					break;
				}
				else
				{
					assert(false);
				}
			}
			
			return make_pair(iterator(cur),true);
		}

		void RotateL(PNode parent)
		{
			PNode subR = parent->_right;
			PNode subRL = subR->_left;
			PNode pparent = parent->_parent;

			if (parent == _Root)//���¸��ڵ�
			{
				_Root = subR;
				subR->_parent = nullptr;
			}
			else
			{
				//����parent�ĸ��ڵ�ָ��
				if (parent == pparent->_left)
				{
					pparent->_left = subR;
				}
				else
				{
					pparent->_right = subR;
				}
				subR->_parent = pparent;

			}

			//parent����ָ��ָ��subRL,subRL�ĸ��ڵ�ָ��parent
			parent->_right = subR->_left;
			if (subRL)//subR����ڵ���ܲ�����
				subRL->_parent = parent;

			//subR����ָ��ָ��parent,parent�ĸ��ڵ�ָ��subR
			subR->_left = parent;
			parent->_parent = subR;

		}

		//�ҵ���
		void RotateR(PNode parent)
		{
			PNode subL = parent->_left;
			PNode subLR = subL->_right;
			PNode pparent = parent->_parent;

			if (_Root == parent)
			{
				_Root = subL;
				subL->_parent = nullptr;
			}
			else
			{
				//����parent�ĸ��ڵ�ָ��
				if (pparent->_left == parent)
				{
					pparent->_left = subL;
				}
				else
				{
					pparent->_right = subL;
				}
				subL->_parent = pparent;
			}
			//parent����ָ��ָ��subLR,subLR�ĸ��ڵ�ָ��parent
			parent->_left = subLR;
			if (subLR)//subR���ҽڵ���ܲ�����
				subLR->_parent = parent;
			//subL����ָ��ָ��parent,parent�ĸ��ڵ�ָ��subL
			subL->_right = parent;
			parent->_parent = subL;

		}


	private:
		PNode _Root;
	};


}