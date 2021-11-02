//#include<iostream>
//#include<string>
//#include<set>
//#include<map>
//#include<vector>
//using namespace std;
//void text_set()
//{
//	set<int> s;
//	s.insert(1);
//	s.insert(2);
//	s.insert(2);
//	s.insert(4);
//
//	for (auto e : s)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//}
//
////����һ��
//void text_map()
//{
//	map<string, int> m;
//	vector<string> flag = { "����","�㽶","ӣ��","ƻ��","����","�㽶" };
//	for (auto e : flag)
//	{
//		map<string, int>::iterator pos = m.find(e);
//		if (pos != m.end())
//		{
//			//���д���
//			pos->second++;
//		}
//		else
//		{
//			//��������
//			//m.insert(pair<string, int>(e, 1));
//			m.insert(make_pair(e, 1));
//		}
//	}
//
//	for (auto e : m)
//		cout << e.first << " " << e.second << endl;
//}
//
////��������
//void text_map1()
//{
//	map<string, int>m;
//	vector<string> flag = { "����","�㽶","ӣ��","ƻ��","����","�㽶" };
//
//	for (auto e : flag)
//	{
//		//������д���e����᷵��e�����ã�������ӵ����в�����e������
//		m[e]++;
//	}
//
//	for (auto e : m)
//	{
//		cout << e.first << " " << e.second << endl;
//	}
//}
//void text_map3()
//{
//	map<string, string> m;
//	m.insert(make_pair("string", "�ַ���"));
//	m.insert(make_pair("sort", "����"));
//
//	m["����"];//��������
//	m["����"] = "wangwu";//���벢�޸�����
//	m["����"] = "����";//�޸�����
//	for (auto e : m)
//	{
//		cout << e.first << " " << e.second << endl;
//	}
//}
//void text_multiset()
//{
//	multiset<int>mu;
//	mu.insert(1);
//	mu.insert(3);
//	mu.insert(2);
//	mu.insert(3);
//	mu.insert(1);
//
//	for (auto e : mu)
//	{
//		cout << e << " ";
//	}
//}
//
//int main()
//{
//	//text_set();
//	//text_map();
//
//	//text_map1();
//	//text_map3();
//
//	text_multiset();
//	return 0;
//}
//


////692. ǰK����Ƶ����
//#include<iostream>
//#include<vector>
//#include<map>
//#include<string>
//using namespace std;
//
//class Solution
//{
//public:
//	vector<string> topKFrequent(vector<string>& words, int k)
//	{
//		map<string, int>m;
//		//�Ƚ�word�뵽map�н��м�����ȥ��
//		for (auto e : words)
//		{
//			m[e]++;
//		}
//
//		//��ͨ��multimapmap �Լ�����ȥ�غ������ ����m��second��������
//		multimap<int, string, greater<int>> mm;
//
//		for (auto e : m)
//		{
//			mm.insert(make_pair(e.second, e.first));
//		}
//
//		multimap<int, string>::iterator it = mm.begin();
//		vector<string> ret;
//		while (it != mm.end())
//		{
//			if (k == 0)
//				break;
//			ret.push_back(it->second);
//			k--;
//			it++;
//		}
//		return ret;
//	}
//};
//
//int main()
//{
//	return 0;
//}

//
////2053. �����е� K ����һ�޶����ַ���
//#include<iostream>
//#include<vector>
//#include<map>
//#include<string>
//using namespace std;
//
//class Solution {
//public:
//	string kthDistinct(vector<string>& arr, int k)
//	{
//		map<string, int> m;
//		for (auto e : arr)
//		{
//			m[e]++;
//		}
//		vector<string> flag;
//		for (auto e : arr)
//		{
//			//map��[]����e��second����
//			if (m[e] == 1)
//				flag.push_back(e);
//		}
//		if (flag.size() < k)
//			return "";
//		return flag[k - 1];
//	}
//};
//
//int main()
//{
//	vector<string> arr{ "d","b","c","b","c","a" };
//	int k = 2;
//	string ret = Solution().kthDistinct(arr, k);
//	cout << ret << endl;
//	return 0;
//}



#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> nums{ 1,2,2,3,3,4,5,5,6 };
	int fast = 1, slow = 0;
	while (fast < (int)nums.size())
	{
		if (nums[fast] != nums[slow])
		{
			nums[++slow] = nums[fast];
		}
		fast++;
	}
	//
	if (fast != slow)
		slow++;

	for (int i = 0; i < slow; i++)
	{
		cout << nums[i] << " ";
	}
	return 0;
}