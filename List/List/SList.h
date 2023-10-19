#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int SLDateType;

typedef struct SListNode
{
	SLDateType data;
	struct SListNode* next;
}SListNode;

void SListPrint(SListNode* plist);
SListNode* BuySListNode(SLDateType x);
void SListPushBack(SListNode** pplist, SLDateType x);
void SListPushFront(SListNode** pplist, SLDateType x);
void SListPopBack(SListNode** pplist);
void SListPopFront(SListNode** pplist);
SListNode* SListFind(SListNode* plist, SLDateType x);
//��pos�����x��ֵ
void SListInsertAfter(SListNode* pos, SLDateType);
void SListEraseAfter(SListNode* pos);
void SListDestory(SListNode** pplist);