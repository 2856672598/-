//#include<iostream>
//using namespace std;
//
//class A
//{
//public:
//	virtual void Print()
//	{
//		cout << "class A Print" << endl;
//	}
//	int _a = 1;
//
//};
//void text1()
//{
//	A a1;
//}
//
//void text2()
//{
//	A a2;
//}
//
//void Fun()
//{
//	int* p1 = new int;
//	const char* p2 = "hello";//�����ַ���
//	A a;
//	printf("�麯�����ַ%p\n", *(int*)&a);
//	printf("ջ������ַ%p\n", &a);
//	printf("�ѱ�����ַ%p\n", p1);
//	printf("����γ�����ַ%p\n", p2);
//	printf("�麯����ַ%p\n", &A::Print);
//	printf("��ͨ������ַ%p\n", text1);
//}
//int main()
//{
//	//text1();
//	//text2();
//
//	Fun();
//	return 0;
//}


//#include<iostream>
//using namespace std;
//
//class A
//{
//public:
//	virtual void fun1()
//	{
//		cout << "fun1()" << endl;
//	}
//	virtual void fun2()
//	{
//		cout << "fun2()" << endl;
//	}
//};
//
//class B :public A
//{
//public:
//	virtual void fun2()
//	{
//		cout << "class b fun2(��" << endl;
//	}
//
//	virtual void fun3()
//	{
//		cout << "class b fun3()" << endl;
//	}
//	virtual void fun4()
//	{
//		cout << "class b fun4()" << endl;
//	}
//};
//typedef void(*VFTable)();
//
//void Print(VFTable* p)
//{
//	for (int i = 0; p[i] != NULL; i++)
//	{
//		printf("p[%d]%p->", i, p[i]);
//		VFTable tmp = p[i];
//		tmp();
//	}
//}
//
//void fun()
//{
//	A a;
//	B b;
//	printf("A\n");
//	Print((VFTable*)*(int*)&a);
//	printf("B\n");
//	Print((VFTable*)*(int*)&b);
//}
//
//int main()
//{
//	fun();
//	return 0;
//}


////��̳д�ӡ�麯����
//#include<iostream>
//using namespace std;
//
//class A
//{
//public:
//	virtual void fun1()
//	{
//		cout << "class A fun1()" << endl;
//	}
//};
//
//class B
//{
//public:
//	virtual void fun2()
//	{
//		cout << "class B fun2()" << endl;
//	}
//};
//
//class C :public A, public B
//{
//public:
//	virtual void fun3()
//	{
//		cout << "class C fun3()" << endl;
//	}
//	virtual void fun4()
//	{
//		cout << "class C fun4()" << endl;
//	}
//};
//
//
//typedef void(*VF)();
//
//void PrintVFTable(VF* p)
//{
//	for (int i = 0; p[i] != NULL; i++)
//	{
//		printf("p[%d]:%p", i, p[i]);
//		VF tmp = p[i];
//		tmp();
//	}
//}
//
//void text1()
//{
//	class C c;
//	//class A a;
//	//PrintVFTable((VF*)*(int*)&a);
//	printf("A\n");
//	PrintVFTable((VF*)*(int*)&c);
//	printf("B\n");
//	PrintVFTable((VF*)*(int*)((char*)&c + sizeof(A)));
//}
//int main()
//{
//	text1();
//	return 0;
//}


//#include<iostream>
//using  namespace std;
//class A
//{
//public:
//	virtual void fun1()
//	{
//		cout << "A fun1()" << endl;
//	}
//};
//
//class B:public A
//{
//public:
//	//virtual void fun1()
//	//{
//	//	cout << "B fun1()" << endl;
//	//}
//};
//
//void text()
//{
//	A a;
//	B b;
//}
//int main()
//{
//	text();
//	return 0;
//}


////1672. ��пͻ����ʲ�����
//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//	int maximumWealth(vector<vector<int>>& accounts) {
//		int max = 0, sum = 0;
//		for (int i = 0; i < (int)accounts.size(); i++)
//		{
//			sum = 0;
//			for (int j = 0; j < (int)accounts[i].size(); j++)
//			{
//				sum += accounts[i][j];
//			}
//			if (sum > max)
//				max = sum;
//		}
//		return max;
//	}
//};
//
//int main()
//{
//	vector<vector<int>>nums{ {1,2,3},{3,2,1} };
//	cout << Solution().maximumWealth(nums) << endl;
//	return 0;
//}


#include<iostream>
using namespace std;

class A
{
public:
	virtual void fun(int a = 1)
	{
		cout << "A a = " << a << endl;
	}
};

class B:public virtual A
{
public:
	virtual void fun(int a = 2)
	{
		cout << "B a = " << a << endl;
	}
};

int main()
{
	A a;
	a.fun();
	A* c = new B;
	c->fun();
	return 0;
}