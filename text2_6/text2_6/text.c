#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//struct S
//{
//	char a;
//	char b;
//	int c;
//};
//struct S1
//{
//	char a;
//	int c;
//	char b;
//};
//struct S3
//{
//	double a;
//	char c;
//	int i;
//};
//struct S4
//{
//	char c1;
//	struct S3;
//	double  b;
//};
//int main()
//{
//	//struct S s1 = { 0 };
//	//struct S1 s2 = { 0 };
//	//printf("%d\n", sizeof(s1));//8
//	//printf("%d\n", sizeof(s2));//12
//
//	/*printf("%d", sizeof(struct S3));*/
//
//	printf("%d", sizeof(struct S4));//32
//	return 0;
//}

//#include<stdio.h>
//#include<stddef.h>
//#pragma pack(4)//����Ĭ�϶�����Ϊ4
//struct S
//{
//	char a;
//	double b;
//};
//#pragma pack()//ȡ�����õ�Ĭ�϶�����
//int main()
//{
//	struct S  s1;
//	//printf("%d", sizeof(s1));//12
//	//offsetof����һ���������Ǻ꣬��ṹ��ƫ����
//	printf("%d\n", offsetof(struct S, a));
//	printf("%d\n", offsetof(struct S, b));
//	return 0;
//}

//#include<stdio.h>
//struct S
//{
//	int a;
//	char b;
//};
//��������ʱ����Ҫ�Rջ������ʱ��Ϳռ��ϵ�ϵͳ����

//����ʹ�õ�ַ����
//void Print(struct S *p)
//{
//	printf("%d %c\n", p->a, p->b);
//}
//int main()
//{
//	struct S s1 = { 10,'w' };
//	Print(&s1);
//	return 0;
//}

//��ϰ7-11 �ַ�������
//#include<stdio.h>
//#include<string.h>
//void reverse(char* arr,int x)
//{
//	int left = 0;
//	int right = x - 1;
//	while (left < right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		right--;
//		left++;
//	}
//}
//int main()
//{
//	char arr[81];
//	gets(arr);
//	//scanf("%s", &arr);
//	reverse(arr,strlen(arr));
//	printf("%s", arr);
//	return 0;
//}

//ϰ��7-1 ѡ������
#include<stdio.h>
int main()
{
	int n, arr[10];
	scanf("%d", &n);
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < n; i++)
	{
		int j = 0;
		for (j = i + 1; j < n; j++)
		{
			if (arr[i] < arr[j])
			{
				int tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
		printf("%d", arr[i]);
		if (i < n - 1)
			printf(" ");
	}
	return 0;
}