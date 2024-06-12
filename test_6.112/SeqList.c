#include"SeqList.h"

void SLInit(SL* ps)
{
	ps->a = (SLDataType*)malloc(sizeof(SLDataType)*4);
	if (ps->a == NULL)
	{
		perror("malloc failed");
		exit(-1);
		//return;
	}

	ps->size = 0;
	ps->capacity = 4;
}

void SLDestroy(SL* ps)
{
	free(ps->a);
	ps->a = NULL;
	ps->capacity = ps->size = 0;
}

void SLPrint(SL* ps)
{
	for (int i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}

void SLCheckCapacity(SL* ps)
{
	// 满了要扩容
	if (ps->size == ps->capacity)
	{
		SLDataType* tmp = (SLDataType*)realloc(ps->a, ps->capacity * 2 * (sizeof(SLDataType)));
		if (tmp == NULL)
		{
			perror("realloc failed");
			exit(-1);
		}

		ps->a = tmp;
		ps->capacity *= 2;
	}
}

// 17:25继续
void SLPushBack(SL* ps, SLDataType x)
{
	SLCheckCapacity(ps);

	ps->a[ps->size] = x;
	ps->size++;
}

void SLPopBack(SL* ps)
{
	// 温柔的检查
	//if (ps->size == 0)
		//return;

	// 暴力的检查
	assert(ps->size > 0);

	//ps->a[ps->size - 1] = 0;
	ps->size--;
}

void SLPushFront(SL* ps, SLDataType x)
{
	SLCheckCapacity(ps);

	// 挪动数据
	int end = ps->size - 1;
	while (end >= 0)
	{
		ps->a[end + 1] = ps->a[end];
		--end;
	}
	ps->a[0] = x;
	ps->size++;
}

void SLPopFront(SL* ps)
{

}