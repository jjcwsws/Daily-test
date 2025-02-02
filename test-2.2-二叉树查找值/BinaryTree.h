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


//����������ֵΪx�Ľ��
BTNode* BinaryTreeFind(BTNode* root, BTDataType x);
