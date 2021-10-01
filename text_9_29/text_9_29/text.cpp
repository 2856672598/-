//#include<iostream>
//#include<vector>
//#include<deque>
//#include<time.h>
//#include<algorithm>
//using namespace std;
//
//void text_deque()
//{
//	int n = 100000;
//	deque<int> d;
//	vector<int> v;
//
//	srand((unsigned int)time(0));
//	for (int i = 0; i < n; i++)
//	{
//		int x = rand();
//		d.push_back(x);
//		v.push_back(x);
//	}
//	clock_t begin1 = clock();
//	sort(d.begin(), d.end());
//	clock_t end1= clock();
//
//	clock_t begin2 = clock();
//	sort(v.begin(), v.end());
//	clock_t end2 = clock();
//
//	cout << "deque:" << end1 - begin1 << endl;
//	cout << "vector:" << end2 - begin2 << endl;
//}
//int main()
//{
//	text_deque();
//	return 0;
//}


//#include<iostream>
//using  namespace std;
//
//template<class T, size_t n>
//class Array
//{
//private:
//	T _arr[n];
//	size_t _size;
//};
//
//int main()
//{
//	Array<int, 10> a;
//	Array<int, 20>b;
//	return 0;
//}

////ģ����ػ������ĳЩ���ͽ������⻯����
//#include<iostream>
//using namespace std;
//
//template<class T>
//bool IsEqual(const T& x1, const T& x2)
//{
//	return x1 == x2;
//}
//
//
////����ģ����ػ�
//bool IsEqual(const char* p1, const char* p2)
//{
//	return strcmp(p1, p2) == 0;
//}
//
//template<class T1, class T2>
//class A
//{
//public:
//	A()
//	{
//		cout << "<T1,T2>" << endl;
//	}
//private:
//	T1 _a;
//	T2 _b;
//};
//
////��ģ���ȫ�ػ�  �ػ�ȫ������
//template<>
//class A<int, double>
//{
//public:
//	A()
//	{
//		cout << "��ģ���ȫ�ػ�<int��double>" << endl;
//	}
//private:
//	int _a;
//	char _b;
//};
//
////��ģ���ƫ�ػ�---�������ػ�һ���ֲ��� �����ǶԲ�����һ������
//template<class	T>
//class A<T, int>
//{
//public:
//	A()
//	{
//		cout << "��ģ���ƫ�ػ�<T,int>" << endl;
//	}
//private:
//	T _a;
//	int _b;
//};
//
//template<class T1, class T2>
//class A<T1&, T2&>
//{
//public:
//	A()
//	{
//		cout << "<T1&,T2&>" << endl;
//	}
//private:
//	T1 _a;
//	T2 _b;
//};
//
//
//template<class T1, class T2>
//class A<T1*, T2*>
//{
//public:
//	A()
//	{
//		cout << "<T1*,T2*>" << endl;
//	}
//private:
//	T1 _a;
//	T2 _b;
//};
//int main()
//{
//	cout << IsEqual(1, 2) << endl;
//	cout << IsEqual("hello", "hello") << endl;
//
//	A<int, long> a;
//	A<int, int> b;
//	A<int*, char*>c;
//	A<double&, char&>d;
//	return 0;
//}


////2000. ��ת����ǰ׺
//#include<iostream>
//#include<string>
//#include<algorithm>
//using namespace std;
//
//class Solution {
//public:
//	string reversePrefix(string word, char ch) {
//		string::iterator it = find(word.begin(), word.end(), ch);
//
//		if (it != word.end())
//		{
//			reverse(word.begin(), it + 1);
//		}
//		return word;
//	}
//};
//
//int main()
//{
//	string word("abcdef");
//	char ch = 'd';
//	cout << Solution().reversePrefix(word, ch) << endl;
//	return 0;
//}


////2001. �ɻ������ε�����
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//class Solution {
//public:
//	long long interchangeableRectangles(vector<vector<int>>& rectangles) {
//		vector<double> flag;
//		for (int i = 0; i < (int)rectangles.size(); i++)
//		{
//			double tmp = rectangles[i][0] * 1.0 / rectangles[i][1];
//			flag.push_back(tmp);
//		}
//		long long count = 0;
//
//		//for (int i = 0; i < (int)flag.size() - 1; i++)
//		//{
//		//	for (int j = i + 1; j < (int)flag.size(); j++)
//		//	{
//		//		if (flag[i] == flag[j])
//		//			count++;
//		//	}
//		//}
//		//return count;
//
//		
//		int left = 0, right = 1;
//		sort(flag.begin(), flag.end());
//
//		while (right < (int)flag.size())
//		{
//			if (flag[right] != flag[left])
//			{
//				int tmp = right - left;
//				count += tmp * (tmp + 1) / 2;
//				left = right;
//			}
//			right++;
//		}
//		if (left != right)
//		{
//			int tmp = right - left;
//			count += tmp * (tmp - 2) / 2;
//		}
//		return count;
//	}
//};
//
//int main()
//{
//	return 0;
//}

