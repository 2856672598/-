#include<stdio.h>
#include<stdbool.h>
////965. ��ֵ������
////https://leetcode-cn.com/problems/univalued-binary-tree/
//struct TreeNode
//{
//	int val;
//	struct TreeNode *left;
//	struct TreeNode *right;
//};
//bool isUnivalTree(struct TreeNode* root)
//{
//	if (root == NULL)
//		return true;
//	//��ǰ��
//	if (root->left != NULL && root->val != root->left->val)
//		return false;
//	if (root->right && root->val != root->right->val)
//		return false;
//	return isUnivalTree(root->left) && isUnivalTree(root->right);
//}

////104. ��������������
////https://leetcode-cn.com/problems/maximum-depth-of-binary-tree/
//struct TreeNode
//{
//	int val;
//	struct TreeNode *left;
//	struct TreeNode *right;
//};
//int maxDepth(struct TreeNode* root)
//{
//	if (root == NULL)
//		return 0;
//	if (root->left == NULL && root->right == NULL)
//		return 1;
//	int left = maxDepth(root->left);
//	int right = maxDepth(root->right);
//
//	return left > right ? left + 1 : right + 1;
//}



////226. ��ת������
////https://leetcode-cn.com/problems/invert-binary-tree/
//struct TreeNode
//{
//	int val;
//	struct TreeNode *left;
//	struct TreeNode *right;
//};
////����һ��
////struct TreeNode* invertTree(struct TreeNode* root)
////{
////	if (root == NULL)
////		return NULL;
////	if (root->right || root->left)
////	{
////		struct TreeNode* tmp = root->left;
////		root->left = root->right;
////		root->right = tmp;
////	}
////	else
////		return NULL;
////	invertTree(root->left);
////	invertTree(root->right);
////	return root;
////}
//
////��������
//struct TreeNode* invertTree(struct TreeNode* root)
//{
//	if (root == NULL)
//		return NULL;
//	struct TreeNode* right = root->right;
//	root->right = invertTree(root->left);
//	root->left = invertTree(right);
//
//	return root;
//}


////100. ��ͬ����
////https://leetcode-cn.com/problems/same-tree/
//struct TreeNode
//{
//	int val;
//	struct TreeNode *left;
//	struct TreeNode *right;
//};
//bool isSameTree(struct TreeNode* p, struct TreeNode* q)
//{
//	if (p == NULL && q == NULL)
//		return true;
//	//�ṹ����ͬ
//	if (p == NULL && q != NULL)
//		return false;
//	if (p != NULL && q == NULL)
//		return false;
//	if (p->val != q->val)
//		return false;
//	return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
//}

////572. ��һ����������
////https://leetcode-cn.com/problems/subtree-of-another-tree/
//struct TreeNode
//{
//	int val;
//	struct TreeNode *left;
//	struct TreeNode *right;
//};
//bool isSameTree(struct TreeNode* p, struct TreeNode* q)
//{
//	if (p == NULL && q == NULL)
//		return true;
//	//�ṹ����ͬ
//	if (p == NULL && q != NULL)
//		return false;
//	if (p != NULL && q == NULL)
//		return false;
//	if (p->val != q->val)
//		return false;
//	return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
//}
//bool isSubtree(struct TreeNode* root, struct TreeNode* subRoot)
//{
//	if (root == NULL)
//		false;
//	if (isSameTree(root, subRoot))
//		return true;
//	return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
//}




////110. ƽ�������
//struct TreeNode
//{
//	int val;
//	struct TreeNode *left;
//	struct TreeNode *right;
//};
//int TreeDepth(struct TreeNode* root)
//{
//	if (root == NULL)
//		return 0;
//	int left = TreeDepth(root->left);
//	int right = TreeDepth(root->right);
//	return left > right ? left + 1 : right + 1;
//}
//bool isBalanced(struct TreeNode* root)
//{
//	if (root == NULL)
//		return true;
//	int left = TreeDepth(root->left);
//	int right = TreeDepth(root->right);
//	return abs(left - right) <= 1 && isBalanced(root->left) && isBalanced(root->right);
//}