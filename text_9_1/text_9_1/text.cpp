//#include<iostream>
//using namespace std;
//int main()
//{
//	//��̬����һ������Ϊint�Ŀռ�
//	int* p1 = new int;
//	//��̬����һ������Ϊint�Ŀռ䲢��ʼ��Ϊ10
//	int* p2 = new int(10);
//	cout << *p2 << endl;
//	//��̬����10��int���͵Ŀռ�
//	int* p3 = new int[10];
//	delete p1;
//	delete p2;
//	delete[] p3;
//
//	return 0;
//}


//#include<iostream>
//using namespace std;
//class A
//{
//public:
//	A()
//	{
//		cout << "A" << endl;
//	}
//	~A()
//	{
//		cout << "~A" << endl;
//	}
//private:
//	int _n;
//};
//int main()
//{
//	A* a1 = (A*)malloc(sizeof(A));
//	free(a1);
//
//	A* a2 = new A;//�Զ�������ʱ��������캯��
//	delete(a2);//�������������
//
//	return 0;
//}


//#include<iostream>
//using namespace std;
//class A
//{
//public:
//	A()
//	{
//		cout << "A" << endl;
//	}
//	~A()
//	{
//		cout << "~A" << endl;
//	}
//private:
//	int _n;
//};
//int main()
//{
//	A* p1 = (A*)operator new(sizeof(A) * 5);
//	new(p1)A;//��λnew new(�ռ��ָ��)���캯��
//
//	p1->~A();
//	operator delete(p1);
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	char* p1 = new char[1024 * 1024 * 1024];
//	int* p2 = new int;
//	//���ڴ�����û�ж����ͷţ��ͻ����й©
//	return 0;
//}



#include<iostream>
using namespace std;
template <class T>
void Swap(T& x1, T& x2)
{
	T tmp = x1;
	x1 = x2;
	x2 = tmp;
}
int main()
{
	int a = 10, b = 20;
	Swap(a, b);
	char ch1 = 'a', ch2 = 'b';
	Swap(ch1, ch2);
	double x = 1.23, y = 34.65;
	Swap(x, y);
	return 0;
}