//ö�ٺ͹�����
//#include<stdio.h>
//enum day
//{
//	Mon,
//	Tues,
//	Wed,
//	Thur,
//	Fir
//}d;
//int main()
//{
//	printf("%d\n", sizeof(Fir));
//	printf("%d %d %d %d\n", Mon, Tues, Wed, Thur);
//	return 0;
//}

//union Un
//{
//	char a;
//	int i;
//}un;
//int main()
//{
//	printf("%p\n", &un.a);
//	printf("%p\n", &un.i);
//	printf("%p\n", &un);
//	return 0;
//}

//��С��
//#include<stdio.h>
//int main()
//{
//	int a = 1;
//	if (*((char*)&a) == 1)
//		printf("С��\n");
//	else
//		printf("���\n");
//	return 0;
//}

//#include<stdio.h>
//int order()
//{
//	union
//	{
//		char a;
//		int i;
//	}n;
//	n.i = 1;
//	return n.a;//����1ΪС��
//
//}
//int main()
//{
//	int len = order();
//	if (len == 1)
//		printf("С��\n");
//	else
//		printf("���\n");
//	return 0;
//}
#include<stdio.h>
union un
{
	int i;
	char arr[5];
}s;
int main()
{
	printf("%d", sizeof(s));//8
	return 0;
}