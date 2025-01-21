#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)

#include "SListNode.h"

//动态申请一个节点
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

//打印
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

//单链表尾插
void SListPushBack(SListNode** plist, SLDataType x)
{
	SListNode* NewNode = BySListNode(x);
	SListNode* cur = *plist;
	if (*plist == NULL)//这里的*plist不能用cur代替，因为一开始得让plist指向头结点，不然的话*plist就一直指向NULL
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

//单链表的头插
void SListPushFront(SListNode** plist, SLDataType x)
{
	SListNode* NewNode = BySListNode(x);
	NewNode->next = *plist;
	*plist = NewNode;

}

//单链表的尾删
void SListPopBack(SListNode** plist)
{
	assert(*plist);
	SListNode* cur = *plist;
	//SListNode* back;//记录前一个节点的值
	//方法1
	/*while (cur->next != NULL)
	{
		back = cur;
		cur = cur->next;
	}
	back->next = cur->next;
	free(cur);*/

	//方法2
	while (cur->next->next != NULL)
	{
		cur = cur->next;
	}
	cur->next = cur->next->next;

}

//单链表头删
void SListPopFront(SListNode** plist)
{
	assert(*plist);
	SListNode* cur = *plist;
	cur = cur->next;		
	free(*plist);
	*plist = cur;
	
}

//单链表查找
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

//单链表在POS位置之前插入x
void SListInsertFront(SListNode** plist, SListNode* pos, SLDataType x)
{
	assert(*plist);
	SListNode* NewNode = BySListNode(x);//申请等待要插入的新结点
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

//单链表在POS位置之后插入x
void SListInsrtAfter(SListNode* pos, SLDataType x)
{
	assert(pos);
	SListNode* NewNode = BySListNode(x);//申请等待要插入的新结点
	NewNode->next = pos->next;
	pos->next = NewNode;
}

//单链表删除POS位置之前的值
void SListEraseFront(SListNode** plist, SListNode* pos, SLDataType x)
{
	assert(*plist);
	assert(pos);
	SListNode* cur = *plist;
	SListNode* curfront = NULL;//记录cur的前一个结点
	if (pos == *plist)
	{
		printf("要删除当前位置之前的值不存在\n");
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

//单链表删除POS位置之后的值
void SListEraseAfter(SListNode* pos, SLDataType x)
{
	assert(pos);
	SListNode* cur = pos;
	if (pos->next == NULL)
	{
		printf("要删除POS位置之后的值不存在\n");
	}
	else
	{
		pos->next = pos->next->next;
		free(cur->next);
		cur->next = NULL;
	}
}
