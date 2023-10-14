#define _CRT_SECURE_NO_WARNINGS 1
#include "SeqList.h"

void SeqLsitInit(SeqList* p)
{
	assert(p);

	p->size = 0;
	p->capacity = 5;
	p->array = (SeqListDataType*)malloc(sizeof(SeqListDataType) * p->capacity);
	if (p->array == NULL)
	{
		printf("初始失败\n");
		exit(-1);
	}
}
void SeqListPrint(SeqList* p)
{
	assert(p);

	int i = 0;
	for (i = 0; i < p->size; i++)
	{
		printf("%d ", p->array[i]);
	}
	printf("\n");
}

void CheckCapacity(SeqList* p)
{
	assert(p);

	if (p->size == p->capacity)
	{
		p->capacity *= 2;
		p->array = (SeqListDataType*)realloc(p->array,sizeof(SeqListDataType) * p->capacity);
		if (p->array == NULL)
		{
			printf("增容失败\n");
			exit(-1);
		}
	}
}
void SeqListPushBack(SeqList* p, SeqListDataType e)
{
	assert(p);

	CheckCapacity(p);

	p->array[p->size] = e;
	p->size++;
}
void SeqListPopBack(SeqList* p)
{
	assert(p);

	p->size--;
}

void SeqListPushFront(SeqList* p, SeqListDataType e)
{
	assert(p);

	CheckCapacity(p);
	int end = 0;
	for (end = p->size - 1; end >= 0; end--)
	{
		p->array[end + 1] = p->array[end];
	}

	p->array[0] = e;
	p->size++;
}

void SeqListPopFront(SeqList* p)
{
	assert(p);

	int start = 0;

	for (start = 0; start < p->size - 1; start++)
	{
		p->array[start] = p->array[start + 1];
	}
	p->size--;

}
//在第pos为后插入某个值
void SeqListInsert(SeqList* p, int pos, SeqListDataType e)
{
	assert(p);
	CheckCapacity(p);

	int end = 0;
	for (end = p->size - 1; end >= pos; end--)
	{
		p->array[end + 1] = p->array[end];
	}
	p->array[pos] = e;
	p->size++;
}
void SeqListErase(SeqList* p, int pos)
{
	assert(p);

	int start = 0;
	for (start = pos; start < p->size; start++)
	{
		p->array[start - 1] = p->array[start];
	}
	p->size--;

}
int SeqListFind(SeqList* p, SeqListDataType e)
{
	assert(p);

	int i = 0;
	int pos = 0;
	for (i = 0; i < p->size; i++)
	{
		pos++;
		if (p->array[i] == e)
		{
			return pos;
		}
	}
}
