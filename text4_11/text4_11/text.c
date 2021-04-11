#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define MAX 20
typedef char DataType;

typedef struct Child
{
	int child;//��ŵ����±�  ---���ӵ��±�
	struct Child* next;
}Child;

//��ṹ
typedef struct CTbox
{
	DataType data;//λ���±�
	Child* FistChild;//��һ�����ӵ�ͷ�ڵ�
}CTbox;

//���ṹ
typedef struct CTree
{
	int size;//�ڵ���
	CTbox nodes[MAX];
}CTree;
void Init(CTree* ctree, int size)
{
	ctree->size = size;
	for (int i = 0; i < size; i++)
	{
		printf("�����%d���ڵ����ֵ", i + 1);
		getchar();
		scanf("%c", &ctree->nodes[i].data);
		printf("������%c���ӽڵ������\n", ctree->nodes[i].data);
		int count = 0;
		scanf("%d", &count);
		Child*tail = ctree->nodes[i].FistChild = NULL;
		for (int j = 1; j <= count; j++)
		{
			Child * NewNode = malloc(sizeof(Child));
			NewNode->next = NULL;
			printf("������%c�ĵ�%d�����ӽڵ����ڵ�λ��\n", ctree->nodes[i].data, j);
			scanf("%d", &NewNode->child);
			if (ctree->nodes[i].FistChild == NULL)
			{
				ctree->nodes[i].FistChild = NewNode;
				tail = NewNode;
			}
			else
			{
				tail->next = NewNode;
				tail = NewNode;
			}
		}
	}
}

void Find(CTree ctree, DataType x)
{
	for (int i = 0; i < ctree.size; i++)
	{
		if (ctree.nodes[i].data == x)
		{
			Child* p = ctree.nodes[i].FistChild;
			while (p)
			{
				printf("%c ", p->child);
				p = p->next;
			}
		}
	}
}

void Print(CTree ctree)
{
	for (int i = 0; i < ctree.size; i++)
	{
		printf("���ڵ㣺%c\n", ctree.nodes[i].data);
		printf("�ӽڵ�Ϊ��");
		Child* tmp = ctree.nodes[i].FistChild;
		if (tmp)
		{
			while (tmp)
			{
				printf("%c ", ctree.nodes[tmp->child].data);
				tmp = tmp->next;
			}
		}
		else
			printf("%cΪҶ�ӽڵ�", ctree.nodes[i].data);
		printf("\n");
	}
}
void text()
{
	CTree node;
	int size = 0;
	printf("����ڵ���\n");
	scanf("%d", &size);
	Init(&node, size);
	Print(node);
	//Find(node, 'E');
}
int main()
{
	text();
	return 0;
}