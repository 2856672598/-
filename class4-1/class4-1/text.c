#define  _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	printf("������ɼ�\n");
//	scanf("%d", &n);
//	if (n > 100 || n < 0)
//		printf("�ɼ���Ч\n");
//	else if (n >= 90)
//		printf("����\n");
//	else if (n >= 80)
//		printf("��");
//	else if (n >= 70)
//		printf("��\n");
//	else if (n >= 60)
//		printf("����\n");
//	else
//		printf("������\n");
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	int max = a;
//	if (a < b)
//	{
//		if (b < c)
//			max = c;
//		else
//			max = b;
//	}
//	else
//	{
//		if (a > c)
//			max = a;
//		else
//			max = c;
//	}
//	printf("%d", max);
//}

#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	switch (n)
	{
	case 1:
		printf("һ��\n");
		break;
	case 2:
		printf("����\n");
		break;
	case 3:
		printf("����\n");
		break;
	case 4:
		printf("����\n");
		break;
	case 5:
		printf("����\n");
		break;
	case 6:
		printf("����\n");
		break;
	case 7:
		printf("����\n");
		break;
	case 8:
		printf("����\n");
		break;
	case 9:
		printf("����\n");
		break;
	case 10:
		printf("ʮ��\n");
		break;
	case 11:
		printf("ʮһ��\n");
		break;
	case 12:
		printf("ʮ����\n");
		break;
	default:
		printf("error\n");
	}
	return 0;
}