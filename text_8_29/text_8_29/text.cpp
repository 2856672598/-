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


////��Ԫ
//#include<iostream>
//using namespace std;
//class Date
//{
//	friend ostream& operator<<(ostream& _cout, const Date& d);
//	friend istream& operator>>(istream& _cin, Date& d);
//public:
//	Date(int year = 0, int month = 1, int day = 1)
//		:_year(year)
//		, _month(month)
//		, _day(day)
//	{}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//ostream& operator<<(ostream& _cout, const Date& d)
//{
//	_cout << d._year << "/" << d._month << "/" << d._day << endl;
//	return _cout;
//}
//istream& operator>>(istream& _cin, Date& d)
//{
//	_cin >> d._year;
//	_cin >> d._month;
//	_cin >> d._day;
//	return _cin;
//}
//int main()
//{
//	Date d1(2021, 8, 29);
//	Date d2;
//	cout << d1 << d2 ;
//	cin >> d2;
//	cout << d2;
//	return 0;
//}



////��Ԫ��
//#include<iostream>
//using namespace std;
//class Time
//{
//	friend class Date;
//public:
//	Time(int hour = 0, int minute = 0, int second = 0)
//		:_hour(hour)
//		,_minute(minute)
//		,_second(second)
//	{}
//private:
//	int _hour;
//	int _minute;
//	int _second;
//};
//class Date
//{
//public:
//	Date(int year = 0, int month = 1, int day = 1)
//		:_year(year)
//		,_month(month)
//		,_day(day)
//	{}
//	void GetDateTime()
//	{
//		cout << _year << "/" << _month << "/" << _day << '-' << _t._hour << '-' << _t._minute
//			<< '-' << _t._second << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//	Time _t;
//};
//int main()
//{
//	Date d1;
//	d1.GetDateTime();
//	return 0;
//}


////�������m��һ���еĵ�n�죬�����n���Ǽ��¼��š�
//#include<iostream>
//#include <iomanip> 
//using namespace std;
//class Date
//{
//	friend istream& operator>>(istream& _cin, Date& d);
//	friend ostream& operator<<(ostream& _cou, Date& d);
//public:
//	Date(int year = 0, int month = 1, int day = 1)
//		:_year(year)
//		, _month(month)
//		, _day(day)
//	{};
//	int GetMonthDay(int year, int month)
//	{
//		int day[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//		if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0))
//			day[month] = 29;
//		return day[month];
//	}
//	//Date MonthAndDay(int year, int day)
//	//{
//	//	Date d(year, 1, day);
//	//	while (d._day > GetMonthDay(d._year, d._month))
//	//	{
//	//		d._day -= GetMonthDay(d._year, d._month);
//	//		d._month++;
//	//	}
//	//	return d;
//	//}
//
//	void MonthAndDay()
//	{
//		Date d(_year, 1, _day);
//		while (d._day > GetMonthDay(d._year, d._month))
//		{
//			d._day -= GetMonthDay(d._year, d._month);
//			d._month++;
//		}
//		cout << d;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//istream& operator>>(istream& _cin, Date& d)
//{
//	_cin >> d._year >> d._day;
//	return _cin;
//}
//ostream& operator<<(ostream& _cout, Date& d)
//{
//	_cout << d._year << "-" << setw(2) << setfill('0') << d._month << "-" << setw(2) << setfill('0')<< d._day << endl;
//	return _cout;
//}
//int main()
//{
//	Date d;
//	int year = 0, day = 0;
//	while (cin >>d)
//	{
//		d.MonthAndDay();
//	}
//	return 0;
//}


