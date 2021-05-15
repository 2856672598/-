#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include"Stack.h"
#include"Queue.h"
void menu()
{
	printf("**********************************\n");
	printf("***1.PUSH                 2.POP***\n");
	printf("***3.QueueFont      4.QueueBack***\n");
	printf("***5.SIZE               0.EXIT****\n");
	printf("**********************************\n");
}
enum
{
	EXIT,
	PUSH,
	POP,
	QUEUEFONT,
	QUEUEBACK,
	SIZE
};
void TextStack()
{
	ST s;
	StackInit(&s);
	StackPush(&s, 1);
	StackPush(&s, 2);
	StackPush(&s, 3);
	StackPop(&s);
	StackPush(&s, 4);
	StackPush(&s, 5);
	printf("%d\n", StackSize(&s));
	while (s.top >= 0)
	{
		Datatype top = StackTop(&s);
		printf("%d ", top);
		StackPop(&s);
	}
	printf("\n%d", s.capacity);
	StackDestory(&s);
}
void TextQueue()
{
	Queue q;
	QueueInit(&q);
	int input, data;
	do
	{
		menu();
		printf("��ѡ��:");
		scanf("%d", &input);
		switch (input)
		{
		case EXIT:
			printf("�˳�\n");
			QueueDestory(&q);
			return;
			break;
		case PUSH:
			printf("������ӵ�����:");
			scanf("%d", &data);
			QueuePush(&q, data);
			break;
		case POP:
			QueuePop(&q);
			break;
		case QUEUEFONT:
			printf("��ͷΪ:%d\n", QueueFont(&q));
			break;
		case QUEUEBACK:
			printf("��βΪ:%d\n", QueueBack(&q));
			break;
		case SIZE:
			printf("��������%d������:\n", QueueSize(&q));
			break;
		}
	} while (input);
}
int main()
{
	//TextStack();
	TextQueue();
	return 0;
}