#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include <stdio.h>
//#define max_size 100
//
//int tree[max_size];  // �洢������������
//int stack[max_size];  // ջ
//int top = -1;  // ջ��ָ��
//
//void push(int x) {
//    stack[++top] = x;
//}
//
//int pop() {
//    return stack[top--];
//}
//
//void preorder_traversal(int root) {
//    if (tree[root] == -1) {
//        return;
//    }
//    push(root);  // ���ڵ���ջ
//    while (top != -1) {
//        int node = pop();  // ��ջ
//        printf("%d ", tree[node]);  // ����ڵ�ֵ
//        int left = node * 2;  // �����ӽڵ���ջ
//        int right = node * 2 + 1;
//        if (right < max_size && tree[right] != -1) {
//            push(right);
//        }
//        if (left < max_size && tree[left] != -1) {
//            push(left);
//        }
//    }
//}
//
//int main() {
//    // ʾ��������һ�ö�����
//    for (int i = 0; i < max_size; i++) {
//        tree[i] = -1;
//    }
//    tree[1] = 4;
//    tree[2] = 3;
//    tree[3] = 6;
//    tree[4] = 1;
//    tree[5] = 2;
//    tree[6] = 5;
//    tree[7] = 7;
//
//    // �������������
//    preorder_traversal(1);
//
//    return 0;
//}

//#include <stdio.h>
//#define MAXSIZE 100
//
//int treeData[MAXSIZE] = { 4,3,6,1,2,5,7 };
//int treeSize = 7;
//
//void preorder() {
//    int stack[MAXSIZE];
//    int top = -1;
//    stack[++top] = 0;
//    while (top >= 0) {
//        int index = stack[top--];
//        printf("%d ", treeData[index]);
//        if (2 * index + 2 < treeSize)
//            stack[++top] = 2 * index + 2;
//        if (2 * index + 1 < treeSize)
//            stack[++top] = 2 * index + 1;
//    }
//}
//
//int main() {
//    preorder();
//    return 0;
//}
