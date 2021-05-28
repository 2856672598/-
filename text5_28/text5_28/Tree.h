#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<assert.h>
typedef char TDataType;

typedef struct BTNode
{
	struct BTNode* left;
	struct BTNode* right;
	TDataType data;
}BTNode;


// ǰ�� ���� �������
void PrevOrder(BTNode* root);
void InOrder(BTNode* root);
void PostOrder(BTNode* root);
// �ڵ����
int TreeSize(BTNode* root);
// Ҷ�ӽڵ�ĸ���
int TreeLeafSize(BTNode* root);
// �������
void LevelOrder(BTNode* root);
//������
void TreeDestory(BTNode* root);