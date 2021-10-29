//#pragma once;
//#include<iostream>
//
//template<class K>
//struct BSTreeNode
//{
//	BSTreeNode<K>* _left;
//	BSTreeNode<K>* _right;
//	K _val;
//
//	BSTreeNode(K val = 0)
//		:_left(nullptr)
//		, _right(nullptr)
//		, _val(val)
//	{}
//};
//
//template<class K>
//class BSTree
//{
//public:
//	typedef BSTreeNode<K> Node;
//	BSTree()
//		:_root(nullptr)
//	{}
//
//	bool Insert(const K& date)
//	{
//		//�����Ϊ��
//		if (_root == nullptr)
//		{
//			Node* newnode = new Node(date);
//			if (newnode)
//			{
//				_root = newnode;
//				return true;
//			}
//		}
//
//		Node* cur = _root;
//		Node* parent = NULL;
//		while (cur)
//		{
//			if (cur->_val < date)
//			{
//				parent = cur;
//				cur = cur->_right;
//			}
//			else if (cur->_val > date)
//			{
//				parent = cur;
//				cur = cur->_left;
//			}
//			else
//			{
//				//������ȵ�����
//				return false;
//			}
//		}
//		//�ҵ��˲����λ��
//		Node* newnode = new Node(date);
//		if (newnode == NULL)
//			exit(-1);
//		if (parent->_val > date)
//		{
//			//���뵽���ڵ�����
//			parent->_left = newnode;
//		}
//		else
//		{
//			parent->_right = newnode;
//		}
//		return true;
//	}
//
//	void _InOrder(Node* root)
//	{
//		if (root == nullptr)
//			return;
//		_InOrder(root->_left);
//		cout << root->_val << " ";
//		_InOrder(root->_right);
//	}
//
//	void InOrder()
//	{
//		_InOrder(_root);
//		cout << endl;
//	}
//
//	bool Find(const K& date)
//	{
//		Node* cur = _root;
//		while (cur)
//		{
//			if (cur->_val > date)
//			{
//				cur = cur->_left;
//			}
//			else if (cur->_val < date)
//			{
//				cur = cur->_right;
//			}
//			else
//			{
//				return true;
//			}
//		}
//		return false;
//	}
//
//	bool Erase(const K& date)
//	{
//		Node* cur = _root;
//		Node* parent = NULL;
//		while (cur)
//		{
//			if (cur->_val > date)
//			{
//				parent = cur;
//				cur = cur->_left;
//			}
//			else if (cur->_val < date)
//			{
//				parent = cur;
//				cur = cur->_right;
//			}
//			else
//			{
//				//�ҵ���ɾ��
//				if (cur->_left == NULL)
//				{
//					if (cur == _root)
//					{
//						//ɾ������ͷ
//						_root = cur->_right;
//					}
//					else if (parent->_left == cur)
//					{
//						parent->_left = cur->_right;
//					}
//					else if (parent->_right == cur)
//					{
//						parent->_right = cur->_right;
//					}
//					free(cur);
//					return true;
//				}
//				else if (cur->_right == NULL)
//				{
//					//�ұ�Ϊ��
//					if (cur == _root)
//					{
//						_root = cur->_left;
//					}
//					else if (parent->_left == cur)
//					{
//
//						//�ж�cur��parent����ڵ㻹���ҽڵ�
//						parent->_left = cur->_left;
//					}
//					else
//					{
//						parent->_right = cur->_left;
//					}
//					free(cur);
//					return true;
//
//				}
//				else
//				{
//					//���Ҷ���Ϊ�գ���Ҫ�����滻ɾ��
//					//��cur����������С �ڵ�
//					Node* leftMin = cur->_right;
//					Node* leftMinParent = cur;
//					while (leftMin->_left != NULL)
//					{
//						leftMinParent = leftMin;
//						leftMin = leftMin->_left;
//					}
//
//					//�ҵ���
//					cur->_val = leftMin->_val;
//					if (leftMinParent->_left == leftMin)
//					{
//						leftMinParent->_left = leftMin->_right;
//					}
//					else
//						leftMinParent->_right = leftMin->_right;
//					free(leftMin);
//					return true;
//				}
//			}
//		}
//		return false;
//	}
//
//private:
//	Node* _root = nullptr;
//};
//
//void TextBSTree()
//{
//	BSTree<int> root;
//	int arr[] = { 5,3,4,1,7,8,2,6,0,9 };
//	for (auto e : arr)
//	{
//		root.Insert(e);
//	}
//	root.InOrder();
//
//	root.Find(10);
//
//	for (auto e : arr)
//	{
//		root.Erase(e);
//		root.InOrder();
//	}
//}


