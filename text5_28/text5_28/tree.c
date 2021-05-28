#include"Tree.h"
#include"Queue.h"
void PrevOrder(BTNode* root)
{
	if (root == NULL)
		return;
	printf("%c ", root->data);
	PrevOrder(root->left);
	PrevOrder(root->right);
}
void InOrder(BTNode* root)
{
	if (root == NULL)
		return;
	InOrder(root->left);
	printf("%c ", root->data);
	InOrder(root->right);
}
void PostOrder(BTNode* root)
{
	if (root == NULL)
		return;
	PostOrder(root->left);
	PostOrder(root->right);
	printf("%c ", root->data);
}
// �ڵ����
int TreeSize(BTNode* root)
{
	if (root == NULL)
		return 0;
	return TreeSize(root->left) + TreeSize(root->right) + 1;
}
// Ҷ�ӽڵ�ĸ���
int TreeLeafSize(BTNode* root)
{
	if (root == NULL)
		return 0;
	if (root->left == NULL && root->right == NULL)
		return 1;
	return TreeLeafSize(root->left) + TreeLeafSize(root->right);
}
// �������
void LevelOrder(BTNode* root)
{
	assert(root);
	Queue Q;
	QueueInit(&Q);
	QueuePush(&Q, root);
	while (!QueueEmpty(&Q))
	{
		QNode* tmp = QueueFront(&Q);
		if (tmp->data != NULL)
		{
			printf("%c ", tmp->data->data);
			QueuePush(&Q, tmp->data->left);
			QueuePush(&Q, tmp->data->right);
		}
		QueuePop(&Q);
	}
	//���ٶ���
	QueueDestory(&Q);
}
void TreeDestory(BTNode* root)
{
	if (root == NULL)
		return;
	TreeDestory(root->left);
	TreeDestory(root->right);
	free(root);
	return;
}