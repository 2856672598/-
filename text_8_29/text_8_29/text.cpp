//#include<iostream>
//using namespace std;
//class Date
//{
//public:
//
//	//��ʼ���б�-->��ʼ��ֻ�ܽ���һ��
//	Date(int year = 0, int month = 1, int day = 1)
//		:_year(year),
//		_month(month),
//		_day(day)
//	{
//		//����ֵ
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//	return 0;
//}



//#include<iostream>
//using namespace std;
//class A
//{
//public:
//	A(int a)
//		: _a(a)
//	{}
//private:
//	int _a;
//
//};
//class B
//{
//public:
//	B(int a, int b, int c)
//		:_a(a),
//		_b(b),
//		_c(c)
//	{
//	}
//private:
//	//Ӧʹ�ó�ʼ���б���г�ʼ��
//	A _a;//û��Ĭ�ϵĹ��캯��
//	const int _b;//const
//	int& _c;//����
//};
//int main()
//{
//	return 0;
//}

//#include<iostream>
//using namespace std;
//class A
//{
//public:
//	A(int a)//��Ա������ʼ����˳�����������������˳�����ڳ�ʼ���б��е�˳���޹�
//		//��ʼ���б�
//		:_a (a),
//		_b(_a)
//	{}
//	void Print()
//	{
//		cout << _a << " " << _b << endl;
//	}
//private:
//	//��������
//	int _b;
//	int _a;
//};
//int main()
//{
//	A aa(2);
//	aa.Print();
//	return 0;
//}

//#include<iostream>
//using namespace std;
//class Date
//{
//public:
//	explicit Date(int year = 0, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//		cout << "Date" << endl;
//	}
//	Date(Date& d)
//	{
//		_year = d._year;
//		_month = d._month;
//		_day = d._day;
//		cout << "Date1" << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//	Date d1(2012, 4, 6);//���캯��
//	Date d2(d1);//��������
//	Date d3 = d2;//��������
//	//Date d4 = 2;//��������ת��   >>�ȹ���tmp(2),Ȼ�󿽱�����>>�Ż���ֱ�ӹ���
//	//�ڹ��캯��ǰ��explicit�����ֹ���������캯��������ת��
//	return 0;
//}

////���㴴���˶��ٸ���Ķ���
//#include<iostream>
//using namespace std;
//class A
//{
//public:
//	//����
//	A()
//	{
//		++_count;
//	}
//	//��������
//	A(const A& a)
//	{
//		++_count;
//	}
//	void GetCount()
//	{
//		cout << _count << endl;
//	}
//private:
//	static int _count;
//};
//
//int A::_count = 0;
//int main()
//{
//	A a1;
//	A a2(a1);
//	A a3(a2);
//	a3.GetCount();
//	return 0;
//}


//#include<iostream>
//using namespace std;
//class Sum
//{
//public:
//	Sum()
//	{
//		_sum += _i;
//		_i++;
//	}
//	static int GetSum()
//	{
//		return _sum;
//	}
//private:
//	static int _i;
//	static int _sum;
//};
//
//int Sum::_i = 1;
//int Sum::_sum = 0;
//
//class Solution {
//public:
//	int Sum_Solution(int n)
//	{
//		Sum *p = new Sum[n];
//		return Sum::GetSum();
//	}
//};
//
//int main()
//{
//	Solution s;
//	cout <<s.Sum_Solution(5) << endl;
//	return 0;
//}

//
////��̬�ĳ�Ա�������Ե��÷Ǿ�̬�ĳ�Ա������_----->>>������
////�Ǿ�̬�ĳ�Ա�������Ե��þ�̬�ĳ�Ա�����𣿣���--->>����
//#include<iostream>
//using namespace std;
//class A
//{
//public:
//	void F1()
//	{}
//	static void F2()
//	{
//		//��̬��Ա����û��Ĭ�ϵ�thisָ�룬��̬�����Ǵ洢�ھ�̬����
//		F1();
//	}
//	void F3()
//	{
//		F1();
//	}
//};
//int main()
//{
//	return 0;
//}


//��Ԫ
#include<iostream>
using namespace std;
class Date
{
	friend ostream& operator<<(ostream& _cout, const Date& d);
	friend istream& operator>>(istream& _cin, Date& d);
public:
	Date(int year = 0, int month = 1, int day = 1)
		:_year(year)
		, _month(month)
		, _day(day)
	{}
private:
	int _year;
	int _month;
	int _day;
};
ostream& operator<<(ostream& _cout, const Date& d)
{
	_cout << d._year << "/" << d._month << "/" << d._day << endl;
	return _cout;
}
istream& operator>>(istream& _cin, Date& d)
{
	_cin >> d._year;
	_cin >> d._month;
	_cin >> d._day;
	return _cin;
}
int main()
{
	Date d1(2021, 8, 29);
	Date d2;
	cout << d1 << d2 ;
	cin >> d2;
	cout << d2;
	return 0;
}