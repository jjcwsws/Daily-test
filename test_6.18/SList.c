#include"SList.h"

void SLTPrint(SLTNode* phead)
{
	SLTNode* cur = phead;
	//while (cur != NULL)
	while (cur)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}

	printf("NULL\n");
}

SLTNode* BuySListNode(SLTDataType x)
{
	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));
	if (newnode == NULL)
	{
		perror("malloc fail");
		exit(-1);
	}

	newnode->data = x;
	newnode->next = NULL;

	return newnode;
}

// 16:07继续
void SLTPushBack(SLTNode** pphead, SLTDataType x)
{
	assert(pphead);

	SLTNode* newnode = BuySListNode(x);

	if (*pphead == NULL)
	{
		// 改变的结构体的指针，所以要用二级指针
		*pphead = newnode;
	}
	else
	{
		SLTNode* tail = *pphead;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}

		// 改变的结构体，用结构体的指针即可
		tail->next = newnode;
	}	
}

void SLTPushFront(SLTNode** pphead, SLTDataType x)
{
	assert(pphead);

	SLTNode* newnode = BuySListNode(x);

	newnode->next = *pphead;
	*pphead = newnode;
}

void SLTPopBack(SLTNode** pphead)
{
	assert(pphead);
	// 1、空
	assert(*pphead);

	// 2、一个节点
	// 3、一个以上节点
	if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}
	else
	{
		//SLTNode* tailPrev = NULL;
		//SLTNode* tail = *pphead;
		//while (tail->next)
		//{
		//	tailPrev = tail;
		//	tail = tail->next;
		//}

		//free(tail);
		////tail = NULL;
		//tailPrev->next = NULL;

		SLTNode* tail = *pphead;
		while (tail->next->next)
		{
			tail = tail->next;
		}

		free(tail->next);
		tail->next = NULL;
	}
}

void SLTPopFront(SLTNode** pphead)
{
	assert(pphead);

	// 空
	assert(*pphead);

	// 非空
	SLTNode* newhead = (*pphead)->next;
	free(*pphead);
	*pphead = newhead;
}

SLTNode* SLTFind(SLTNode* phead, SLTDataType x)
{
	SLTNode* cur = phead;
	while (cur)
	{
		if (cur->data == x)
		{
			return cur;
		}

		cur = cur->next;
	}

	return NULL;
}

void SLTInsert(SLTNode** pphead, SLTNode* pos, SLTDataType x)
{
	assert(pphead);
	assert(pos);

	if (pos == *pphead)
	{
		SLTPushFront(pphead, x);
	}
	else
	{
		SLTNode* prev = *pphead;
		while (prev->next != pos)
		{
			prev = prev->next;
		}

		SLTNode* newnode = BuySListNode(x);
		prev->next = newnode;
		newnode->next = pos;
	}
}

// 在pos以后插入x
void SLTInsertAfter(SLTNode* pos, SLTDataType x)
{
	assert(pos);

	SLTNode* newnode = BuySListNode(x);
	pos->next = newnode;
	newnode->next = pos->next;
}

// 删除pos位置
void SLTErase(SLTNode** pphead, SLTNode* pos)
{
	assert(pphead);
	assert(pos);

	if (pos == *pphead)
	{
		SLTPopFront(pphead);
	}
	else
	{
		SLTNode* prev = *pphead;
		while (prev->next != pos)
		{
			prev = prev->next;
		}

		prev->next = pos->next;
		free(pos);
		//pos = NULL;
	}
}

// 删除pos的后一个位置
void SLTEraseAfter(SLTNode* pos)
{
	assert(pos);

	// 检查pos是否是尾节点
	assert(pos->next);

	SLTNode* posNext = pos->next;

	pos->next = posNext->next;

	free(posNext);
	posNext = NULL;
}