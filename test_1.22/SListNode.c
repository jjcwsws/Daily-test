#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)

#include "SListNode.h"

//��̬����һ���ڵ�
SListNode* BySListNode(SLDataType x)
{
	SListNode* NewNode = (SListNode*)malloc(sizeof(SListNode));
	if (NewNode != NULL)
	{
		NewNode->data = x;
		NewNode->next = NULL;
	}
	else
	{
		perror("BySListNode");
	}
	
	return NewNode;
}

//��ӡ
void SListPrint(SListNode* plist)
{
	SListNode* cur = plist;
	while (cur)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}

	printf("NULL");
}

//������β��
void SListPushBack(SListNode** plist, SLDataType x)
{
	SListNode* NewNode = BySListNode(x);
	SListNode* cur = *plist;
	if (*plist == NULL)//�����*plist������cur���棬��Ϊһ��ʼ����plistָ��ͷ��㣬��Ȼ�Ļ�*plist��һֱָ��NULL
	{
		NewNode->next = *plist;
		*plist = NewNode;
	}
	else
	{
		while (cur->next)
		{
			cur = cur->next;
		}
		NewNode->next = cur->next;
		cur->next = NewNode;
	}
}

//�������ͷ��
void SListPushFront(SListNode** plist, SLDataType x)
{
	SListNode* NewNode = BySListNode(x);
	NewNode->next = *plist;
	*plist = NewNode;

}

//�������βɾ
void SListPopBack(SListNode** plist)
{
	assert(*plist);
	SListNode* cur = *plist;
	//SListNode* back;//��¼ǰһ���ڵ��ֵ
	//����1
	/*while (cur->next != NULL)
	{
		back = cur;
		cur = cur->next;
	}
	back->next = cur->next;
	free(cur);*/

	//����2
	while (cur->next->next != NULL)
	{
		cur = cur->next;
	}
	cur->next = cur->next->next;

}

//������ͷɾ
void SListPopFront(SListNode** plist)
{
	assert(*plist);
	SListNode* cur = *plist;
	cur = cur->next;		
	free(*plist);
	*plist = cur;
	
}

//���������
SListNode* SListFind(SListNode* plist, SLDataType x)
{
	assert(plist);
	SListNode* cur = plist;
	while (cur)
	{
		
		if (cur->data == x)
			return cur;
		else
			cur = cur->next;
	}
	return NULL;
}

//��������POSλ��֮ǰ����x
void SListInsertFront(SListNode** plist, SListNode* pos, SLDataType x)
{
	assert(*plist);
	SListNode* NewNode = BySListNode(x);//����ȴ�Ҫ������½��
	SListNode* cur = *plist;
	if (pos == *plist)
	{
		NewNode->next = *plist;
		*plist = NewNode;
	}
	else
	{
		while (cur->next != pos)
		{
			cur = cur->next;
		}
		NewNode->next = pos;
		cur->next = NewNode;
	}
}

//��������POSλ��֮�����x
void SListInsrtAfter(SListNode* pos, SLDataType x)
{
	assert(pos);
	SListNode* NewNode = BySListNode(x);//����ȴ�Ҫ������½��
	NewNode->next = pos->next;
	pos->next = NewNode;
}

//������ɾ��POSλ��֮ǰ��ֵ
void SListEraseFront(SListNode** plist, SListNode* pos, SLDataType x)
{
	assert(*plist);
	assert(pos);
	SListNode* cur = *plist;
	SListNode* curfront = NULL;//��¼cur��ǰһ�����
	if (pos == *plist)
	{
		printf("Ҫɾ����ǰλ��֮ǰ��ֵ������\n");
		return;
	}
	else
	{
		if ((*plist)->next == pos)
		{
			SListNode* pphead = *plist;
			*plist = cur->next;
			free(pphead);
			pphead = NULL;
		}
		else
		{
			while (cur->next != pos)
			{
				curfront = cur;
				cur = cur->next;
			}
			curfront->next = cur->next;
			free(cur);
			cur = NULL;
		}
	}
}

//������ɾ��POSλ��֮���ֵ
void SListEraseAfter(SListNode* pos, SLDataType x)
{
	assert(pos);
	SListNode* cur = pos;
	if (pos->next == NULL)
	{
		printf("Ҫɾ��POSλ��֮���ֵ������\n");
	}
	else
	{
		pos->next = pos->next->next;
		free(cur->next);
		cur->next = NULL;
	}
}
