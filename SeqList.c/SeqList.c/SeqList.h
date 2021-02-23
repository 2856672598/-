#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>
typedef int SLDataType;

typedef struct SeqList
{
	SLDataType* a;
	int sz;
	int capacity;
}SL;
//��ʼ��
void SLInit(SL*ps);
//β��
void SLPushBack(SL*ps, SLDataType x);
//βɾ
void SLPopBack(SL* ps, int x);
//ͷ��
void SLPushFront(SL* ps, SLDataType x);
//ͷɾ
void SLPopFront(SL* PS, int x);

//�������
void SLInsert(SL* ps, int pos, SLDataType x);
//����
int SLFind(SL* ps, SLDataType x);
//ָ��ɾ�� pos ɾ����λ��
void SLErase(SL* ps, int pos);

//����
void SLAddCapacity(SL* ps);

void SLPrint(SL* ps);