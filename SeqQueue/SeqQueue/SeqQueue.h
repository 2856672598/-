#pragma once
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<stdbool.h>
#define MAX 2
typedef int DataType;
typedef struct Queue
{
	DataType* queue;
	int frant;
	int tail;
	int queueSize;
}Queue;
void Init(Queue* head);
bool Add(Queue* head, DataType n);
void Push(Queue* head, DataType n);
bool Pop(Queue* head);
bool Print(Queue* head);
void ClearQueue(Queue* head);
void Destory(Queue* head);
//��ȡ����ͷ������
void GetHead(Queue* head);
//���г���
int Get(Queue* head);