#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "BinaryTree.h"


BTNode* BuyNode(BTDataType x)
{
	BTNode* node = (BTNode*)malloc(sizeof(BTNode));
	if (node == NULL)
	{
		perror("malloc fail");
		exit(-1);
	}
	node->data = x;
	node->left = NULL;
	node->right = NULL;
	return node;
}


void BTNodeInit(BTNode* node)
{
	node->data = 0;
	node->left = NULL;
	node->right = NULL;
}

//����������ֵΪx�Ľ��
BTNode* BinaryTreeFind(BTNode* root, BTDataType x)
{
	if (root == NULL)
		return NULL;
	if (root->data == x)
	{
		return root;
	}

	BTNode* left = BinaryTreeFind(root->left, x);
	//����Ϊ����ȥ������
	if (left == NULL)
	{
		BTNode* right = BinaryTreeFind(root->right, x);

		if (right == NULL)
		{
			return NULL;
		}
		if (right->data == x)
		{
			return right;
		}
	}
	else if (left->data == x)
	{
		return left;
	}

	return NULL;
}