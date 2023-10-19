#define _CRT_SECURE_NO_WARNINGS 1
#include "SList.h"

void SListPrint(SListNode* plist)
{
	SListNode* cur = plist;
	while (cur)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("NULL\n");
}
SListNode* BuySListNode(SLDateType x)
{
	SListNode* newnode = (SListNode*)malloc(sizeof(SListNode));
	if (newnode == NULL)
	{
		printf("ÉêÇë½ÚµãÊ§°Ü\n");
		exit(-1);
	}
	newnode->data = x;
	newnode->next = NULL;

	return newnode;
}
void SListPushBack(SListNode** pplist, SLDateType x)
{
	SListNode* newnode = BuySListNode(x);
	if (*pplist == NULL)
	{
		*pplist = newnode;
	}
	else
	{
		SListNode* tail = *pplist;
		while (tail->next)
		{
			tail = tail->next;
		}

		tail->next = newnode;
	}

}
void SListPushFront(SListNode** pplist, SLDateType x)
{
	SListNode* NewNode = BuySListNode(x);

	NewNode->next = *pplist;
	(*pplist) = NewNode;
}
void SListPopBack(SListNode** pplist)
{
	if (*pplist==NULL)
	{
		return;
	}
	else if((*pplist)->next == NULL)
	{
		free(*pplist);

		(*pplist) = NULL;
	}
	else
	{
		SListNode* tail = (*pplist);
		SListNode* prev = NULL;
		while (tail->next)
		{
			prev = tail;
			tail = tail->next;
		}

		free(tail);
		prev->next = NULL;
	}
}
void SListPopFront(SListNode** pplist)
{
	if ((*pplist) == NULL)
	{
		return;
	}
	else
	{
		SListNode* Next = (*pplist)->next;
		free(*pplist);

		(*pplist) = Next;
	}
}
SListNode* SListFind(SListNode* plist, SLDateType x)
{
	SListNode* tail = plist;

	while (tail)
	{
		if (tail->data == x)
		{
			return tail;
		}

			tail = tail->next;
	}

	return NULL;
}

void SListInsertAfter(SListNode* pos, SLDateType x)
{
	assert(pos);

	SListNode* NewNode = BuySListNode(x);
	NewNode->next = pos->next;

	pos->next = NewNode;
}
void SListEraseAfter(SListNode* pos)
{
	assert(pos);
	if (pos->next)
	{
		SListNode* NewNext = pos->next;
		SListNode* newNext = NewNext->next;
		pos->next = newNext;
		free(NewNext);

		NewNext = NULL;
	}
}
void SListDestory(SListNode** pplist)
{
	assert(*pplist);

	SListNode* cur = *pplist;
	while (cur)
	{
		SListNode* next = cur->next;
		free(cur);
		cur = next;
	}
	(*pplist) = NULL;
}