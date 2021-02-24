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
void SLPopBack(SL* ps);
//ͷ��
void SLPushFront(SL* ps, SLDataType x);
//ͷɾ
void SLPopFront(SL* PS);

//�������
void SLInsert(SL* ps, int pos, SLDataType x);
//����
int SLFind(SL* ps, SLDataType x);
//ָ��ɾ�� pos ɾ����λ��
void SLErase(SL* ps, int pos);
//�ͷ�
void SLDestory(SL* ps);
//����
void SLAddCapacity(SL* ps);

void SLPrint(SL* ps);