#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#define MAX 20
typedef int DataType;
typedef struct TreeNode
{
	struct TreeNode* liftchild;
	struct TreeNode* rightchild;
	DataType data;
}TreeNode;

typedef struct Stack
{
	int top;
	struct TreeNode* arr[MAX];
}Stack;
void StackInit(Stack* plist)
{
	plist->top = 0;
}
bool Full(Stack* plist)
{
	if (plist->top > MAX)
		return true;
	return false;
}
void StackPush(Stack* plist, TreeNode* pnode)
{
	if (!Full(plist))
	{
		//ջû��
		plist->arr[plist->top] = pnode;
		plist->top++;
	}
}
void StackPop(Stack* plist)
{
	if (plist->top > 0)
	{
		//ջ��Ϊ��
		plist->top--;
	}
}
TreeNode* BuyTreeNode(DataType x)
{
	TreeNode* newnode = malloc(sizeof(TreeNode));
	if (newnode)
	{
		newnode->liftchild = NULL;
		newnode->rightchild = NULL;
		newnode->data = x;
	}
	return newnode;
}
TreeNode* CreateTree()
{
	printf("�ڵ���Ϣ:");
	int data;
	scanf("%d", &data);
	if (data == -1)
		return NULL;
	TreeNode* newnode = BuyTreeNode(data);
	printf("����%d��������",data);
	newnode->liftchild = CreateTree();
	printf("����%d��������",data);
	newnode->rightchild = CreateTree();
	return newnode;
}
void Inorder(TreeNode* tree, Stack* plist)
{
	if (tree == NULL)
		return;
	TreeNode* root = tree;
	while (plist->top > 0 || root != NULL)
	{
		while (root != NULL)
		{
			printf("%d ", root->data);
			StackPush(plist, root);
			root = root->liftchild;
		}
		//��ջ
		StackPop(plist);
		if (plist->top >= 0)
		{
			root = plist->arr[plist->top]->rightchild;
		}
	}
}
int main()
{
	Stack plist;
	StackInit(&plist);
	TreeNode* tree = CreateTree();
	Inorder(tree, &plist);
	return 0;
}