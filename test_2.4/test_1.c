#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include <stdio.h>
//相同的树
//bool isSameTree(struct TreeNode* p, struct TreeNode* q){
//if (p == NULL && q == NULL)
//return true;
//if (p == NULL || q == NULL)
//return false;
////都不为空时再比较节点值是否相等
//if (p->val != q->val)
//return false;
//return isSameTree(p->left, q->left)
//&& isSameTree(p->right, q->right);
//}