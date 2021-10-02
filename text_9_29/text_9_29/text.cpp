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

////��ָ Offer 39. �����г��ִ�������һ�������
//#include<iostream>
//#include<vector>
//using namespace std;
//
////һ�������ֵĴ����������鳤�ȵ�һ�� Ҳ����˵ �����ֵĴ��������������ֵĴ����ͻ�Ҫ��
//class Solution {
//public:
//	int majorityElement(vector<int>& nums) {
//		int count = 1, flag = nums[0];
//		for (int i = 1; i < (int)nums.size(); i++)
//		{
//			if (flag == nums[i])
//				count++;
//			else
//				count--;
//			if (count == 0)
//			{
//				flag = nums[i];
//				count = 1;
//			}
//		}
//		return flag;
//	}
//};
//
//int main()
//{
//	vector<int> nums{ 1, 2, 3, 2, 2, 2, 5, 4, 2 };
//	cout << Solution().majorityElement(nums) << endl;
//}


//#include<iostream>
//#include<string>
//
//using namespace std;
//
//class Person
//{
//public:
//	Person(const string& name = "����", const string& sex = "��")
//		:_name(name)
//		,_sex(sex)
//	{
//		cout << "Person()" << endl;
//	}
//
//	Person(const Person& person)
//	{
//		_name = person._name;
//		_sex = person._sex;
//		cout << "Person()��������" << endl;
//	}
//
//	Person operator=(const Person& p)
//	{
//		_name = p._name;
//		_sex = p._sex;
//		cout << "Person operator" << endl;
//		return *this;
//	}
//
//	~Person()
//	{
//		cout << "~Person" << endl;
//	}
//protected:
//	string _name;
//	string _sex;
//};
//
//class Student :public Person
//{
//public:
//	Student(const string& name = "����", const string& sex = "��", const int age = 18)
//		: Person(name, sex)
//		, _age(age)
//	{
//		cout << "Student()" << endl;
//	}
//
//	void Print()
//	{
//		cout << _name << " " << _sex << " " << _age << endl;
//	}
//
//	Student(const Student& student)
//		:Person(student)
//		, _age(student._age)
//	{
//		cout << "Student()��������" << endl;
//	}
//
//	Student operator=(const Student& student)
//	{
//		Person::operator=(student);
//		_age = student._age;
//		return *this;
//		cout << " Strudent operator=()" << endl;
//	}
//
//	~Student()
//	{
//		cout << "~Student" << endl;
//	}
//protected:
//	int _age;
//};
//
//int main()
//{
//	Student s("����", "Ů", 78);
//	s.Print();
//	Student a(s);
//	a.Print();
//
//	Student b;
//	b = s;
//	b.Print();
//	return 0;
//}


//#include<iostream>
//#include<string>
//using namespace std;
//
//class Person
//{
//public:
//	string _name;
//	static int _age;
//};
//
//int Person::_age = 0;
//
//class Student : public Person
//{
//public:
//	string _sex;
//};
//
//class Graduate : public Student
//{
//public:
//	string _major;//��Ŀ
//};
//
//int main()
//{
//	Person a;
//	Student b;
//	Graduate c;
//	a._age += 1;
//	a._age++;
//	cout << a._age << endl;
//	cout << b._age << endl;
//	cout << c._age << endl;
//
//	cout << &a._age << " " << &b._age << " " << &c._age << endl;
//	return 0;
//}


////��̳�
//#include<iostream>
//using namespace std;
//class A
//{
//public:
//	int _a;
//};
//
//class B :virtual public A
//{
//public:
//	int _b;
//};
//
//class C : virtual public A
//{
//public:
//	int _c;
//};
//
//class D :public B, public C
//{
//public:
//	int _d;
//};
//int main()
//{
//	D d;
//	cout << sizeof(d) << endl;
//	d.B::_a = 1;
//	d.C::_a = 2;
//	d._b = 3;
//	d._c = 4;
//	d._d = 5;
//	return 0;
//}

////��ָ Offer 03. �������ظ�������
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
////class Solution {
////public:
////	int findRepeatNumber(vector<int>& nums) {
////		for (int i = 0; i < (int)nums.size(); i++)
////		{
////			while (nums[i] != i)
////			{
////				if (nums[i] == nums[nums[i]])
////					return nums[i];
////				swap(nums[i], nums[nums[i]]);
////			}
////		}
////		return nums[0];
////	}
////};
//
////class Solution {
////public:
////	int findRepeatNumber(vector<int>& nums) {
////		vector<int> flag;
////		flag.resize(nums.size(), 0);
////
////		int i = 0;
////		for (i = 0; i < (int)nums.size(); i++)
////		{
////			if (flag[nums[i]] == 0)
////				flag[nums[i]]++;
////			else
////				break;
////		}
////		return nums[i];
////	}
////};
//
//
//class Solution {
//public:
//	int findRepeatNumber(vector<int>& nums) {
//		sort(nums.begin(), nums.end());
//
//		int prev = nums[0];
//		int i = 1;
//		for (i = 1; i < (int)nums.size(); i++)
//		{
//			if (prev == nums[i])
//				break;
//			else
//			{
//				prev = nums[i];
//			}
//		}
//		return nums[i];
//	}
//};
//
//int main()
//{
//	vector<int> nums{ 2, 3, 1, 0, 2, 5, 3 };
//	cout << Solution().findRepeatNumber(nums) << endl;
//	return 0;
//}


////��ָ Offer 05. �滻�ո�
//#include<iostream>
//#include<string>
//using namespace std;
//
//class Solution {
//public:
//	string replaceSpace(string s) {
//		int count = 0;
//		for (int i = 0; i < (int)s.size(); i++)
//		{
//			if (s[i] == ' ')
//				count++;
//		}
//		string ret;
//		ret.resize(s.size() + count * 3 + 1);
//
//		int insert = 0;
//		for (int i = 0; i <= (int)s.size(); i++)
//		{
//			if (s[i] == ' ')
//			{
//				ret[insert++] = '%';
//				ret[insert++] = '2';
//				ret[insert++] = '0';
//			}
//			else
//				ret[insert++] = s[i];
//		}
//		return ret;
//	}
//};
//
//int main()
//{
//	string s{ "" };
//	cout << Solution().replaceSpace(s) << endl;
//	return 0;
//}

////����ջʵ��һ������
//#include<iostream>
//#include<stack>
//using namespace std;
//class CQueue {
//public:
//	CQueue() {
//
//	}
//
//	void appendTail(int value) {
//		st1.push(value);
//	}
//
//	int deleteHead()
//	{
//		if (st1.empty() && st2.empty())
//			return -1;
//		if (st2.empty())
//		{
//			while (!st1.empty())
//			{
//				st2.push(st1.top());
//				st1.pop();
//			}
//		}
//		int tmp = st2.top();
//		st2.pop();
//		return tmp;
//	}
//private:
//	stack<int> st1;
//	stack<int> st2;
//};

//405. ����ת��Ϊʮ��������
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
	string toHex(int num) {
		string ret, nums = "0123456789abcdef";
		unsigned tmp = num;

		if (num == 0)
			ret.push_back('0');
		while (tmp)
		{
			ret = ret + nums[tmp & 0xf];
			tmp >>= 4;
		}
		reverse(ret.begin(), ret.end());
		return ret;
	}
};
int main()
{
	int num = 0;
	cout << Solution().toHex(num) << endl;
	return 0;
}