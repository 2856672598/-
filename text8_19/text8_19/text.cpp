//#include<iostream>
//
////using std::cout;
////using std::cin;
////using std::endl;
//
////c++�������ж������Ƿŵ�std�����ռ�ģ�namespace)
//using namespace std;//��std���ж�����չ��
//int main()
//{
//	int a;
//	double b;
//	//std::cin >> a >> b;
//	//std::cout << "hello word" << std::endl;
//	//std::cout << a << " " << b << std::endl;
//
//	cin >> a >> b;
//	cout << a << " " << b;
//
//	return 0;
//}



//#include<iostream>
//using std::cout;
//using std::endl;
//
////ȫȱʡ����
//void Funk1(int a = 10, int b = 20)
//{
//	cout << a << " " << b << endl;
//}
////��ȱʡ
//void Funk2(int a, int b = 20)
//{
//	cout << a << " " << b << endl;
//}
//int main()
//{
//	//Funk1();
//	//Funk1(30);
//	Funk1(30, 40);
//
//	//Funk2(50);
//	//Funk2();//err��������ȱʡ
//	return 0;
//}

//#include<iostream>
//using namespace std;
////���غ���
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//double Add(double x, double y)
//{
//	return x + y;
//}
//
//long int Add(long x, long y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int a = 0, b = 0;
//	cin >> a >> b;
//	int add = Add(a, b);
//	cout << add << endl;
//	return 0;
//}


//#include<iostream>
//using std::cout;
//using std::endl;
//int main()
//{
//	cout << 'V' << "   " << 'V' << endl;
//	cout << " " << 'V' << " " << 'V' << endl;
//	cout << "  " << 'V' << endl;
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	//int a = 10;
//	//int&b = a;//���� ���Ǹ�aȡ�˸����� ��b;
//	//int c = 20;
//	//cout << a << endl;
//	//cout << b << endl;
//
//	int a = 10;
//	double c = a;
//	const double& b = a;
//	cout << b << endl;
//	return 0;
//}


//#include<iostream>
//using namespace std;
//void swap(int&x, int&y)
//{
//	int tmp = x;
//	x = y;
//	y = tmp;
//}
//int main()
//{
//	int a = 10, b = 20;
//	swap(a, b);
//	cout << a << b << endl;
//	return 0;
//}



//#include<iostream>
//using std::endl;
//using std::cout;
//int& Add(int x, int y)
//{
//	int c = x + y;
//	return c;
//}
//
//int main()
//{
//	int& ret = Add(2, 3);
//	Add(4, 5);
//
//	cout << "Add(2, 3) is " << ret << endl;//����Ϊ�ֲ�����ʱ�����÷����ǲ���ȫ��
//	return 0;
//}


//#include<iostream>
//#include<ctime>
//using namespace std;
//struct A
//{
//	int arr[10000];
//};
//struct A a;
//struct A text1()
//{
//	return a;
//}
//struct A& text2()
//{
//	return a;
//}
//int main()
//{
//	int i = 0;
//	int time1 = clock();
//	for (i = 0; i < 100000; i++)
//		text1();
//	int time2 = clock();
//	int time3 = clock();
//	for (i = 0; i < 100000; i++)
//		text2();
//	int time4 = clock();
//	cout << "text1 time:" << time2 - time1 << endl;
//	cout << "text2 time:" << time4 - time2 << endl;
//	return 0;
//}


//#include<iostream>
//using namespace std;
//int main()
//{
//	int arr[] = { 1,2,3,4 };
//	//c����
//	int i = 0;
//	for (i = 0; i < sizeof(arr) / sizeof(int); i++)
//	{
//		arr[i] *= 2;
//	}
//	for (i = 0; i < sizeof(arr) / sizeof(int); i++)
//		printf("%d ", arr[i]);
//	printf("\n");
//
//	//��Χfor
//	for (auto&a : arr)
//	{
//		a *= 2;
//	}
//	for (auto a : arr)
//	{
//		cout << a << " ";
//	}
//	cout << endl;
//	return 0;
//}


