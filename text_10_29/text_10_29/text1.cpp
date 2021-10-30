
//// ��ǰ��������������й��������
//#include<iostream>
//#include<vector>
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
//	TreeNode* _buildTree(vector<int>& preorder, vector<int>& inorder, int prei, int inbegin, int inend)
//	{
//		if (prei >= (int)preorder.size())
//			return nullptr;
//		TreeNode* root = new TreeNode(preorder[prei]);
//		
//		//����������в��� ���ڵ�
//		int cur = 0;
//		while (preorder[prei] != inorder[cur])
//		{
//			cur++;
//		}
//		//�ж��������Ƿ�Ϊ�գ���Ϊ�յݹ����
//		if (inbegin <= cur - 1)
//			root->left = _buildTree(preorder, inorder, prei++, inbegin, cur - 1);
//		else
//			root->left = nullptr;
//
//		if (cur + 1 <= inend)
//			root->right = _buildTree(preorder, inorder, prei++, cur + 1, inend);
//		else
//			root->right = nullptr;
//		return root;
//	}
//
//	TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder)
//	{
//		int prei = 0;
//		int inbegin = 0, inend = inorder.size() - 1;
//		return _buildTree(preorder, inorder, prei, inbegin, inend);
//	}
//};


////106. �����������������й��������
//#include<iostream>
//#include<vector>
//using namespace std;
//struct TreeNode
//{
//	int val;
//	TreeNode *left;
//	TreeNode *right;
//	TreeNode() : val(0), left(nullptr), right(nullptr) {}
//	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//	TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//};
// 
//class Solution {
//public:
//	TreeNode* _buildTree(vector<int>& inorder, vector<int>& postorder, int& posti, int inbegin, int inend)
//	{
//		if (posti < 0)
//			return  nullptr;
//		TreeNode* root = new TreeNode(postorder[posti]);
//
//		//���������ҵ�root��λ��
//		int cur = 0;
//		while (postorder[posti] != inorder[cur])
//		{
//			cur++;
//		}
//
//		//�ж�root�������Ƿ�Ϊ��
//		if (cur + 1 <= inend)
//		{
//			root->right = _buildTree(inorder, postorder, --posti, cur + 1, inend);
//		}
//		else
//			root->right = nullptr;
//
//		//�ж�root�ڵ��Ƿ�������
//		if (inbegin <= cur - 1)
//		{
//			root->left = _buildTree(inorder, postorder, --posti, inbegin, cur - 1);
//		}
//		else
//			root->left = nullptr;
//		return root;
//	}
//
//	TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder)
//	{
//		int posti = postorder.size() - 1;
//		int inbegin = 0, inend = inorder.size() - 1;
//		return _buildTree(inorder, postorder, posti, inbegin, inend);
//	}
//};


//#include<iostream>
//#include<vector>
//#include<stack>
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
////class Solution
////{
////public:
////	vector<int> preorderTraversal(TreeNode* root)
////	{
////		stack<TreeNode*> s;
////		vector<int> v;
////		if (root == nullptr)
////			return v;
////
////		//��ͷ�ڵ����ջ��
////		s.push(root);
////		while (!s.empty())
////		{
////			TreeNode* root = s.top();
////			//��������Ľڵ����Һ��Ӳ�Ϊ��ѹ��ջ��
////			s.pop();
////			//���ж�������
////			if (root->right != nullptr)
////				s.push(root->right);
////			if (root->left != nullptr)
////				s.push(root->left);
////			v.push_back(root->val);
////		}
////		return v;
////	}
////};
//
//class Solution {
//public:
//	vector<int> preorderTraversal(TreeNode* root)
//	{
//		vector<int> v;
//		stack<TreeNode*> s;
//		TreeNode* cur = root;
//		while (!s.empty() || cur)
//		{
//			//��Ϊ��·�ڵ��������
//			while (cur)
//			{
//				v.push_back(cur->val);
//				s.push(cur);
//				cur = cur->left;
//			}
//			//�ߵ���ʱ����ǰ�����������Ѿ��ߵ��ף���ʱ�ߵ�ǰ����������
//			TreeNode* tmp = s.top();
//			s.pop();
//			cur = tmp->right;
//		}
//		return v;
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
//class Solution {
//public:
//	vector<int> singleNumber(vector<int>& nums)
//	{
//		int flag = 0;
//		for (auto e : nums)
//			flag ^= e;
//		//�ҳ�flag�������е�һ��Ϊ1��λ
//		int tmp = 1;
//		while ((flag&tmp) == 0)
//		{
//			tmp <<= 1;
//		}
//
//		//�������е���������
//		int ret1 = 0, ret2 = 0;
//		for (auto e : nums)
//		{
//			if (e&tmp)
//			{
//				ret1 ^= e;
//			}
//			else
//			{
//				ret2 ^= e;
//			}
//		}
//		vector<int> ret;
//		ret.push_back(ret1);
//		ret.push_back(ret2);
//		return ret;
//	}
//};
//
//int main()
//{
//	vector<int> nums{ 1,2,1,3,2,5 };
//	vector<int> ret = Solution().singleNumber(nums);
//	for (auto e : ret)
//		cout << e << " ";
//	return 0;
//}


//#include<iostream>
//#include<vector>
//#include<stack>
//using namespace std;
//
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
//class Solution {
//public:
//	vector<int> inorderTraversal(TreeNode* root)
//	{
//		//�������-->�Ƚ���·�ڵ���ջ--->ȡ��ջ��Ԫ�ش�ӡ-->��������
//		stack<TreeNode*>s;
//		vector<int> ret;
//		TreeNode* cur = root;
//		while (cur || !s.empty())
//		{
//			//����·��ջ
//			while (cur)
//			{
//				s.push(cur);
//				cur = cur->left;
//			}
//
//			//��ջ��Ԫ��
//			TreeNode* tmp = s.top();
//			s.pop();
//			ret.push_back(tmp->val);
//			
//			//���ڵ����������Ϊ����ջ
//			if (tmp->right)
//			{
//				cur = tmp->right;
//			}
//		}
//		return ret;
//	}
//};


//145.�������ĺ������ �ǵݹ�
#include<iostream>
#include<vector>
#include<stack>
using namespace std;

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode() : val(0), left(nullptr), right(nullptr) {}
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
	TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
 
class Solution {
public:
	vector<int> postorderTraversal(TreeNode* root)
	{
		stack<TreeNode*> s;
		vector<int> v;
		TreeNode* cur = root;
		TreeNode* prev = nullptr;
		while (cur || !s.empty())
		{
			//����·�ڵ���ջ
			while (cur)
			{
				s.push(cur);
				cur = cur->left;
			}
			//ȡһ��ջ��Ԫ�ز�ɾ��
			TreeNode* tmp = s.top();
			//��Ҫ�ж��Һ����Ƿ��Ѿ����ʹ���������ѭ��
			if (tmp->right != nullptr&&prev != tmp->right)
			{
				cur = tmp->right;
			}
			else
			{
				v.push_back(tmp->val);
				prev = s.top();
				s.pop();
			}
		}
		return v;
	}
};