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