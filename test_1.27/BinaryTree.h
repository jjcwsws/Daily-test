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

//������ǰ�����
void PreOrder(BTNode* node);

//�������������
void InOrder(BTNode* node);

//�������������
void PostOrder(BTNode* node);

//�������ڵ����
int BinaryTreeSize(BTNode* root);

//������Ҷ�ӽ�����
int BinaryTreeLeafSize(BTNode* root);

//��������k��ڵ����
int BianryTreeLevelKSize(BTNode* root, int k);

//����������ֵΪx�Ľ��
BTNode* BinaryTreeFind(BTNode* root, BTDataType x);