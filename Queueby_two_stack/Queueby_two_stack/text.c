#include"Queueby_two_stack.h"
void Text1()
{
	Queue q;
	QueueInit(&q);
	int input;
	Datatype data;
	do
	{
		menu();
		printf("��ѡ��:");
		scanf("%d", &input);
		switch (input)
		{
		case EXIT:
			QueueuDestory(&q);
			printf("�˳�");
			return;
			break;
		case PUSH:
			printf("�������������:");
			scanf("%d", &data);
			QueuePush(&q, data);
			break;
		case POP:
			QueuePop(&q);
			break;
		case TOP:
			printf("��ͷΪ:%d\n", QueueTop(&q));
			break;
		default:
			printf("�����������ѡ��\n");
			break;
		}
	} while (input);
}
int main()
{
	Text1();
	return 0;
}