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
TreeNode* StackPop(Stack* plist)
{
	if (plist->top > 0)
	{
		//ջ��Ϊ��
		plist->top--;
		return plist->arr[plist->top];
	}
	return NULL;
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
//void Inorder(TreeNode* tree, Stack* plist)
//{
//	if (tree == NULL)
//		return;
//	TreeNode* root = tree;
//	while (plist->top > 0 || root != NULL)
//	{
//		while (root != NULL)
//		{
//			printf("%d ", root->data);
//			StackPush(plist, root);
//			root = root->liftchild;
//		}
//		//��ջ
//		StackPop(plist);
//		if (plist->top >= 0)
//		{
//			root = plist->arr[plist->top]->rightchild;
//		}
//	}
//}

//void Preorder(TreeNode* tree, Stack* plist)
//{
//	TreeNode* root = tree;
//	StackPush(plist, root);
//	while (plist->top > 0)
//	{
//		TreeNode* node = StackPop(plist);
//		if (node != NULL)
//			printf("%d ", node->data);
//		else
//			continue;
//		StackPush(plist, node->rightchild);
//		StackPush(plist, node->liftchild);
//	}
//}


//void Preorder(TreeNode* tree, Stack* plist)
//{
//	TreeNode* root = tree;
//	StackPush(plist, root);
//	//��ջ��Ϊ��һֱѭ��
//	while (plist->top > 0)
//	{
//		TreeNode* node = StackPop(plist);
//		if (node != NULL)
//			printf("%d", node->data);
//		else
//			continue;
//		StackPush(plist, node->rightchild);
//		StackPush(plist, node->liftchild);
//	}
//}
//void Inorder(TreeNode* tree, Stack* plist)
//{
//	//������������
//	TreeNode* root = tree;
//	while (plist->top > 0 || root != NULL)
//	{
//		while (root != NULL)
//		{
//			StackPush(plist, root);
//			root = root->liftchild;
//		}
//		StackPop(plist);
//		if (plist->top >= 0)
//		{
//			printf("%d ", plist->arr[plist->top]->data);
//			root = plist->arr[plist->top]->rightchild;
//		}
//	}
//}

void Preorder(TreeNode* tree, Stack* plist)
{
	//ǰ����� ������
	TreeNode* root = tree;
	StackPush(plist, root);
	//��ջ��Ϊ��һֱѭ��
	while (plist->top > 0)
	{
		TreeNode* node = StackPop(plist);
		if (node != NULL)
		{
			printf("%d ", node->data);
		}
		else
			continue;
		StackPush(plist, node->rightchild);
		StackPush(plist, node->liftchild);
	}
}
void Inorder(TreeNode* tree, Stack* plist)
{
	//������������
	TreeNode* root = tree;
	while (plist->top > 0 || root != NULL)
	{
		//һֱ������ֱ���ҵ���Ϊֹ
		while (root != NULL)
		{
			StackPush(plist, root);
			root = root->liftchild;
		}
		TreeNode* node = StackPop(plist);
		//��ջ��ʱ����NULL
		if (node != NULL)
		{
			printf("%d ", node->data);
			root = plist->arr[plist->top]->rightchild;
		}
	}
}
void Postorder(TreeNode* tree, Stack* plist)
{
	TreeNode* root = tree;
	while (root != NULL || plist->top > 0)
	{
		while (root)
		{
			StackPush(plist, root);
			root = root->liftchild;
		}
		TreeNode* node = StackPop(plist);
		if (node)
		{
			root = node->rightchild;
		}
		printf("%d ", node->data);
	}
}
int main()
{
	Stack plist;
	StackInit(&plist);
	TreeNode* tree = CreateTree();
	Postorder(tree, &plist);
	return 0;
}