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

void SListPrint(SListNode* phead);//���øı�ָ����ָ��Ķ��� Ҫ�ı���ָ��Ķ���ָ��Ҫ������ָ��

void SListPushFront(SLTNode** pphead, SLTDataType x)��
