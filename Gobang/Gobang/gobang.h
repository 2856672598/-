#pragma once
#include<stdio.h>
#include<windows.h>
#define ROW 15
#define COL 15

#define NEXT   0       //����
#define PLAYER1_WIN 1  //���һӮ
#define PLAYER2_WIN 2  //��Ҷ�Ӯ
#define DRAW        4  //ƽ��

#define PLAYER1   1
#define PLAYER2   2


enum Dir
{
	LEFT,
	RIGHT,
	UP,
	DOWN,
	LEFT_UP,
	LEFT_DOWN,
	RIGHT_UP,
	RIGHT_DOWN
};
int x, y;
int board[ROW][COL];
void Code();
void Game();
void Menu();
void ShowBoard(int board[][COL], int row, int col);
void PlayMove(int board[][COL], int Player);

int Count(int baord[ROW][COL], int row, int col, enum Dir d);
int Over(int board[][COL]);
//����
void Load();