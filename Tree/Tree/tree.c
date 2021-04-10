#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define MAX 100
typedef char TElemType;
typedef struct Node
{
	TElemType data;
	int parent;
}Node;

typedef struct Tree
{
	Node nodes[MAX];
	int size;
}Tree;
void Init(struct Tree * Ptree, int size)
{
	Ptree->size = size;
	printf("����ڵ�ֵ��˫�׽ڵ��������е��±�\n");
	for (int i = 0; i < size; i++)
	{
		getchar();
		scanf("%c %d", &Ptree->nodes[i].data, &Ptree->nodes[i].parent);
	}
}
void Print(struct Tree tree)
{
	for (int i = 0; i < tree.size; i++)
	{
		printf("%d  %c  %d  %c\n", i, tree.nodes[i].data, tree.nodes[i].parent, tree.nodes[tree.nodes[i].parent].data);
	}
}
//����˫�׽ڵ�
int Find(Tree tree, TElemType x)
{
	for (int i = 0; i < tree.size; i++)
	{
		if (tree.nodes[i].data == x)
			return tree.nodes[i].parent;
	}
	return 0;
}
void text()
{
	struct Tree tree;
	int size = 0;
	printf("������ڵ���\n");
	scanf("%d", &size);
	Init(&tree, size);
	//Print(tree);
	char a;
	getchar();
	scanf("%c", &a);
	int len = Find(tree, a);
	printf("%c��˫��Ϊ%c,�洢λ���±�Ϊ%d\n", a, tree.nodes[len].data, len);
}

int main()
{
	text();
	return 0;
}
