#include"SList.h"

void SListPrint(SListNode* plist)
{
	SListNode* tmp = plist;
	while (tmp)
	{
		printf("%d->", tmp->_date);
		tmp = tmp->_next;
	}
	printf("NULL\n");
}

SListNode* CreateSListNode(DateType date)
{
	SListNode* newnode = malloc(sizeof(SListNode));
	if (newnode == NULL)
	{
		printf("CreateSListNode");
		exit(-1);
	}
	newnode->_date = date;
	newnode->_next = NULL;
	return newnode;
}

void SListPushBack(SListNode* * plist, DateType date)
{
	assert(plist);
	SListNode* newnode = malloc(sizeof(SListNode));
	if (newnode != NULL)
	{
		newnode->_date = date;
		newnode->_next = NULL;
	}
	else
		exit(-1);
	if (*plist == NULL)
	{
		*plist = newnode;
	}
	else
	{
		//�ҵ���β����ڵ�
		SListNode* tmp = *plist;
		while (tmp->_next != NULL)
		{
			tmp = tmp->_next;
		}
		tmp->_next = newnode;
	}
}

void SListPopBack(SListNode** plist)
{
	assert(plist);
	assert(*plist);
	//��β
	if ((*plist)->_next == NULL)
	{
		free(*plist);
		*plist = NULL;
	}
	else
	{
		SListNode*tmp = *plist;
		while (tmp->_next != NULL && tmp->_next->_next != NULL)
		{
			tmp = tmp->_next;
		}
		free(tmp->_next);
		tmp->_next = NULL;
	}
}

void SListPushFront(SListNode** plist, DateType date)
{
	assert(plist);
	SListNode* newnode = CreateSListNode(date);
	newnode->_next = *plist;
	*plist = newnode;
}

void SListPopFront(SListNode**plist)
{
	assert(plist);
	assert(*plist);

	SListNode* next = (*plist)->_next;
	free(*plist);
	*plist = next;
}

SListNode* SListFind(SListNode* plist, DateType x)
{
	while (plist != NULL)
	{
		if (plist->_date == x)
			return plist;
		plist = plist->_next;
	}
	return  NULL;
}

void SListInsertAfter(SListNode* pos, DateType x)
{
	assert(pos);
	SListNode* next = CreateSListNode(x);
	next->_next = pos->_next;
	pos->_next = next;
}

void SListEraseAfter(SListNode* pos)
{
	assert(pos);
	SListNode* next = pos->_next;
	pos->_next = next->_next;
	free(next);
}

void SListDestory(SListNode* plist)
{
	SListNode* next = NULL;
	while (plist)
	{
		next = plist->_next;
		free(plist);
		plist = next;
	}
}

//ɾ��posλ��
void SListErasePos(SListNode** plist, SListNode* pos)
{
	assert(plist);
	assert(pos != NULL);
	//���ɾ������ͷ���
	if (pos == *plist)
	{
		SListNode* next = (*plist)->_next;
		free(*plist);
		*plist = next;
	}
	SListNode* cur = (*plist);
	while (cur->_next != pos)
	{
		cur = cur->_next;
	}
	cur->_next = pos->_next;
	free(pos);
}