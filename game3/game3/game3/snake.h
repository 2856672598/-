#pragma once

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
#include<time.h>
#include<stdlib.h>
#include<Windows.h>
#include<stdbool.h>
#include<conio.h>
#define INITLENGTH 3//Ĭ���߳�
#define WIDE 50//��Ϸ�����
#define LONG 30//��

char status;//�˶�����

typedef struct Node
{
	int x;
	int y;
	struct Node*next;
}Node;

typedef struct Food Food;
struct Food
{
	int x;
	int y;
}*pos;

int foodScore;//ʳ���ֵ
int sleepTime;//����ʱ��
int faction;//����

void gotoXY(int x, int y);
Node* stackInit();
void drawMap(int wide, int high);
void snakeMove(Node** head, char direct);
void keyboardControl(Node** head);

void Print(Node* newNode);
void createFood(Node* head);

void printFraction();
bool isHitWall(Node* head);
void Setcolor(unsigned short color);

void Frame(int n);
//��Ϸ˵��
void Gamedescription();
//��ʼ�ͽ����߿�
void Frame(int n);
//������ӡ
void endPrint();