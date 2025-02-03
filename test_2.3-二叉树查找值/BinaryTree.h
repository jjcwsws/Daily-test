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


//二叉树查找值为x的结点
BTNode* BinaryTreeFind(BTNode* root, BTDataType x);
