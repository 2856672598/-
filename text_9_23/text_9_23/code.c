//#include<stdio.h>
//#include<stdlib.h>
//struct type
//{
//	int i;
//	int arr[];
//};
//
//int main()
//{
//	printf("%d ", sizeof(struct type));
//	return 0;
//}

//#include<stdio.h>
//
//struct A
//{
//	int _a : 2;//ռ2��λ
//	int _b : 4;//ռ4��λ
//	int _c : 6;//ռ6��λ
//};
//int main()
//{
//	struct A a;
//	a._a = 2;
//	a._b = 6;
//	a._c = 30;
//}

//#include<stdio.h>
//
//union A
//{
//	int a;
//	short b;
//};
//
//int main()
//{
//	printf("%d", sizeof(union A));
//	return 0;
//}

//#include<stdio.h>
//union A
//{
//	int a;
//	char b;
//};
//int main()
//{
//	union A a;
//	a.a = 1;
//	if (a.b == 1)
//		printf("С��\n");
//	else
//		printf("���\n");
//	return 0;
//}