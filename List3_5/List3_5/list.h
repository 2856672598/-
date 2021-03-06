#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
typedef int DataType;
typedef struct ListNode
{
	struct ListNode* next;
	struct ListNode* prev;
	DataType Data;
}ListNode;

void ListPushBack(struct ListNode* phead, DataType x);
struct ListNode* BuyListNode(DataType x);
void ListPopBack(ListNode* phead);
//ͷ��
void ListPushFront(ListNode* phead, DataType x);
void ListPopFront(ListNode* phead);
//����
struct ListNode* ListFind(ListNode* phead, DataType x);
//ɾ��
void ListErase(ListNode* pos);
//����
void ListInsert(ListNode* pos, DataType x);
//�޸�
void ListModify(ListNode* pos, DataType x);
void ListPrint(ListNode* phead);

ListNode* ListInit();
void ListClear(ListNode* phead);
void ListDestory(ListNode** pphead);
