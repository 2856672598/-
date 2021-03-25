#include"snake.h"
int status = 0;
snake* food = NULL;
void gotoxy(int x, int y)//����Windows��API�����������ڿ���̨��ָ��λ��ֱ�Ӳ������������ʱ�����
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
snake*InitSnake()
{
	snake* till = malloc(sizeof(snake));
	till->next = NULL;
	till->x = 24;
	till->y = 15;
	snake* head = NULL;
	for (int i = 1; i <= 3; i++)
	{
		head = malloc(sizeof(snake));
		head->next = till;
		head->x = 24 + i * 2;
		head->y = 15;
		till = head;
	}
	while (till)
	{
		gotoxy(till->x, till->y);
		printf("��");
		till = till->next;
	}
	return head;
}
void snakeMove(snake* head)
{
	snake* nexthead = malloc(sizeof(snake));
	if (status == U)
	{
		nexthead->next = head;
		nexthead->x = head->x;
		nexthead->y = (head->y) - 1;
		head = nexthead;
		snake* q = head;
		if (head==NULL/*q->x == food->x&&q->y == food->y*/)
		{
			//��ʳ��
		}
		else
		{
			while (q->next)
			{
				Sleep(300);
				gotoxy(q->x, q->y);
				printf("��");
				q = q->next;
			}
			gotoxy(q->x, q->y);
			printf("��");
			gotoxy(q->next->x, q->next->y);
			free(q->next);
			q->next = NULL;
		}
	}
}


void keyboardControl(snake* head)
{
	status = U;       //��ʼ�������ƶ�
	while (1)
	{
		if (GetAsyncKeyState(VK_UP) && status != D)            //GetAsyncKeyState���������жϺ�������ʱָ���������״̬
		{
			status = U;           //����߲�������ǰ����ʱ�򣬰��ϼ���ִ������ǰ������
		}
		else if (GetAsyncKeyState(VK_DOWN) && status != U)     //����߲�������ǰ����ʱ�򣬰��¼���ִ������ǰ������
		{
			status = D;
		}
		else if (GetAsyncKeyState(VK_LEFT) && status != R)      //����߲�������ǰ����ʱ�򣬰������ִ������ǰ��
		{
			status = L;
		}
		else if (GetAsyncKeyState(VK_RIGHT) && status != L)     //����߲�������ǰ����ʱ�򣬰��Ҽ���ִ������ǰ��
		{
			status = R;
		}
		Sleep(300);
		snakeMove(head);
	}
}