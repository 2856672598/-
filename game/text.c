#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
void menu()
{
	printf("**********************\n");
	printf("***1.text   0. exit***\n");
	printf("**********************\n");
}
void game()
{
	char input;
	srand((unsigned int)time(NULL));
	//������̵�����
	char board[ROW][COL] = {0};
	//��ʼ������
	InitBoard(board, ROW, COL);
	//��ӡ����
	DisplayBoard(board, ROW, COL);
	while (1)
	{
		//�������
		PlayerMove(board,ROW,COL);
		//��ӡ����
		DisplayBoard(board, ROW, COL);
		//�ж���Ӯ
		input = Win(board, ROW, COL);
		if (input != 'F')
			break;
		//��������
		ComputerMove(board, ROW, COL);
		//ˢ��
		DisplayBoard(board, ROW, COL);
		//��Ӯ�ж�
		input = Win(board, ROW, COL);
		if (input != 'F')
			break;
	}
	switch (input)
	{
	case '*':
		printf("С��Ӯ\n");
		break;
	case '#':
		printf("����Ӯ\n");
		break;
	case 'T':
		printf("ƽ��\n");
		break;
	}
}
void text()
{
	do
	{
		int input;
		menu();
		scanf("%d", &input);
		while (getchar() != '\n');//������뻺��������ֹ��������ֺ���ѭ��
		switch (input)
		{

		case 0:
			printf("�˳���Ϸ\n");
			break;
		case 1:
			printf("������Ϸ\n");
			game();
			break;
		default:
			printf("������������������\n");
			break;
		}
	} while (1);
}
int main()
{
	text();
	return 0;
}