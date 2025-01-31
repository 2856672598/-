#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef int DateType;
typedef struct SListNode
{
	struct SListNode* _next;
	DateType _date;
}SListNode;

void SListPrint(SListNode* plist);
SListNode* CreateSListNode(DateType date);
void SListPushBack(SListNode** plist, DateType date);
void SListPopBack(SListNode** plist);
void SListPushFront(SListNode** plist, DateType date);
void SListPopFront(SListNode**plist);

SListNode* SListFind(SListNode* plist, DateType x);
void SListInsertAfter(SListNode* pos, DateType x);
void SListEraseAfter(SListNode* pos);
void SListDestory(SListNode* plist);

void SListErasePos(SListNode** plist, SListNode* pos);