#define _CRT_SECURE_NO_WARNINGS 1
#include "SList.h"
void testSList()
{
	SListNode* plist = NULL;
	SListPushBack(&plist, 1);
	SListPushBack(&plist, 2);
	SListPushBack(&plist, 3);
	SListPrint(plist);

	SListPopBack(&plist);
	//SListPopBack(&plist);
	//SListPopBack(&plist);
	SListPrint(plist);

	SListPushFront(&plist, 4);
	SListPushFront(&plist, 5);
	SListPushFront(&plist, 6);
	SListPrint(plist);

	SListPopFront(&plist);
	SListPopFront(&plist);
	SListPrint(plist);

	SListInsertAfter(SListFind(plist, 2), 3);
	SListPrint(plist);

	SListEraseAfter(SListFind(plist, 1));
	SListPrint(plist);

	SListDestory(&plist);
}

int main()
{
	testSList();

	return 0;
}