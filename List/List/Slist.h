#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
typedef int SListDataType;
typedef struct SListNode
{
	SListDataType data;
	struct SListNode* next;

}SListNode;
//β��
void SListPushBack(SListNode** pphead, SListDataType x);
//βɾ
void SListPopBack(SListNode** pphead);
//ͷ��
void SListPushFront(SListNode** pphead, SListDataType x);
//ͷɾ
void SListPopFront(SListNode** pphead);
//����
SListNode* SListFind(SListNode* phead, SListDataType X);

void SListInsterAfter(SListNode* pphead, SListDataType x);
void Print(SListNode** pphead);