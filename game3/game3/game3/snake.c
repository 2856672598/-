#include"snake.h"

void gotoXY(int x, int y)
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);//ͨ����ȡ������
}

void Setcolor(unsigned short color)
{
	HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hCon, color);
}

void Frame(int n)                      //���߿�
{
	int i;
	gotoXY(17, 5);
	Setcolor(11);
	printf("��--------------------------");
	Setcolor(14);
	printf("oOOo");
	Setcolor(11);
	printf("----------");
	Setcolor(14);
	printf("(_)");
	Setcolor(11);
	printf("----------");
	Setcolor(14);
	printf("oOOo");
	Setcolor(11);
	printf("--------------------------��");
	for (i = 6; i <= 19; i++)               //���߿�
	{
		gotoXY(17, i);
		printf("��");
		gotoXY(102, i);
		printf("��");
	}
	gotoXY(17, 20);
	printf("��---------------------------------------");
	Setcolor(14);
	printf("����");
	Setcolor(11);
	printf("--------------------------------------��");
	gotoXY(53, 23);//56 24
	printf("�ߡ���������������");
	gotoXY(53, 26);
	printf("��ޣޣޣޣޣޣޡ�");
	if (n == 0)                       //��ҳ����ַ�ͼ��
	{
		gotoXY(57, 2);
		Setcolor(6);
		printf("\\\\\\|///");
		gotoXY(54, 3);
		printf("\\\\");
		gotoXY(58, 3);
		Setcolor(15);
		printf(".-.-");
		gotoXY(65, 3);
		Setcolor(6);
		printf("//");
		gotoXY(55, 4);
		Setcolor(14);
		printf("(");
		gotoXY(58, 4);
		Setcolor(15);
		printf(".@.@");
		gotoXY(65, 4);
		Setcolor(14);
		printf(")");//
	}
	else                            //��Ϸ����ҳ����ַ�ͼ��
	{
		gotoXY(57, 1);
		Setcolor(6);
		printf("��    ��");
		gotoXY(55, 2);
		printf(" /  \\  /  \\");
		gotoXY(54, 3);
		printf("�� �� �� �� ��");
		gotoXY(54, 4);
		printf("�� ");
		Setcolor(15);
		printf("��    ��");
		Setcolor(14);
		printf(" / ");
		gotoXY(55, 5);
		printf("��   ��   /");
		gotoXY(57, 6);
		printf("�� �� ��");
		gotoXY(60, 7);
		printf("��");
	}
}



void drawMap(int wide, int high)
{
	int i = 0;
	//��һ��
	for (i = 0; i < wide; i++)
		printf("��");
	//�м䲿��
	for (i = 1; i < high - 1; i++)
	{
		gotoXY(0, i);
		printf("��");
		gotoXY(2 * (wide - 1), i);
		printf("��");
	}
	//ǽ�����һ��
	gotoXY(0, i);
	int j = 0;
	for (j = 0; j < wide; j++)
		printf("��");

	j = high + 3;
	for (i; i < j; i++)
	{
		gotoXY(0, i);
		printf("��");
		gotoXY(2 * (wide - 1), i);
		printf("��");
	}
	gotoXY(3, LONG + 1);
	printf("����Ϊ��");
	gotoXY(0, i);
	for (i = 0; i < wide; i++)
		printf("��");

}

Node* stackInit()
{
	srand((unsigned int)time(NULL));
	Node* tail = malloc(sizeof(Node));
	tail->next = NULL;
	tail->x = 30;
	tail->y = 20;
	int i = 0;
	for (i = 0; i < INITLENGTH; i++)
	{
		Node*head = malloc(sizeof(Node));
		assert(head);
		head->next = tail;
		head->x = tail->x + 2;
		head->y = tail->y;
		tail = head;
	}
	Node* head = tail;
	while (tail)
	{
		gotoXY(tail->x, tail->y);
		printf("*");
		tail = tail->next;
	}
	return head;
}


void createFood(Node* head)
{
	assert(head);

	while (1)
	{
		pos = malloc(sizeof(Food));
		assert(pos);
		Node* cur = head;
		int flag = 0;
		pos->x = 1;
		pos->y = LONG;
		while (pos->x % 2 != 0 || pos->x >= WIDE || pos->x < 2)
		{
			pos->x = rand() % WIDE + 2;
		}
		while (pos->y >= LONG - 1)
		{
			pos->y = rand() % LONG + 1;
		}
		while (cur)
		{
			if (cur->x == pos->x || cur->y == pos->y)
			{
				free(pos);
				flag = 1;
				break;
			}
			cur = cur->next;
		}
		if (flag == 0)
			break;
	}
	gotoXY(pos->x, pos->y);
	printf("*");
}


void printFraction()
{
	faction += foodScore;
	gotoXY(13, LONG + 1);
	printf("%d", faction);
}


bool isHitWall(Node* head)
{
	assert(head);
	if (head->x == 0 || head->y == 0 || head->x == 2 * (WIDE - 1) || head->y == LONG - 1)
		return true;
	return false;
}


