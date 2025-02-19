#pragma once
#include <iostream>
#include <assert.h>
using namespace std;


namespace bit
{



	enum Color//对于红黑节点，用枚举结构来表示
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

		Color _color;//默认给红色才符合规则，若默认给黑色的话，则插入的每个节点都是黑色节点，
		//那么就不能保证每条路径的黑色节点相同，违反了第4条性质。而给红色，就可以根据规则调整。
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
			if (_node->_right)//左子树访问完，去访问右子树
			{
				_node = _node->_right;
				while (_node && _node->_left)
				{
					_node = _node->_left;
				}
			}
			else//左子树未访问完，或者右子树访问完
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
			if (_node->_left)//右子树访问完，去左子树访问
			{
				_node = _node->_left;
				while (_node->_right)
				{
					_node = _node->_right;
				}
			}
			else//右子树未访问完，或者左子树访问完
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

			//寻找插入位置
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
			//插入
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


			//调整
			while (parent && parent->_color == RED)//只要停留在情况一就继续判断
			{
				PNode grandparent = parent->_parent;
				PNode uncle = nullptr;

				//先定好uncle的位置，不管uncle是否存在
				if (parent == grandparent->_left)
				{
					uncle = grandparent->_right;

				}
				else
				{
					uncle = grandparent->_left;
				}

				
				if (uncle && uncle->_color == RED)//p为红、u存在且为红
				{
					
					//    g
					//  p   u
					// cur
					parent->_color = BLACK;
					uncle->_color = BLACK;
					grandparent->_color = RED;

					//根节点，更新结束
					if (grandparent == _Root)
					{
						grandparent->_color = BLACK;
						break;
					}
					//往上更新
					cur = grandparent;
					parent = cur->_parent;

				}
				else if (cur == parent->_left && parent == grandparent->_left )//cur为p的左孩子，p为g的左孩子，p为红
				{
					
				
					//     g
					//  p     u
					//cur
					RotateR(grandparent);
					parent->_color = BLACK;
					grandparent->_color = RED;
					break;

				}
				else if (cur == parent->_right &&  parent == grandparent->_right )//cur为p的右孩子，p为g的右孩子，p为红
				{
			
					//     g
					// u      p
					//          cur
					RotateL(grandparent);
					parent->_color = BLACK;
					grandparent->_color = RED;
					break;
				
				}
				else if (cur == parent->_right && parent == grandparent->_left )//p为g的左孩子，cur为p的右孩子，p为红
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
				else if (cur == parent->_left && parent == grandparent->_right)//p为g的右孩子，cur为p的左孩子，p为红
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

			if (parent == _Root)//更新根节点
			{
				_Root = subR;
				subR->_parent = nullptr;
			}
			else
			{
				//更新parent的父节点指向
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

			//parent的右指针指向subRL,subRL的父节点指向parent
			parent->_right = subR->_left;
			if (subRL)//subR的左节点可能不存在
				subRL->_parent = parent;

			//subR的左指针指向parent,parent的父节点指向subR
			subR->_left = parent;
			parent->_parent = subR;

		}

		//右单旋
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
				//更新parent的父节点指向
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
			//parent的左指针指向subLR,subLR的父节点指向parent
			parent->_left = subLR;
			if (subLR)//subR的右节点可能不存在
				subLR->_parent = parent;
			//subL的右指针指向parent,parent的父节点指向subL
			subL->_right = parent;
			parent->_parent = subL;

		}


	private:
		PNode _Root;
	};


}