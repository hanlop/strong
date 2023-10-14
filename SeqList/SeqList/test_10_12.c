#define _CRT_SECURE_NO_WARNINGS 1
#include "SeqList.h"

void testSeqList()
{
	SeqList p;
	SeqLsitInit(&p);


	SeqListPushBack(&p , 1);
	SeqListPushBack(&p, 2);
	SeqListPushBack(&p, 3);
	SeqListPushBack(&p, 4);
	SeqListPushBack(&p, 5);
	SeqListPushBack(&p, 6);
	SeqListPushBack(&p, 7);
	SeqListPrint(&p);

	SeqListPopBack(&p);
	SeqListPopBack(&p);
	SeqListPopBack(&p);
	SeqListPrint(&p);

	SeqListPushFront(&p, 8);
	SeqListPushFront(&p, 7);
	SeqListPushFront(&p, 5);
	SeqListPushFront(&p, 6);
	SeqListPrint(&p);

	SeqListPopFront(&p);
	SeqListPopFront(&p);
	SeqListPopFront(&p);
	SeqListPrint(&p);
	SeqListInsert(&p, 3, 4);
	SeqListInsert(&p, 3, 7);
	SeqListPrint(&p);

	SeqListErase(&p, 3);
	SeqListErase(&p, 3);
	SeqListPrint(&p);

	printf("该元素在顺序表第%d位\n", SeqListFind(&p, 3));
}

int main()
{
	//SeqList p;
	//SeqLsitInit(&p);

	testSeqList();

	return 0;	
}