void Print(Node* newNode)
{
	assert(newNode);
	while (newNode->next != NULL && newNode->next->next != NULL)
	{
		gotoXY(newNode->x, newNode->y);
		printf("*");
		newNode = newNode->next;
	}
	gotoXY(newNode->next->x, newNode->next->y);
	printf(" ");
	free(newNode->next);
	newNode->next = NULL;
}
void snakeMove(Node** head, char direct)
{
	assert(head);
	Node* newNode = malloc(sizeof(Node));
	assert(newNode);
	newNode->next = NULL;

	if (direct == 'W')
	{
		//����
		newNode->x = (*head)->x;
		newNode->y = (*head)->y - 1;
		newNode->next = *head;
		*head = newNode;

		if (newNode->x == pos->x && newNode->y == pos->y)
		{
			while (newNode)
			{
				gotoXY(newNode->x, newNode->y);
				printf("*");
				newNode = newNode->next;
			}
			printFraction();
			createFood(*head);
		}
		else
			Print(newNode);
	}
	if (direct == 'S')
	{
		newNode->x = (*head)->x;
		newNode->y = (*head)->y + 1;
		newNode->next = *head;
		*head = newNode;
		
		if (newNode->x == pos->x && newNode->y == pos->y)
		{
			while (newNode)
			{
				gotoXY(newNode->x, newNode->y);
				printf("*");
				newNode = newNode->next;
			}
			printFraction();
			createFood(*head);
		}
		else
			Print(newNode);
	}
	if (direct == 'D')
	{
		newNode->x = (*head)->x + 2;
		newNode->y = (*head)->y;
		newNode->next = *head;
		*head = newNode;


		if (newNode->x == pos->x && newNode->y == pos->y)
		{
			while (newNode)
			{
				gotoXY(newNode->x, newNode->y);
				printf("*");
				newNode = newNode->next;
			}
			printFraction();
			createFood(*head);
		}
		else
			Print(newNode);
	}

	if (direct == 'A')
	{
		newNode->x = (*head)->x - 2;
		newNode->y = (*head)->y;
		newNode->next = *head;
		*head = newNode;

		if (newNode->x == pos->x && newNode->y == pos->y)
		{
			while (newNode)
			{
				gotoXY(newNode->x, newNode->y);
				printf("*");
				newNode = newNode->next;
			}
			printFraction();
			createFood(*head);
		}
		else
			Print(newNode);
	}
}


void keyboardControl(Node** head)
{
	status = 'D';//��¼��ǰ�����
	sleepTime = 400;
	foodScore = 5;
	faction = 0;//��ֵ
	while (1)
	{
		//if (GetAsyncKeyState(VK_UP) && status != 'D')
		//	status = 'U';
		//else if (GetAsyncKeyState(VK_RIGHT) && status != 'L')
		//	status = 'R';
		//else if (GetAsyncKeyState(VK_LEFT) && status != 'R')
		//	status = 'L';
		//else if (GetAsyncKeyState(VK_DOWN) && status != 'U')
		//	status = 'D';

		if (_kbhit())
		{
			int key = _getch();
			if (key == 'D'&&status != 'A')
				status = 'D';
			else if (key == 'A'&& status != 'D')
				status = 'A';
			else if (key == 'W'&& status != 'S')
				status = key;
			else if (key == 'S'&&status != 'W')
				status = key;

		}

		//����
		if (GetAsyncKeyState(VK_F7))
		{
			if (sleepTime > 50)
			{
				sleepTime -= 50;
				foodScore += 1;
			}
		}
		//����
		if (GetAsyncKeyState(VK_F8))
		{
			if (sleepTime < 600)
			{
				sleepTime += 50;
				foodScore -= 1;
			}
		}

		gotoXY(20, LONG + 1);
		printf("��ǰʳ���ֵΪ��%d", foodScore);

		Sleep(sleepTime);
		snakeMove(head, status);

		if (isHitWall(*head))//ײǽ
			break;
	}

}




void endPrint()
{
	system("cls");
	Frame(0);
	int n = 0;
	Frame(1);
	gotoXY(53, 8);
	printf("���ķ���Ϊ��%d\n", faction);
	gotoXY(53, 10);
	printf("�����������");

	system("pause");
	system("cls");
}


void Gamedescription()       //��Ϸ˵��
{
	system("cls");
	gotoXY(55, 4);
	printf("��Ϸ˵��");
	Setcolor(12);
	gotoXY(34, 8);
	printf("1.��W S A D�ֱ�������ϡ��ҡ��µķ���");
	gotoXY(34, 10);
	printf("3.������ײǽʱ��Ϸ����");
	gotoXY(34, 14);
	printf("4.��f7���ɼ��٣���f8���ɼ���");
	gotoXY(34, 16);
	printf("5.�ٶ��Զ����ӵ�һ���̶Ȼ򰴼��ټ��󣬽����ټ�������");
	gotoXY(34, 18);
	printf("6.С��ÿ�Ե�һ��ʳ������ͻ����ӡ���ʼ����Ϊ��");


	system("pause");

	system("cls");
}