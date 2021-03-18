#include"SeqQueue.h"
bool Add(Queue*head, DataType n)
{
	if (head->queueSize == head->tail + 1)
	{
		DataType* tmp = realloc(head->queue, sizeof(DataType)*head->queueSize * 2);
		if (tmp)
		{
			head->queue = tmp;
			head->queueSize = head->queueSize * 2;
		}
		else
			return false;
	}
	return true;
}
void Init(Queue* head)
{
	DataType* tmp = malloc(sizeof(DataType)*MAX);
	if (tmp)
	{
		head->queue = tmp;
		head->tail = 0;
		head->frant = 0;
		head->queueSize = MAX;
	}
}
void Push(Queue* head, DataType n)
{
	assert(head);
	bool flag = Add(head, n);
	if (flag)
	{
		head->queue[head->tail] = n;
		head->tail += 1;
	}
	else
		printf("��Ӵ���\n");
}
bool Pop(Queue* head)
{
	assert(head);
	if (head->tail != head->frant)
	{
		head->frant += 1;
	}
	else
	{
		printf("����Ϊ��\n");
		return false;
	}
	return true;
}
//����ɹ�����ture,ʧ��Ϊfalse;
bool Print(Queue* head)
{
	assert(head);
	if (head->tail != head->frant)
	{
		for (int i = head->frant; i < head->tail; i++)
		{
			printf("%d ", head->queue[i]);
		}
		return true;
	}
	else
		return false;
}
void ClearQueue(Queue* head)
{
	assert(head);
	head->frant = 0;
	head->tail = 0;
	printf("������ճɹ�\n");
}
void GetHead(Queue* head)
{
	assert(head);
	if (head->frant == head->tail)
	{
		printf("����Ϊ��\n");
	}
	else
		printf("%d", head->queue[head->frant]);
}
void Destory(Queue* head)
{
	assert(head);
	free(head->queue);
	head->queue = NULL;
}
//������г���
int Get(Queue* head)
{
	int length = (head->tail) - (head->frant);
	return length;
}