#include"game.h"


void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

void PrinBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (int j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");

		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}

		}
		printf("\n");
	}
}


void PlayMove(char board[ROW][COL], int row, int col)
{
	printf("���������>\n");
	while (1)
	{
		int x, y;
		printf("������Ҫ�µ�λ��");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//�жϵ�ǰλ���Ƿ�������
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
				printf("��λ���ظ�\n");
		}
		else
			printf("�����겻�Ϸ����������̴�С\n");
	}
}

void CompMove(char board[ROW][COL], int row, int col)
{
	printf("��������>\n");
	printf("\n");
	while (1)
	{
		int x = rand() % row;
		int y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}

char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	//�ж���
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col - 1; j++)
		{
			if (board[i][j] == ' ' || board[i][j] != board[i][j + 1])
				break;
		}
		if (j == col - 1)
			return board[i][j - 1];
	}
	//�ж���
	for (i = 0; i < col; i++)
	{
		int j = 0;
		for (j = 0; j < row - 1; j++)
		{
			if (board[j][i] == ' ' || board[j][i] != board[j + 1][i])
				break;
		}
		if (j == row - 1)
			return board[j][i];
	}

	//��б
	for (i = 0; i < row - 1; i++)
	{
		if (board[i][i] == ' ' || board[i][i] != board[i + 1][i + 1])
			break;
	}
	if (i == row - 1)
		return board[i][i];
	int x = 1, y = col - 2;
	while (x < row&&y >= 0)
	{
		if (board[x][y] == ' ' || board[x][y] != board[x - 1][y + 1])
			break;
		x++;
		y--;
	}
	if (x == row && y < 0)
		return board[x - 1][y + 1];
	//�ж��Ƿ�ƽ��
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 'c';
		}
	}
	//ƽ��
	return 'd';
}
