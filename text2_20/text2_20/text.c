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
#include<stdio.h>
#define SIZE(type) sizeof(type)
int main()
{
	int ret = SIZE(int);
	printf("%d", ret);
	return 0;
}