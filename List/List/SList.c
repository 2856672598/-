#include"Slist.h"

SListNode* foundNode(SListDataType x)
{
	SListNode* newNode = malloc(sizeof(SListNode));
	if (newNode == NULL)
	{
		printf("����ʧ��\n");
		exit(-1);
	}
	newNode->data = x;
	newNode->next = NULL;
	return newNode;
}
void Print(SListNode** pphead)
{
	while ((*pphead) != NULL)
	{
		printf("%d->", (*pphead)->data);
		*pphead = (*pphead)->next;
	}
	printf("NULL");
}
//β��
void SListPushBack(SListNode** pphead, SListDataType x)
{
	SListNode* newNode = foundNode(x);
	if (*pphead == NULL)
	{
		*pphead = newNode;
	}
	else
	{
		SListNode* cur = *pphead;
		while (cur->next != NULL)
		{
			cur = cur->next;
		}
		cur->next = newNode;
	}
}
//βɾ
void SListPopBack(SListNode** pphead)
{
	if (*pphead == NULL)
		return;
	else if ((*pphead)->next == NULL)
	{
		*pphead = NULL;
		free(*pphead);
	}
	else
	{
		SListNode* tail = *pphead;
		SListNode * cur = *pphead;
		while (cur->next != NULL)
		{
			tail = cur;
			cur = cur->next;
		}
		tail->next = NULL;
		free(cur);
	}
}

//ͷ��
void SListPushFront(SListNode** pphead, SListDataType x)
{
	SListNode* newNode = foundNode(x);
	if (*pphead == NULL)
	{
		*pphead = newNode;
	}
	else
	{
		newNode->next = *pphead;
		*pphead = newNode;
	}
}
//ͷɾ
void SListPopFront(SListNode** pphead)
{
	//1.Ϊ������ʱ
	//2 ��һ�������Ͻڵ�ʱ
	if (*pphead == NULL)
		return;
	else
	{
		SListNode* cur = NULL;
		cur = (*pphead)->next;
		free(*pphead);
		*pphead = cur;
	}
}
//����
SListNode* SListFind(SListNode* phead, SListDataType x)
{
	while (phead)
	{
		if (phead->data == x)
			return phead;
		phead = phead->next;
	}
	return NULL;
}

void SListInsterAfter(SListNode* pos, SListDataType x)
{
	assert(pos);
	SListNode* newNode = foundNode(x);
	newNode->next = (pos)->next;
	(pos)->next = newNode;
}