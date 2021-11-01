#include<iostream>
#include<string>
#include<set>
#include<map>
#include<vector>
using namespace std;
void text_set()
{
	set<int> s;
	s.insert(1);
	s.insert(2);
	s.insert(2);
	s.insert(4);

	for (auto e : s)
	{
		cout << e << " ";
	}
	cout << endl;
}

//����һ��
void text_map()
{
	map<string, int> m;
	vector<string> flag = { "����","�㽶","ӣ��","ƻ��","����","�㽶" };
	for (auto e : flag)
	{
		map<string, int>::iterator pos = m.find(e);
		if (pos != m.end())
		{
			//���д���
			pos->second++;
		}
		else
		{
			//��������
			//m.insert(pair<string, int>(e, 1));
			m.insert(make_pair(e, 1));
		}
	}

	for (auto e : m)
		cout << e.first << " " << e.second << endl;
}

//��������
void text_map1()
{
	map<string, int>m;
	vector<string> flag = { "����","�㽶","ӣ��","ƻ��","����","�㽶" };

	for (auto e : flag)
	{
		//������д���e����᷵��e�����ã�������ӵ����в�����e������
		m[e]++;
	}

	for (auto e : m)
	{
		cout << e.first << " " << e.second << endl;
	}
}
void text_map3()
{
	map<string, string> m;
	m.insert(make_pair("string", "�ַ���"));
	m.insert(make_pair("sort", "����"));

	m["����"];//��������
	m["����"] = "wangwu";//���벢�޸�����
	m["����"] = "����";//�޸�����
	for (auto e : m)
	{
		cout << e.first << " " << e.second << endl;
	}
}
void text_multiset()
{
	multiset<int>mu;
	mu.insert(1);
	mu.insert(3);
	mu.insert(2);
	mu.insert(3);
	mu.insert(1);

	for (auto e : mu)
	{
		cout << e << " ";
	}
}

int main()
{
	//text_set();
	//text_map();

	//text_map1();
	//text_map3();

	text_multiset();
	return 0;
}

