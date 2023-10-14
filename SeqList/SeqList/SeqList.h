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
//顺序表初始化
void SeqLsitInit(SeqList* p);
//按尾插入
void SeqListPushBack(SeqList* p, SeqListDataType e);
//按尾删除
void SeqListPopBack(SeqList* p);
//按头插入
void SeqListPushFront(SeqList* p, SeqListDataType e);
//按头删除
void SeqListPopFront(SeqList* p);
//检查顺序表的容量，容量不够便增容
void CheckCapacity(SeqList* p);
//打印顺序表
void SeqListPrint(SeqList* p);
//在pos后插入元素e
void SeqListInsert(SeqList* p, int pos, SeqListDataType e);
//删除pos处的值
void SeqListErase(SeqList* p, int pos);
//按值查找顺序表
int  SeqListFind(SeqList* p, SeqListDataType e);
