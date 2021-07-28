#include"game.h"

void menu()
{
	printf("******************************\n");
	printf("********   1.play    *********\n");
	printf("********   0.EXIT    *********\n");
	printf("******************************\n");
}

void game()
{
	int size = MINES;
	char mine[ROWS][COLS];
	char show[ROWS][COLS];

	//��ʼ������
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	//������
	CreateMine(mine, ROW, COL, size);

	//PrinBoard(mine, ROW, COL);
	//PrinBoard(show, ROW, COL);

	PlayerMove(show, mine, ROW, COL);
}

int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳�\n");
			break;
		default:
			printf("�������\n");
			break;
		}

	} while (input);
	return 0;
}