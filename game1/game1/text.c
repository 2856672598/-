#include"game.h"

void menu()
{
	printf("******************************************\n");
	printf("*************     1. play    *************\n");
	printf("*************     2.exit     *************\n");
	printf("******************************************\n");
}
void game()
{
	char board[ROW][COL];
	//��ʼ������
	InitBoard(board, ROW, COL);

	//��ӡ����
	PrinBoard(board, ROW, COL);

	char flag = 0;
	//����
	while (1)
	{
		PlayMove(board, ROW, COL);
		PrinBoard(board, ROW, COL);
		//�жϵ�ǰ״̬
		flag = IsWin(board, ROW, COL);
		if (flag != 'c')
			break;

		//��������
		CompMove(board, ROW, COL);
		PrinBoard(board, ROW, COL);
		//�жϵ�ǰ״̬
		flag = IsWin(board, ROW, COL);
		if (flag != 'c')
			break;
	}
	if (flag == '*')
		printf("��ϲ��һ�ʤ\n");
	else if (flag == '#')
		printf("��ϲ���Ի�ʤ\n");
	else
		printf("ƽ����\n");
}
int main()
{
	int input;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			printf("�˳�\n");
			break;
		case 1:
			game();
			break;
		default:
			printf("�������");
			break;
		}
	} while (input);
	return 0;
}