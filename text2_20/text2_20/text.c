#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	//Ԥ�������
//	printf("%s\n", __FILE__);
//	printf("%s\n", __TIME__);//�ļ��������ʱ��
//	printf("%d\n", __LINE__);//�ļ���ǰ���к�
//	printf("%s\n", __DATE__);//�ļ������������
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	FILE* pf = fopen("text.txt", "w");
//	if (pf == NULL)
//		return 0;
//	int arr[5];
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		arr[i] = i;
//		//��־
//		fprintf(pf, "file:%s date: %s time: %s line: %d i: %d\n",
//			__FILE__, __DATE__, __TIME__, __LINE__, i);
//	}
//	fclose(pf);
//	pf = NULL;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//#include<stdio.h>
//#define ADD(x,y) x+y
//int main()
//{
//	int x = 5, y = 2, z = 2;
//	int ret = z * ADD(x, y);
//	//�����滻�����Ǵ���
//	printf("%d", ret);//12
//	return 0;
//}

//#include<stdio.h>
//#define ADD(x,y) (x+y)
//int main()
//{
//	int x = 5, y = 2, z = 2;
//	int ret = z * ADD(x, y);
//	printf("%d", ret);//14
//	return 0;
//}

//     #----��һ���������ɶ�Ӧ���ַ���
//#include<stdio.h>
//#define PRINT(x) printf("the value of "#x" is %d\n",x);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	PRINT(a);
//	PRINT(b);
//	return 0;
//}

//    ##----���԰������ߵķ��źϳ�һ������
//#include<stdio.h>
//#define CAT(x,y) x##y
//int main()
//{
//	int Class2021 = 100;
//	printf("%d", CAT(Class, 2021));
//	return 0;
//}


//�������õĺ����
//#include<stdio.h>
//#define MAX(x,y) (x)>(y)?(x):(y)
//int main()
//{
//	int a = 9;
//	int b = 10;
//	int max = MAX(a++, b++);
//	//max = a++ > b++ ? a++ : b++;
//	printf("%d\n", max);//11
//	printf("%d\n", a);//10
//	printf("%d\n", b);//12
//	return 0;
//}

//��Ĳ�������������
//�겻���Ե���
//#include<stdio.h>
//#define SIZE(type) sizeof(type)
//int main()
//{
//	int ret = SIZE(int);
//	printf("%d", ret);
//	return 0;
//}


//��������
//#include<stdio.h>
////#define DEBUG
//int main()
//{
////��������----��������� ���� DEBUG����б���
////#ifdef DEBUG
////	printf("hehe\n");
////#endif
//
////�ж��Ƿ񱻶���
////#if defined(DUBUG)
////	printf("haha\n");
////#endif
//
////#if !defined(DEBUG)
////	printf("�ٺ�\n");
////#endif
//
////���δ����DEBUG����б���
//// ifdef-----ifndef;����һ��n
////#ifndef DEBUG
////	printf("�ٺ�\n");
////#endif
//
////�������ʽ��Ԥ��������ֵ
////���֧����������
//
////#if  �������ʽ
////	//
////#elif �������ʽ
////	//
////#else
////	//
////#endif
//
////#if 1==2
////	printf("haha\n");
////#elif 2==2
////	printf("hehe\n");
////#else
////	printf("�ٺ�\n");
////#endif
//
////Ƕ��ָ��
//#if defined(DUBUG)
//	#ifdef OPTION
//		option();
//	#endif
//	#ifdef OPTION1
//		option1();
//	#endif
//#elif defined(MAX)
//	#ifdef OPTION2
//		option2();
//	#endif
//#endif
//	return 0;
//}

////���������ÿ⺯��
////ֱ���ڱ�׼λ�ò���ͷ�ļ������Ҳ�����ʾ�������
//#include<stdio.h>
////�����������Լ�д��ͷ�ļ�
////���Ҳ��ԣ� ������Դ�ļ����ڵ�Ŀ¼�²��ң������ͷ�ļ�δ�ҵ���������������ҿ⺯��ͷ�ļ�һ��
////�ڱ�׼λ���²���ͷ�ļ�������Ҳ�������ʾ�������
//#include"text.h"
//int main()
//{
//	int len = Add(3, 4);
//	printf("%d", len);
//	return 0;
//}


//offsetof  ��ʵ��
#include<stdio.h>
#define OFFSETOF(struct_name,member_name) (int)&(((struct_name *)0)->member_name)
struct S
{
	int a;
	char b;
	double c;
};
int main()
{
	int len = OFFSETOF(struct S, b);
	printf("%d ", len);
	return 0;
}