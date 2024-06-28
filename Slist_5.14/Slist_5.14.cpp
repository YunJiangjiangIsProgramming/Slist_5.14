#define _CRT_SECURE_NO_WARNINGS 1
#include"Slist_5.14.h"

void SListPrint(SListNode* phead)
{
	SListNode* cur = phead;

	while (cur!=NULL)
	{
		printf("%d\n", cur->data);
		cur = cur->next;
	}
}



