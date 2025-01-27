#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "BinaryTree.h"





BTNode* CreatBinaryTree()
{
	BTNode* node1 = BuyNode(1);
	BTNode* node2 = BuyNode(2);
	BTNode* node3 = BuyNode(3);
	BTNode* node4 = BuyNode(4);
	BTNode* node5 = BuyNode(5);
	BTNode* node6 = BuyNode(6);

	node1->left = node2;
	node1->right = node3;
	node2->left = node4;
	node2->right = node5;
	node5->left = node6;
	return node1;
}


void BinaryTreeTest(BTNode* node)
{
	PreOrder(node);
}

int main()
{
	BTNode* node = CreatBinaryTree();

	//BinaryTreeTest(node);
	BTNode* nodefind = BinaryTreeFind(node, 3);
	printf("%d", nodefind->data);
	return 0;
}