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

// 16:07����
void SLTPushBack(SLTNode** pphead, SLTDataType x)
{
	assert(pphead);

	SLTNode* newnode = BuySListNode(x);

	if (*pphead == NULL)
	{
		// �ı�Ľṹ���ָ�룬����Ҫ�ö���ָ��
		*pphead = newnode;
	}
	else
	{
		SLTNode* tail = *pphead;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}

		// �ı�Ľṹ�壬�ýṹ���ָ�뼴��
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
	// 1����
	assert(*pphead);

	// 2��һ���ڵ�
	// 3��һ�����Ͻڵ�
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

	// ��
	assert(*pphead);

	// �ǿ�
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

// ��pos�Ժ����x
void SLTInsertAfter(SLTNode* pos, SLTDataType x)
{
	assert(pos);

	SLTNode* newnode = BuySListNode(x);
	pos->next = newnode;
	newnode->next = pos->next;
}

// ɾ��posλ��
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

// ɾ��pos�ĺ�һ��λ��
void SLTEraseAfter(SLTNode* pos)
{
	assert(pos);

	// ���pos�Ƿ���β�ڵ�
	assert(pos->next);

	SLTNode* posNext = pos->next;

	pos->next = posNext->next;

	free(posNext);
	posNext = NULL;
}