//KVģ��
#pragma once
#include<iostream>
#include<string>
#include<vector>
template<class K, class V>
struct BSTreeNode
{
	BSTreeNode<K,V>* _left;
	BSTreeNode<K,V>* _right;
	K _key;
	V _value;

	BSTreeNode(const K& key = 0, const V& value = 0)
		:_left(nullptr)
		, _right(nullptr)
		, _key(key)
		, _value(value)
	{}
};

template< class K ,class V>
class BSTree
{
	typedef BSTreeNode<K, V> Node;
public:
	BSTree()
		:_proot(nullptr)
	{}

	bool BSTreeInsert(const K& key, const V& value)
	{
		if (_proot == nullptr)
		{
			//����Ϊ��ʱ
			Node* newnode = new Node(key, value);
			_proot = newnode;
		}
		Node* cur = _proot;
		Node* parent = _proot;
		while (cur)
		{
			if (cur->_key < key)
			{
				//������������
				parent = cur;
				cur = cur->_right;
			}
			else if (cur->_key > key)
			{
				parent = cur;
				cur = cur->_left;
			}
			else
			{
				//�����(���д�����)����
				return false;
			}
		}

		Node* newnode = new Node(key, value);
		//�жϲ�����߻�������
		if (parent->_key > key)
		{
			//�������
			parent->_left = newnode;
		}
		else
		{
			//��������
			parent->_right = newnode;
		}
		return true;
	}

	void _InOrder(Node* root)
	{
		if (root == nullptr)
			return;
		_InOrder(root->_left);
		cout << root->_key << " " << root->_value << " ";
		_InOrder(root->_right);

	}

	void InOrder()
	{
		_InOrder(_proot);
		cout << endl;
	}

	Node* Find(const K& key)
	{
		Node* cur = _proot;
		while (cur)
		{
			if (cur->_key == key)
				return cur;
			else if (cur->_key > key)
				cur = cur->_left;
			else
				cur = cur->_right;
		}
		return nullptr;
	}

private:
	Node* _proot;
};

void text()
{
	BSTree<int, int> root;
	root.BSTreeInsert(1, 1);
	root.BSTreeInsert(2, 2);
	root.BSTreeInsert(3, 3);
	root.InOrder();
}

void text1()
{
	//Ӣ������
	BSTree<string, string>root;
	root.BSTreeInsert("�ַ���", "string");
	root.BSTreeInsert("����", "find");

	string input;
	while (cin >> input)
	{
		BSTreeNode<string, string>*pos;
		pos = root.Find(input);
		if (pos = root.Find(input))
			cout << pos->_value << endl;
	}
}

void text2()
{
	//������������Ӧ��-->ͳ��
	BSTree<string, int>root;
	vector<string> nums{ "ƻ��","����","����","����","ƻ��","����","����", "����" };
	for (auto e : nums)
	{
		BSTreeNode<string, int>* pos = root.Find(e);
		//������в����ڣ������ýڵ㣬���ڵĻ�������1 
		if (pos)
			pos->_value++;
		else
			root.BSTreeInsert(e, 1);
	}
	root.InOrder();
}