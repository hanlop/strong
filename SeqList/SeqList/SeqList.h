#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int SeqListDataType;

typedef struct SeqList
{
	SeqListDataType* array;
	int size;
	int capacity;

}SeqList;
//˳����ʼ��
void SeqLsitInit(SeqList* p);
//��β����
void SeqListPushBack(SeqList* p, SeqListDataType e);
//��βɾ��
void SeqListPopBack(SeqList* p);
//��ͷ����
void SeqListPushFront(SeqList* p, SeqListDataType e);
//��ͷɾ��
void SeqListPopFront(SeqList* p);
//���˳������������������������
void CheckCapacity(SeqList* p);
//��ӡ˳���
void SeqListPrint(SeqList* p);
//��pos�����Ԫ��e
void SeqListInsert(SeqList* p, int pos, SeqListDataType e);
//ɾ��pos����ֵ
void SeqListErase(SeqList* p, int pos);
//��ֵ����˳���
int  SeqListFind(SeqList* p, SeqListDataType e);