//#include<iostream>
//using namespace std;
//void Fun(int n)
//{
//	cout << "����" << endl;
//}
//void Fun(int* n)
//{
//	cout << "����ָ��" << endl;
//}
//int main()
//{
//	Fun(0);
//	Fun(NULL);
//	Fun(nullptr);//c++11�н����ָ��ʹ��nullptr;
//	return 0;
//}



//#include<iostream>
//using namespace std;
//
//class ListNode
//{
//	//1.��Ա����
//	//2.��Ա����
//private:
//	int _val;
//	ListNode* _next;
//	ListNode* _prev;
//};
//
//
////struct ListNode
////{
////	int _val;
////	ListNode* _next;
////	ListNode* _prev;
////};
//
//int main()
//{
//	ListNode s;
//	//s._val = 0;//err ˽�еĺͱ��������ⲿ�����Ա��޸�
//	return 0;
//}


//#include<iostream>
//using namespace std;
//class A
//{
//public:
//	int _x;
//	int _y;
//	int Add(int _x, int  _y)
//	{
//		return _x + _y;
//	}
//};
//class B
//{
//	int Add(int x, int y)
//	{
//		int sum = x + y;
//		return sum;
//	}
//};
//int main()
//{
//	A a;
//	//ʵ������Ķ���Ĵ�СΪ��������ӵĴ�С����Ҫ�����ڴ���룩
//	cout << sizeof(A) << endl;//8
//
//	//��ʵ��������û�б���ʱ����СΪ1
//	cout << sizeof(B) << endl;//1
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//class Data
//{
//public:
//	void Init(int year, int month, int day)//void Init(Data* this ,int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	void Print()//void Print(Data* this)
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//	Data a;
//	a.Init(2021, 8, 24);//a.Init(&a , 2021 , 8 , 24);
//	a.Print();
//	return 0;
//}


//#include<iostream>
//using namespace std;
//class A
//{
//public:
//	void PrintA()
//	{
//		cout << _a << endl;
//	}
//	void Show()
//	{
//		cout << "show" << endl;
//	}
//private:
//	int _a;
//};
//int main()
//{
//	A* a = NULL;
//	//��Ա�����洢�ڹ�������Σ����Բ��ᵽ������ȥ���ҳ�Ա����
//	//PrintA����������thisָ�������ã����±�����NULL��
//	//Show����û�ж�thisָ����н����ã������������
//	a->PrintA();//�������
//	a->Show();//�������
//	return 0;
//}

//#include<iostream>
//using namespace std;
//class Date
//{
//public:
//	//���캯��-->֧�ֺ�������
//	Date(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	Date()
//	{
//		_year = 0;
//		_month = 1;
//		_day = 1;
//	}
//	void Print()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//	Date d1(2021, 8, 24);
//	d1.Print();
//	Date d2;//Data d2() ���캯���޲�ʱ����Ҫд����
//	d2.Print();
//	return 0;
//}

//#include<iostream>
//using namespace std;
//class Time
//{
//public:
//	Time()
//	{
//		_hour = 0;
//		_minute = 0;
//		_second = 0;
//	}
//private:
//	int _hour;
//	int _minute;
//	int _second;
//
//};
//
//class Date
//{
//public:
//	void Print()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
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
//	d1.Print();
//	return 0;
//}


#include<iostream>
using namespace std;
class Date
{
public:
	//ȫȱʡ���캯��
	Date(int year = 0, int month = 1, int day = 1)
	{
		_year = year;
		_month = month;
		_day = day;
	}

	//��������
	~Date()
	{
		;
	}
	void Print()
	{
		cout << _year << "-" << _month << "-" << _day << endl;
	}
private:
	int _year;
	int _month;
	int _day;
};
int main()
{
	Date d1;
	d1.Print();
	return 0;
}