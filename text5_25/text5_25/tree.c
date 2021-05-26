#include"tree.h"
TNode* CreateTree()
{
	TDataType data;
	printf("�ڵ�");
	scanf("%c", &data);
	getchar();
	if (data == '#')
		return NULL;
	TNode* newnode = malloc(sizeof(TNode));
	if (newnode)
	{
		newnode->data = data;
		newnode->left = newnode->right = NULL;
	}
	printf("%c��������", data);
	newnode->left = CreateTree();
	printf("%c��������", data);
	newnode->right = CreateTree();
	return newnode;
}
void TreeDestory(TNode* proot)
{
	if (proot == NULL)
		return;
	TreeDestory(proot->left);
	TreeDestory(proot->right);
	free(proot);
	return;
}
void PreOrder(TNode* root)
{
	if (root == NULL)
		return;
	printf("%c ", root->data);
	PreOrder(root->left);
	PreOrder(root->right);
}
void InOrder(TNode* proot)
{
	if (proot == NULL)
		return;
	InOrder(proot->left);
	printf("%c ", proot->data);
	InOrder(proot->right);
}
void PostOrder(TNode* root)
{
	if (root == NULL)
		return;
	PostOrder(root->left);
	PostOrder(root->right);
	printf("%c ", root->data);
}
int TreeSize(TNode* root)
{
	if (root == NULL)
		return 0;
	int left = TreeSize(root->left);
	int right = TreeSize(root->right);
	return left + right + 1;
}
int TreeDepth(TNode* root)
{
	if (root == NULL)
		return 0;
	int left = TreeDepth(root->left);
	int right = TreeDepth(root->right);

	return left < right ? right + 1 : left + 1;
}

int BinaryTreeLevelkSize(TNode* root, int k)
{
	if (root == NULL)
		return 0;
	if (k == 1)
		return 1;
	return BinaryTreeLevelkSize(root->left, k - 1)
		+ BinaryTreeLevelkSize(root->right, k - 1);
}
//��ȫ�������ж�
bool CompleteBinaryTree(TNode* root, Queue* q)
{
	if (root == NULL)
		return true;
	QueuePush(q, root);
	while (!QueueEmpty(q))
	{
		TNode* tmp = QueueFront(q);
		QueuePop(q);
		if (tmp == NULL)
			break;
		QueuePush(q, tmp->left);
		QueuePush(q, tmp->right);
	}
	//�ж϶����еĽڵ��Ƿ�Ϊ��
	while (!QueueEmpty(q))
	{
		TNode* tmp = QueueFront(q);
		if (tmp)
			return false;
		QueuePop(q);
	}
	return true;
}

//ƽ��������ж�
bool IsBalanced(TNode* root, int* depth)
{
	if (root == NULL)
	{
		*depth = 0;
		return true;
	}
	else
	{
		int left = 0;
		if (IsBalanced(root->left, &left) == false)
			return false;
		int right = 0;
		if (IsBalanced(root->right, &right) == false)
			return false;
		//�ж����������ĸ߶Ȳ�
		if (abs(left - right) > 1)
			return false;
		*depth = left < right ? right + 1 : left + 1;
		return true;
	}
}
void LevelTraversal(TNode* root, Queue* q)
{
	if (root == NULL)
		return;
	QueuePush(q, root);
	while (!QueueEmpty(q))
	{
		TNode* pop = QueueFront(q);
		if (pop != NULL)
		{
			printf("%c ", pop->data);
			QueuePush(q, pop->left);
			QueuePush(q, pop->right);
		}
		QueuePop(q);
	}
	printf("\n");
}