////1984. ѧ����������С��ֵ
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//class Solution {
//public:
//	int minimumDifference(vector<int>& nums, int k) {
//		sort(nums.begin(), nums.end());
//
//		int min = 0;
//		for (int i = 0; i <= (int)nums.size() - k; i++)
//		{
//			int diff = nums[i + k - 1] - nums[i];
//			if (i == 0)
//				min = diff;
//			else if (diff < min)
//				min = diff;
//		}
//		return min;
//	}
//};
//
//int main()
//{
//	vector<int> nums{ 9,4,1,7 };
//	int k = 2;
//	cout << Solution().minimumDifference(nums, k) << endl;
//	return 0;
//}


////1991. �ҵ�������м�λ��
//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//	int findMiddleIndex(vector<int>& nums) {
//		int sum = 0;
//		for (int i = 0; i < (int)nums.size(); i++)
//		{
//			sum += nums[i];
//		}
//		int leftsum = 0;
//		for (int i = 0; i < (int)nums.size(); i++)
//		{
//			if (leftsum * 2 + nums[i] == sum)
//				return i;
//			else
//				leftsum += nums[i];
//		}
//		return -1;
//	}
//};
//
//int main()
//{
//	vector<int>nums{ 0,0,0,0 };
//	cout << Solution().findMiddleIndex(nums) << endl;
//}


//#include<iostream>
//#include"add.h"
//using namespace std;
//int main()
//{
//	cout << Add(10, 10) << endl;
//	return 0;
//}


//#include<iostream>
//#include<string>
//using namespace std;
//class A
//{
//public:
//
//protected:
//	string _name = "����";
//	int _id = 111;
//};
//
//class B :public A
//{
//public:
//	void print()
//	{
//		cout << _name << endl;
//		cout << _id << endl;
//	}
//protected:
//	int _id = 666;
//};
//
//int main()
//{
//	B b;
//	b.print();
//	return 0;
//}


//#include<iostream>
//#include<string>
//using namespace std;
//
//class A
//{
//public:
//	string _name;
//		int _age;
//};
//
//class B :public A
//{
//private:
//	int _id;
//};
//
//int main()
//{
//	B b;
//	//�Ӷ������ֱ�Ӹ�ֵ���������/ָ��/����
//	A a = b;
//	A* c = &b;
//	A& d = b;
//	return 0;
//}


//#include<iostream>
//#include<string>
//using namespace std;
//
//struct Person
//{
//protected:
//	string _name = "����";
//	int _age = 19;
//	string _id = "12345";//���֤��
//};
//
//struct Student :public Person
//{
//public:
//	void print()
//	{
//		cout << _name << endl;
//		cout << _age << endl;
//		cout << _id << endl;
//		cout << "���֤��" << Person::_id << endl;
//	}
//protected:
//	string _id = "200108";//ѧ��
//};
//
//int main()
//{
//	Student s;
//	s.print();
//	return 0;
//}


//#include<iostream>
//#include<string>
//using namespace std;
//class A
//{
//public:
//	void Fun()
//	{
//		cout << "Fun()" << endl;
//	}
//};
//
//class B :public A
//{
//public:
//	void Fun()
//	{
//		//�ͻ����й������أ���Ա��������ͬ���͹�������
//		cout << "Fun1()" << endl;
//	}
//};
//
//int main()
//{
//	B b;
//	b.Fun();//��������ʱ Ĭ�ϵ��õ�ǰ���еĺ���
//	b.A::Fun();//���û���
//	return 0;
//}

////����01. ¼ȡ������
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//class Solution {
//public:
//	double getAdmissionLine(int k, vector<double>& scores) {
//		sort(scores.rbegin(), scores.rend());
//		return scores[k - 1];
//	}
//};
//
//int main()
//{
//	vector<double> nums{ 162.5,321.0,448.0,543.0,499.0,99.0,641.5,442.5,618.5,678.0,675.0,650.5,646.5,518.0,703.5,62.0,13.0,94.0,40.5,422.5 };
//	int k = 6;
//	cout << Solution().getAdmissionLine(k, nums) << endl;
//	return 0;
//}

////1979. �ҳ���������Լ��
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//class Solution {
//public:
//	int findGCD(vector<int>& nums) {
//		sort(nums.begin(), nums.end());
//
//		int max = nums[nums.size() - 1];
//		int min = nums[0];
//
//		while (min)
//		{
//			int tmp = min;
//			min = max % min;
//			max = tmp;
//		}
//		return max;
//	}
//};
//
//int main()
//{
//	vector<int> nums{ 2,5,6,9,10 };
//	cout << Solution().findGCD(nums) << endl;
//	return 0;
//}

//��ָ Offer 39. �����г��ִ�������һ�������
#include<iostream>
#include<vector>
using namespace std;

//һ�������ֵĴ����������鳤�ȵ�һ�� Ҳ����˵ �����ֵĴ��������������ֵĴ����ͻ�Ҫ��
class Solution {
public:
	int majorityElement(vector<int>& nums) {
		int count = 1, flag = nums[0];
		for (int i = 1; i < (int)nums.size(); i++)
		{
			if (flag == nums[i])
				count++;
			else
				count--;
			if (count == 0)
			{
				flag = nums[i];
				count = 1;
			}
		}
		return flag;
	}
};

int main()
{
	vector<int> nums{ 1, 2, 3, 2, 2, 2, 5, 4, 2 };
	cout << Solution().majorityElement(nums) << endl;
}