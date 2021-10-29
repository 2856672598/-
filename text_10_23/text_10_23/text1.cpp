
////102. �������Ĳ������
//#include<iostream>
//#include<vector>
//#include<queue>
//using namespace std;
//
//struct TreeNode {
//	int val;
//	TreeNode *left;
//	TreeNode *right;
//	TreeNode() : val(0), left(nullptr), right(nullptr) {}
//	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//	TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//};
// 
//class Solution
//{
//public:
//	vector<vector<int>> levelOrder(TreeNode* root)
//	{
//		vector<vector<int>>vv;
//		if (root == nullptr)
//			return vv;
//		queue<TreeNode*> q;
//		q.push(root);
//		while (!q.empty())
//		{
//			vector<int> v;
//			//����һ��ȫ�������к󣬶���������Ϊ��һ��ڵ�ĸ���
//			int size = q.size();
//			for (int i = 0; i < size; i++)
//			{
//				TreeNode* front = q.front();
//				q.pop();
//				v.push_back(front->val);
//				//����������Ϊ��ʱ�����
//				if (front->left != nullptr)
//					q.push(front->left);
//
//				//��������Ϊ��ʱҲ�����
//				if (front->right != nullptr)
//					q.push(front->right);
//
//			}
//			vv.push_back(v);
//		}
//		return vv;
//	}
//};
//
//int main()
//{
//	return 0;
//}


//#include<iostream>
//#include<vector>
//using namespace std;
//
//struct TreeNode
//{
//	int val;
//	TreeNode *left;
//	TreeNode *right;
//	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//
//class Solution
//{
//public:
//	bool Find(TreeNode* root, TreeNode* x)
//	{
//		if (root == nullptr)
//			return false;
//		return root == x || Find(root->left, x) || Find(root->right, x);
//	}
//
//	TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q)
//	{
//		if (root == nullptr)
//			return nullptr;
//
//		if (root == p || root == q)
//			return root;
//
//		bool pInleft, pInright, qInleft, qInright;
//		//�ж�p�� q���ڵ�ǰ�ڵ�������� ����������
//		pInleft = Find(root->left, p);
//		pInright = !pInleft;
//
//		qInleft = Find(root->left, q);
//		qInright = !qInleft;
//
//		//���p��qһ������һ��������ô���ڵ�Ϊ��������Ƚڵ�
//		if (pInleft&&qInright || pInright && qInleft)
//			return root;
//
//		if (pInleft&&qInleft)
//			return lowestCommonAncestor(root->left, p, q);
//
//		if (pInright&&qInright)
//			return lowestCommonAncestor(root->right, p, q);
//
//	}
//};
//
//int main()
//{
//	return 0;
//}


//JZ36 ������������˫������
#include<iostream>
using namespace std;
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};

class Solution
{
public:

	void _Convert(TreeNode* cur, TreeNode*& prev)
	{
		if (cur == nullptr)
			return;
		_Convert(cur->left, prev);

		//����ڵ�
		//��Ϊ��֪��cur����һ���ڵ���˭������ֻ��ͨ�����ҵ���һ���ڵ��ͨ��prevָ��
		cur->left = prev;
		if (prev != nullptr)
			prev->right = cur;
		prev = cur;
		_Convert(cur->right, prev);
	}

	TreeNode* Convert(TreeNode* pRootOfTree)
	{
		TreeNode* prev = nullptr;
		_Convert(pRootOfTree, prev);
	}
};

int main()
{
	return 0;
}