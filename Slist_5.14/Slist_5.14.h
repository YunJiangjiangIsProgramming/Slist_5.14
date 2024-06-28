#pragma once
#include <stdio.h>
#include <stdlib.h>

typedef int SLDataType;

struct SListNode
{
	SLTDataType data;
	struct SListNode* next;
};

typedef struct SListNode SLTNode;

void SListPrint(SListNode* phead);//不用改变指针所指向的对象 要改变他指向的对象指针要传二级指针

void SListPushFront(SLTNode** pphead, SLTDataType x)；
