#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int n;
//	int sum = 1;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		sum *= i;
//	}
//	printf("%d", sum);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int ret = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		int sum = 1;
//		for (int j = 1; j <= i; j++)
//			sum *= j;
//		ret += sum;
//	}
//	printf("%d", ret);
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = 1, sum = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		ret *= i;
//		sum += ret;
//	}
//	printf("%d", sum);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] == 17)
//			break;
//	}
//	if (i >= sz)
//		printf("û�ҵ�\n");
//	else
//		printf("�±�Ϊ%d", i);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0, right = sz - 1;
//	int min = 0;
//	while (left <= right)
//	{
//		min = (left + right) / 2;
//		if (arr[min] > 6)
//		{
//			right = min - 1;
//		}
//		else if (arr[min] < 6)
//			left = min + 1;
//		else
//			break;
//	}
//	if (left <= right)
//		printf("�±�wΪ%d", min);
//	else
//		printf("û���ҵ�\n");
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[3] = { 0 };
//	char ch;
//	while ((ch = getchar()) != '\n')
//	{
//		if (ch >= 'a'&&ch <= 'z' || ch >= 'A'&&ch <= 'Z')
//			arr[0]++;
//		else if (ch >= '0'&&ch <= '9')
//			arr[1]++;
//		else
//			arr[2]++;
//	}
//	printf("%d %d %d", arr[0], arr[1], arr[2]);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int arr[10];
//	for (int i = 0; i < 10; i++)
//		scanf("%d", &arr[i]);
//	int max = arr[0], min = arr[0];
//	for (int i = 0; i < 10; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//		if (arr[i] < min)
//			min = arr[i];
//	}
//	printf("���ֵΪ%d ,��СֵΪ%d", max, min);
//	return 0;
//}

//#include<stdio.h>
//int Max(int x, int y)
//{
//	return x > y ? x : y;
//}
//int main()
//{
//	int a, b, max;
//	scanf("%d %d", &a, &b);
//	max = Max(a, b);
//	printf("���ֵΪ%d", max);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int n, sum = 0;
//	scanf("%d", &n);
//	for (int i = 0; i <= n; i += 2)
//	{
//		sum += i;
//	}
//	printf("%d", sum);
//	return 0;
//}


//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//int main()
//{
//	char input[20];
//	while (1)
//	{
//		printf("���ĵ��Խ���һ�����ڹػ���������������ͣ�ػ�\n");
//		scanf("%s", input);
//		if (strcmp(input, "������") == 0)
//		{
//			system("shutdown -a");
//			printf("ȡ���ػ�\n");
//			break;
//		}
//	}
//	return 0;
//}