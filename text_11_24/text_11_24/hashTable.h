#pragma once
#include<iostream>
#include<vector>
using namespace std;
enum state
{
	DELETE,
	EMPTY,
	EXIST
};

template<class T>
struct hashNode
{
	state _state;
	T _val;
	hashNode(const T& val = 0)
		:_val(val)
		, _state(EMPTY)
	{}
};

template<class K, class T>
class HashTable
{
public:
	typedef hashNode<T> hashNode;

	bool Insert(const T& val)
	{
		if (_table.size() == 0 || _size * 1.0 / _table.size() > 0.7)
		{
			//����
			size_t newsize = _table.size() == 0 ? 10 : 2 * _table.size();
			vector<hashNode> newtable;
			newtable.resize(newsize);

			//���п���
			for (int i = 0; i < (int)_table.size(); i++)
			{
				if (_table[i]._state == EXIST)
				{
					//˵���˴�����
					size_t index = _table[i]._val % newsize;
					//��λ��
					while (newtable[index]._state == EXIST)
					{
						index++;
						if (index == newsize)
							index = 0;
					}
					newtable[index]._val = _table[i]._val;
					newtable[index]._state = EXIST;
				}
			}
			swap(_table, newtable);
		}

		size_t index = val % _table.size();
		while (_table[index]._state == EXIST)
		{
			index++;
			if (index == _table.size())
				index = 0;
		}
		_table[index]._val = val;
		_table[index]._state = EXIST;
		_size++;
		return true;
	}
private:
	vector<hashNode> _table;
	size_t _size;//����Ԫ�صĸ���
};

namespace openTable
{
	template<class T>
	struct hashNode
	{
		T _val;
		hashNode<T>* next;
		hashNode(const T& val)
			:_val(val)
			, next(nullptr)
		{};
	};

	template<class K,class T,class KeyofT>
	class HashTable
	{
	public:
		typedef hashNode<T> Node;

		bool insert(const T& val)
		{
			if (_size == _table.size())
			{
				//��Ҫ����
				vector<Node*>newtable;
				size_t newsize = _table.size() == 0 ? 4 : 2 * _table.size();
				newtable.resize(newsize);
				//��ԭ�����е�����ת�Ƶ��±�
				int index = 0;
				for (int i = 0; i < (int)_table.size(); i++)
				{
					Node* cur = _table[i];
					while (cur)
					{
						Node* next = cur->next;
						index = cur->_val%newtable.size();
						cur->next = newtable[index];
						newtable[index] = cur;
						cur = next;
					}
					_table[i] = nullptr;
				}
				swap(_table, newtable);
			}

			int index = val % _table.size();
			Node* newnode = new Node(val);
			newnode->next = _table[index];
			_table[index] = newnode;
			_size++;
			return true;
		}
	private:
		size_t _size;
		vector<Node*> _table;
	};
}