#define _CRT_SECURE_NO_WARNINGS 1

//��̬�ڴ����


//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	//malloc(10*sizeof(int));
//	int*p = (int*)calloc(10, sizeof(int));
//	//calloc��Ѵ����Ŀռ��ʼ��Ϊ0��
//	if (p == NULL)
//		;
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}


//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int* p = (int*)calloc(5, sizeof(int));
//	if (p != NULL)
//	{
//		int i = 0;
//		for (i = 0; i < 5; i++)
//		{
//			*(p + i) = i;
//			printf("%d ", *(p + i));
//		}
//	}
//	int* str = realloc(p, 40);
//	if (str != NULL)
//	{
//		p = str;
//		int i = 0;
//		for (i = 5; i < 10; i++)
//		{
//			*(p + i) = i;
//			printf("%d ", *(p + i));
//		}
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//һֱ���ٿռ䲻�ͷţ�������ڴ�й©
//�������
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	while (1)
//	{
//		malloc(1);
//	}
//	return 0;
//}

//�������
//#include<stdio.h>
//void text()
//{
//	int* p = (int*)malloc(40);
//	if (p != NULL)
//	{
//		*p = 10;
//	}
//}
//int main()
//{
//	text();
//	while (1);
//	return 0;
//}

//����Text����ʲô���
//�����ڴ�й©������
//��������
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//}
//void Text()
//{
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "helloword");
//	printf("%s", str);
//}
//int main()
//{
//	Text();
//	return 0;
//}

//����һ
//void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);
//}
//void Text()
//{
//	char* str = NULL;
//	GetMemory(&str);
//	strcpy(str, "helloword");
//	printf("%s", str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Text();
//	return 0;
//}

//������
//char* GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//	return p;
//}
//void Text()
//{
//	char* str = NULL;
//	str = GetMemory(str);
//	strcpy(str, "helloword");
//	printf("%s", str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Text();
//	return 0;
//}

//char *GetMemory(void)
//{
//	char p[] = "hello world";//ջ��
//	return p;
//}
//void Test(void)
//{
//	char *str = NULL;
//	str = GetMemory();
//	printf(str);//�Ƿ�����
//}
//int main()
//{
//	Test();
//	return 0;
//}
//void GetMemory(char**p, int num)
//{
//	*p = (char*)malloc(num);
//}
//void Text()
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Text();
//	return 0;
//}
void Text()
{
	char* str = (char*)malloc(100);
	strcpy(str, "hello");
	free(str);//free�ͷź�strָ��Ŀռ䲢���ᱻ��ΪNULL
	if (str != NULL)
	{
		//�Ƿ�����
		strcpy(str, "word");
		printf(str);
	}
}
int main()
{
	Text();
	return 0;
}