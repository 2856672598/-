#define _CRT_SECURE_NO_WARNINGS
#include"Stackby_two_queue.h"
void text1()
{
	int input, data;
	Stack s;
	StackInit(&s);
	do
	{
		menu();
		printf("��ѡ��:");
		scanf("%d", &input);
		switch (input)
		{
		case EXIT:
			printf("�˳�");
			StackDestory(&s);
			return;
			break;
		case PUSH:
			printf("������ջ������:");
			scanf("%d", &data);
			StackPush(&s, data);
			break;
		case POP:
			StackPop(&s);
			break;
		case STACKTOP:
			printf("ջ��Ԫ��Ϊ%d\n", StackTop(&s));
			break;
		default:
			printf("�������\n");
			break;
		}
	} while (input);
}
int main()
{
	text1();
	return 0;
}