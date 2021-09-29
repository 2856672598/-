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

//ģ����ػ������ĳЩ���ͽ������⻯����
#include<iostream>
using namespace std;

template<class T>
bool IsEqual(const T& x1, const T& x2)
{
	return x1 == x2;
}


//����ģ����ػ�
bool IsEqual(const char* p1, const char* p2)
{
	return strcmp(p1, p2) == 0;
}

template<class T1, class T2>
class A
{
public:
	A()
	{
		cout << "<T1,T2>" << endl;
	}
private:
	T1 _a;
	T2 _b;
};

//��ģ���ȫ�ػ�  �ػ�ȫ������
template<>
class A<int, double>
{
public:
	A()
	{
		cout << "��ģ���ȫ�ػ�<int��double>" << endl;
	}
private:
	int _a;
	char _b;
};

//��ģ���ƫ�ػ�---�������ػ�һ���ֲ��� �����ǶԲ�����һ������
template<class	T>
class A<T, int>
{
public:
	A()
	{
		cout << "��ģ���ƫ�ػ�<T,int>" << endl;
	}
private:
	T _a;
	int _b;
};

template<class T1, class T2>
class A<T1&, T2&>
{
public:
	A()
	{
		cout << "<T1&,T2&>" << endl;
	}
private:
	T1 _a;
	T2 _b;
};


template<class T1, class T2>
class A<T1*, T2*>
{
public:
	A()
	{
		cout << "<T1*,T2*>" << endl;
	}
private:
	T1 _a;
	T2 _b;
};
int main()
{
	cout << IsEqual(1, 2) << endl;
	cout << IsEqual("hello", "hello") << endl;

	A<int, long> a;
	A<int, int> b;
	A<int*, char*>c;
	A<double&, char&>d;
	return 0;
}