#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

typedef int BTDataType;
typedef struct BinaryTreeNode
{
	BTDataType data;
	struct BinaryTreeNode* left;
	struct BinaryTreeNode* right;
}BTNode;

void BTNodeInit(BTNode* node);

BTNode* BuyNode(BTDataType x);

//二叉树前序遍历
void PreOrder(BTNode* node);

//二叉树中序遍历
void InOrder(BTNode* node);

//二叉树后序遍历
void PostOrder(BTNode* node);

//二叉树节点个数
int BinaryTreeSize(BTNode* root);

//二叉树叶子结点个数
int BinaryTreeLeafSize(BTNode* root);

//二叉树第k层节点个数
int BianryTreeLevelKSize(BTNode* root, int k);

//二叉树查找值为x的结点
BTNode* BinaryTreeFind(BTNode* root, BTDataType x);