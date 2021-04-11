//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#define MAX 100
//typedef char TElemType;
//typedef struct Node
//{
//	TElemType data;
//	int parent;
//}Node;
//
//typedef struct Tree
//{
//	Node nodes[MAX];
//	int size;
//}Tree;
//void Init(struct Tree * Ptree, int size)
//{
//	Ptree->size = size;
//	printf("����ڵ�ֵ��˫�׽ڵ��������е��±�\n");
//	for (int i = 0; i < size; i++)
//	{
//		getchar();
//		scanf("%c %d", &Ptree->nodes[i].data, &Ptree->nodes[i].parent);
//	}
//}
//void Print(struct Tree tree)
//{
//	for (int i = 0; i < tree.size; i++)
//	{
//		printf("%d  %c  %d  %c\n", i, tree.nodes[i].data, tree.nodes[i].parent, tree.nodes[tree.nodes[i].parent].data);
//	}
//}
////����˫�׽ڵ�
//int Find(Tree tree, TElemType x)
//{
//	for (int i = 0; i < tree.size; i++)
//	{
//		if (tree.nodes[i].data == x)
//			return tree.nodes[i].parent;
//	}
//	return 0;
//}
//void text()
//{
//	struct Tree tree;
//	int size = 0;
//	printf("������ڵ���\n");
//	scanf("%d", &size);
//	Init(&tree, size);
//	//Print(tree);
//	char a;
//	getchar();
//	scanf("%c", &a);
//	int len = Find(tree, a);
//	printf("%c��˫��Ϊ%c,�洢λ���±�Ϊ%d\n", a, tree.nodes[len].data, len);
//}
//
//int main()
//{
//	text();
//	return 0;
//}



//���ӱ�ʾ��
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//#include<string.h>
#include<stdlib.h>
#define MAX 100
typedef char TElem;
//���ӽڵ�
typedef struct Child
{
	struct Child* next;
	int pos;
}Child;
//���ڵ�
typedef struct Tree
{
	TElem data;
	struct Child* child;//����ͷ�ڵ�
}CTRoot;

//����
typedef struct
{
	CTRoot nodes[MAX];
	int size;//�ڵ���
}CTree;


void Init(CTree* node, int size)
{
	node->size = size;
	for (int i = 0; i < size; i++)
	{
		printf("�������%d�ڵ������\n", i + 1);
		getchar();
		scanf("%c", &(node->nodes[i].data));
		node->nodes[i].child = malloc(sizeof(Child));
		node->nodes[i].child->next = NULL;

		printf("������%c�ĺ��ӽڵ�����\n", node->nodes[i].data);
		int count = 0;
		scanf("%d", &count);
		if (count != 0)
		{
			Child* p = node->nodes[i].child;
			for (int j = 0; j < count; j++)
			{
				Child * New = malloc(sizeof(Child));
				New->next = NULL;
				printf("������%d����˳����е�λ��\n", j + 1);
				scanf("%d", &New->pos);
				p->next = New;
				p = New;
			}
		}
	}
}

void Find(CTree node, TElem x)
{
	int flag = 0;
	for (int i = 0; i < node.size; i++)
	{
		if (node.nodes[i].data == x)
		{
			Child* p = node.nodes[i].child->next;
			while (p)
			{
				flag = 1;
				printf("%c ", node.nodes[p->pos].data);
				p = p->next;
			}
			if (flag == 0)
				printf("%cΪҶ�ӽڵ�\n", x);
			return;
		}
	}
	printf("%c�ڵ㲻����\n", x);
}
//ˢ�»�����
void MyFflush()
{
	int ch = 0;
	while (ch = getchar() != '\n'&&ch != EOF);
}
void text()
{
	CTree node;
	int size = 0;
	printf("������ڵ�����\n");
	scanf("%d", &size);
	Init(&node, size);
	while (1)
	{
		char ch;
		printf("\n����Ҫ�����ӽڵ�\n");
		MyFflush();
		scanf("%c", &ch);
		Find(node, ch);
	}
}

int main()
{
	text();
	return 0;
}