//KY258 �����ۼ�
//#include <iomanip> 
//#include<iostream>
//using namespace std;
//class Date
//{
//	friend ostream& operator<<(ostream& _cout, const Date& d);
//	friend istream& operator>>(istream& _cin, Date& d);
//public:
//	Date(int year = 0, int month = 1, int day = 1)
//		:_year(year)
//		, _month(month)
//		, _day(day)
//	{}
//	int GetMonthDay(int year, int month)
//	{
//		int day[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//		if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0))
//			day[month] = 29;
//		return day[month];
//	}
//	Date operator+(const int day)const
//	{
//		Date ret(*this);
//		ret._day += day;
//		while (ret._day > ret.GetMonthDay(ret._year, ret._month))
//		{
//			ret._day -= ret.GetMonthDay(ret._year, ret._month);
//			++ret._month;
//			if (ret._month > 12)
//			{
//				ret._month -= 12;
//				ret._year++;
//			}
//		}
//		return ret;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//ostream& operator<<(ostream& _cout, const Date& d)
//{
//	_cout << d._year << "-" << setw(2) << setfill('0') << d._month << "-" << setw(2) << setfill('0') << d._day << endl;
//	return _cout;
//}
//
//istream& operator>>(istream& _cin, Date& d)
//{
//	_cin >> d._year >> d._month >> d._day;
//	return _cin;
//}
//int main()
//{
//	int n;
//	cin >> n;
//	Date d1;
//	while (n--)
//	{
//		Date d2;
//		cin >> d1;
//		int day = 0;
//		cin >> day;
//		d2 = d1 + day;
//		cout << d2;
//	}
//	return 0;
//}


////KY111 ���ڲ�ֵ
//#include<iostream>
//using namespace std;
//class Date
//{
//	friend istream& operator>>(istream& _cin, Date& d1);
//public:
//	Date(int year = 0, int month = 1, int day = 1)
//		:_year(year)
//		,_month(month)
//		,_day(day)
//	{}
//	bool operator==(const Date& d)const
//	{
//		return _year == d._year
//			&&_month == d._month
//			&&_day == d._day;
//	}
//	int GetMonthDay(const int year,const int month)
//	{
//		int day[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//		if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0))
//			day[month] = 29;
//		return day[month];
//	}
//	Date& operator+=(const int day)
//	{
//		_day += day;
//		while (_day > GetMonthDay(_year, _month))
//		{
//			_day -= GetMonthDay(_year, _month);
//			_month++;
//			if (_month > 12)
//			{
//				_month -= 12;
//				_year++;
//			}
//		}
//		return *this;
//	}
//	bool operator<(const Date d)const
//	{
//		if (_year < d._year)
//			return true;
//		else if (_year == d._year&&_month < d._month)
//			return true;
//		else if (_year == d._year&&d._month == _month && _day < d._day)
//			return true;
//		return false;
//	}
//	int operator-(const Date d)const
//	{
//		int day = 1;
//		Date max(*this);
//		Date min(d);
//		if (max < min)
//		{
//			max = d;
//			min = *this;
//		}
//		while (!(min == max))
//		{
//			day++;
//			min += 1;
//		}
//		return day;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//istream& operator>>(istream& _cin, Date& d1)
//{
//	int tmp;
//	cin >> tmp;
//	d1._day = tmp % 100;
//	tmp /= 100;
//	d1._month = tmp % 100;
//	tmp /= 100;
//	d1._year = tmp;
//	return _cin;
//}
//
//int main()
//{
//	Date d1;
//	Date d2;
//	while (cin >> d1 >> d2)
//	{
//		cout << d2 - d1 << endl;
//	}
//	return 0;
//}


#include<iostream>
using namespace std;
class Date
{
	friend istream& operator>>(istream& _cin, Date& d);
public:
	Date(int year = 0, int month = 1, int day = 1)
		:_year(year)
		,_month(month)
		,_day(day)
	{}
	int GetMonthDay(const int year, const int month)
	{
		int day[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
		if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0))
			day[month] = 29;
		return day[month];
	}
	int WhatDay()
	{
		int day = _day;
		int month = 1;
		while (month < _month)
		{
			day += GetMonthDay(_year, month);
			month++;
		}
		return day;
	}
private:
	int _year;
	int _month;
	int _day;
};

istream& operator>>(istream& _cin, Date& d)
{
	_cin >> d._year >> d._month >> d._day;
	return _cin;
}
int main()
{
	Date d1;
	cin >> d1;
	cout << d1.WhatDay();
	return 0;
}