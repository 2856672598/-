//#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS
//λ��
//struct S
//{
//	int a : 10;
//	int b : 5;
//	int c : 6;
//};
//struct S1
//{
//	char a : 5;
//	char c : 3;
//	char d : 4;
//};
//int main()
//{
//	printf("%d\n", sizeof(struct S));
//	printf("%d\n", sizeof(struct S1));
//	return 0;
//}


//ϰ��7-6 ͳ�ƴ�д������ĸ
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[81];
//	int count = 0;
//	gets(arr);
//	//scanf("%s", arr);
//	int sz = strlen(arr);
//	int  i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] >= 'A'&&
//			arr[i] <= 'Z'&&
//			arr[i] != 'A'&&
//			arr[i] != 'U'&&
//			arr[i] != 'E'&&
//			arr[i] != 'I'&&
//			arr[i] != 'O')
//		{
//			count++;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}


//ϰ��7 - 7 �ַ����滻
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[81];
//	gets(arr);
//	int i = 0;
//	int sz = strlen(arr);
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] >= 'A'&&arr[i] <= 'Z')
//			arr[i] = 'A' + 'Z' - arr[i];
//	}
//	printf("%s", arr);
//	return 0;
//}


//��ϰ7-10 ����ָ���ַ�
#include<stdio.h>
#include<string.h>
int main()
{
	char x;
	char arr[81];
	scanf("%c\n", &x); 
	int i = 0, index = -1,count = 0;
	/*getchar();
	gets(arr);*/
	char ch = getchar();
	for (i = 0; ch != '\n'; i++)
	{
		arr[i] = ch;
		count++;
		ch = getchar();
	}
	//int sz = strlen(arr);
	for (i = 0; i < count; i++)
	{
		if (arr[i] == x)
		{
			index = i;
		}
	}
	if (index != -1)
		printf("index = %d", index);
	else
		printf("Not Found\n");
	return 0;
}