#include"tree.h"
#include"queue.h"
void Text()
{
	TNode* root = CreateTree();
	InOrder(root);
	printf("\nTreeSize:%d\n", TreeSize(root));
	printf("TreeDepth:%d\n", TreeDepth(root));
	int depth = 0;
	if (IsBalanced(root, &depth))
		printf("��ƽ�������\n");
	else
		printf("����ƽ�������\n");

	Queue q;
	QueueInit(&q);
	LevelTraversal(root, &q);

	if (CompleteBinaryTree(root, &q))
		printf("Ϊ��ȫ������\n");
	else
		printf("������ȫ������\n");
	QueueDestory(&q);
	TreeDestory(root);
}
int main()
{
	Text();
	return 0;
}