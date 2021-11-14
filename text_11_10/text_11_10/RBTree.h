#pragma once

#include<iostream>
using namespace std;

enum Color
{
	BLACK,
	READ
};

typedef int DateType;

template<class DateType>
struct RBTreeNode
{
	RBTreeNode<DateType>*_pleft;
	RBTreeNode<DateType>*_pright;
	RBTreeNode<DateType>*_parent;
	DateType _val;
	Color _color;

	RBTreeNode(const DateType& val)
		:_pleft(nullptr)
		, _pright(nullptr)
		, _parent(nullptr)
		, _val(val)
		, _color(READ)
	{}
};

template<class DateType	>
class RBTree
{
public:
	typedef RBTreeNode<DateType> Node;

	void RotateL(Node* parent)
	{
		Node* subR = parent->_pright;
		Node* subRL = subR->_pleft;
		parent->_pright = subRL;

		if (subRL)
			subRL->_parent = parent;
		subR->_pleft = parent;
		Node*pparent = parent->_parent;
		parent->_parent = subR;

		if (parent == _root)
		{
			_root = subR;
			subR->_parent = nullptr;
		}
		else
		{
			if (pparent->_pleft == parent)
			{
				pparent->_pleft = subR;
			}
			else
				pparent->_pright = subR;
			subR->_parent = pparent;
		}
	}

	void RotateR(Node* parent)
	{
		Node* subL = parent->_pleft;
		Node* subLR = subL->_pright;

		parent->_pleft = subLR;
		if (subLR)
			subLR->_parent = parent;
		subL->_pright = parent;
		Node* pPNode = parent->_parent;
		parent->_parent = subL;

		if (_root == parent)
		{
			_root = subL;
			subL->_parent = nullptr;
		}
		else
		{
			if (pPNode->_pleft == parent)
			{
				pPNode->_pleft = subL;
			}
			else
				pPNode->_pright = subL;
			subL->_parent = pPNode;
		}
	}

	bool Insert(const DateType& val)
	{
		if (_root == nullptr)
		{
			//�����Ϊ��ֱ����Ϊ���ڵ�
			_root = new Node(val);
			_root->_color = BLACK;
			return true;
		}

		//�жϲ������������滹������
		Node* cur = _root;
		Node* parent = nullptr;
		while (cur)
		{
			if (cur->_val > val)
			{
				//���������Ҳ���λ��
				parent = cur;
				cur = cur->_pleft;
			}
			else if (cur->_val < val)
			{
				//���������Ҳ���λ��
				parent = cur;
				cur = cur->_pright;
			}
			else
			{
				//���д���
				return false;
			}
		}

		//�жϲ����λ������parent������������������
		Node* newnode = new Node(val);
		if (parent->_val > val)
		{
			parent->_pleft = newnode;
			newnode->_parent = parent;
		}
		else
		{
			parent->_pright = newnode;
			newnode->_parent = parent;
		}
		cur = newnode;

		//��Ҫ�ж��Ƿ���Ҫ����
		while (parent && parent->_color == READ)
		{
			Node* grandfather = parent->_parent;
			//��Ҫ����������������ڵ�λ��
			if (parent == grandfather->_pleft)
			{
				Node* uncle = grandfather->_pright;
				//parent��cur Ϊ�죬grandfatherΪ�ڣ�uncle������Ϊ��
				if (uncle && uncle->_color == READ)
				{
					parent->_color = uncle->_color = BLACK;
					grandfather->_color = READ;

					//�������ϸ���
					cur = grandfather;
					parent = cur->_parent;
				}
				else
				{
					//����ڵ㲻���ڻ�������ڵ�Ϊ��

					//parentû��λ��grandfather��cur֮�� ���е���
					if (cur == parent->_pright)
					{
						//���������������� ���õ�������
						RotateL(parent);
						swap(cur, parent);
					}

					RotateR(grandfather);
					grandfather->_color = READ;
					parent->_color = BLACK;
				}
			}
			else
			{
				//����λ��������
				Node* uncle = grandfather->_pleft;
				if (uncle && uncle->_color == READ)
				{
					uncle->_color = parent->_color = BLACK;
					grandfather->_color = READ;

					cur = grandfather;
					parent = cur->_parent;
				}
				else
				{
					//parentû��λ��grandfather��cur֮�� ���е���
					if (cur == parent->_pleft)
					{
						//�����������Ϊ�����
						RotateR(parent);
						swap(cur, parent);
					}

					RotateL(grandfather);
					grandfather->_color = READ;
					parent->_color = BLACK;
				}
			}

			_root->_color = BLACK;
		}
		return true;
	}

	void _Inorder(Node* root)
	{
		if (root == nullptr)
			return;
		_Inorder(root->_pleft);
		cout << root->_val << " ";
		_Inorder(root->_pright);
	}

	void Inorder()
	{
		_Inorder(_root);
	}

	bool _IsValidRBTree(Node* root, size_t k, const size_t blacksize)
	{
		if (root == nullptr)
		{
			//�ȽϺڽڵ�ĸ����Ƿ����
			if (k != blacksize)
			{
				cout << "���Ҳ�ƽ��" << endl;
				return  false;
			}
			return true;
		}
		//ͳ�ƺڽڵ�ĸ���
		if (BLACK == root->_color)
			k++;

		Node* parent = root->_parent;
		if (parent && root->_color == READ && parent->_color == READ)
		{
			cout << "������ڵ�����" << endl;
			return false;
		}

		return _IsValidRBTree(root->_pleft, k, blacksize) && _IsValidRBTree(root->_pright, k, blacksize);
	}

	bool IsValidRBTree()
	{
		if (_root == nullptr)
		{
			//Ϊ���� ����
			return true;
		}
		//�жϸ��ڵ��Ƿ������Ǻ�ɫ��
		if (_root->_color != BLACK)
		{
			cout << "���ڵ㲻Ϊ��ɫ��������" << endl;
		}
		//����ڽڵ�ĸ���
		int blackcount = 0;
		Node* cur = _root;
		while (cur)
		{
			if (cur->_color == BLACK)
				blackcount++;
			cur = cur->_pleft;
		}

		size_t k = 0;
		return _IsValidRBTree(_root, k, blackcount);
	}

private:
	Node* _root = nullptr;
};