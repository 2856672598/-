#include"stack.h"
void InitStack(SqStack* head)
{
	head->Data = malloc(sizeof(DataType)*MAX);
	head->top = 0;
	head->StackSize = MAX;
}
bool AddStack(SqStack* head)
{
	if (head->top == head->StackSize)
	{
		DataType* tmp = realloc(head->Data, sizeof(DataType)*(head->StackSize * 2));
		if (tmp != NULL)
		{
			head->Data = tmp;
			head->StackSize = head->StackSize * 2;
		}
		else
			return false;
	}
	return true;
}
void Push(SqStack* head, DataType n)
{
	//bool flag = StackFull(head);
	//if (!flag)
	//{
	//	head->Data[head->top] = n;
	//	head->top += 1;
	//}
	//else
	//{
	//	printf("ջ����\n");
	//	return;
	//}

	bool flag = AddStack(head);
	if (flag)
	{
		//printf("���ݳɹ�\n");
		head->Data[head->top] = n;
		head->top += 1;
	}
}
void Pop(SqStack*head)
{
	assert(head);
	bool flag = StackEmpty(head);
	if (!flag)
	{
		head->top -= 1;
		printf("ջ�������ɹ�\n");
	}
	else
		printf("ջΪ�գ��޷�ɾ��\n");
}
bool StackFull(SqStack* head)
{
	if (head->top == head->StackSize)
		return true;
	else
		return false;
}
bool StackEmpty(SqStack*head)
{
	if (head->top == 0)
		return true;
	else
		return false;
}
void ClearStack(SqStack*head)
{
	assert(head);
	head->top = 0;
}
void Print(SqStack*head)
{
	int flog = head->top - 1;
	while (flog >= 0)
	{
		printf("%d ", head->Data[flog]);
		flog--;
	}
}
//����
void DestoryStack(SqStack* head)
{
	free(head->Data);
	head->Data = NULL;
}