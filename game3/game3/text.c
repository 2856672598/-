#include"snake.h"
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

void game()
{
	system("mode con cols=150 lines=60");
	//���ع��
	CONSOLE_CURSOR_INFO cursor;
	cursor.bVisible = false;
	cursor.dwSize = 1;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor);

	drawMap(WIDE, LONG);
	Node* head = stackInit();
	createFood(head);
	keyboardControl(&head);
	system("cls");
}

void menu()
{
	gotoXY(53, 8);
	Setcolor(14);
	printf("̰ �� �� �� �� ս");
	gotoXY(26, 14);
	printf("1.��ʼ��Ϸ");
	gotoXY(46, 14);
	printf("2.��Ϸ˵��");
	gotoXY(66, 14);
	printf("3.�÷�����");
	gotoXY(86, 14);
	printf("0.�˳���Ϸ");
	Frame(0);

	gotoXY(56, 24);
	Setcolor(14);
	printf("ǰ����");
}


int main()
{
	int input = 1;
	do
	{
		Frame(0);
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			Frame(1);
			break;
		case 2:
			Gamedescription();
			break;
		case 0:
			break;
		}
	} while (input);

	return 0;
}