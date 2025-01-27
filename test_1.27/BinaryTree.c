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


//二叉树前序遍历
void PreOrder(BTNode* node)
{
	if (node == NULL)
		return;
	printf("%d->", node->data);
	PreOrder(node->left);
	PreOrder(node->right);
}

//二叉树中序遍历
void InOrder(BTNode* node)
{
	if (node == NULL)
		return;
	
	PreOrder(node->left);
	printf("%d->", node->data);
	PreOrder(node->right);
}

//二叉树后序遍历
void PostOrder(BTNode* node)
{
	if (node == NULL)
		return;	
	PreOrder(node->left);
	PreOrder(node->right);
	printf("%d->", node->data);
}

//二叉树节点个数
int BinaryTreeSize(BTNode* root)
{
	if (root == NULL)
		return 0;
	return BinaryTreeSize(root->left) + BinaryTreeSize(root->right) + 1;
}

//二叉树叶子结点个数
int BinaryTreeLeafSize(BTNode* root)
{
	if (root == NULL)
		return 0;
	int leftsize = BinaryTreeLeafSize(root->left);
	int rightsize = BinaryTreeLeafSize(root->right);
	if (leftsize == 0 && rightsize == 0)
	{
		return leftsize + rightsize + 1;
	}
	else
	{
		return leftsize + rightsize;
	}
}

//二叉树第k层节点个数
int BianryTreeLevelKSize(BTNode* root, int k)
{
	if (root == NULL)
		return 0;
	if (k == 1)
	{
		return 1;
	}
	//从第k层的上一层来分析
	if (k == 2)
	{
		if (root->left != NULL && root->right != NULL)
		{
			return 2;
		}
		if (root->left || root->right)
		{
			return 1;
		}
		return 0;
	}
	/*int leftsize = BianryTreeLevelKSize(root->left, k - 1);
	int rightsize = BianryTreeLevelKSize(root->right, k - 1);*/

	return BianryTreeLevelKSize(root->left, k-1) + BianryTreeLevelKSize(root->right, k -1);
}

//二叉树查找值为x的结点
BTNode* BinaryTreeFind(BTNode* root, BTDataType x)
{
	if (root == NULL)
		return NULL;
	if (root->data == x)
	{
		return root;
	}

	BTNode*  left = BinaryTreeFind(root->left, x);	
	//左树为空再去看右树
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