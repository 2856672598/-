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

//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	switch (n)
//	{
//	case 1:
//		printf("һ��\n");
//		break;
//	case 2:
//		printf("����\n");
//		break;
//	case 3:
//		printf("����\n");
//		break;
//	case 4:
//		printf("����\n");
//		break;
//	case 5:
//		printf("����\n");
//		break;
//	case 6:
//		printf("����\n");
//		break;
//	case 7:
//		printf("����\n");
//		break;
//	case 8:
//		printf("����\n");
//		break;
//	case 9:
//		printf("����\n");
//		break;
//	case 10:
//		printf("ʮ��\n");
//		break;
//	case 11:
//		printf("ʮһ��\n");
//		break;
//	case 12:
//		printf("ʮ����\n");
//		break;
//	default:
//		printf("error\n");
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	if (n >= 0 && n <= 100)
//		n /= 10;
//	else
//	{
//		printf("��������\n");
//		return 0;
//	}
//	switch (n)
//	{
//	case 10:
//	case 9:
//		printf("����\n");
//		break;
//	case 8:
//		printf("��\n");
//		break;
//	case 7:
//		printf("����\n");
//		break;
//	case 6 :
//	case 5:
//	case 4:
//	case 3:
//	case 2:
//	case 1:
//	case 0:
//		printf("������\n");
//		break;
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	double weight, height, bmi;
//	printf("��������ߣ�m�������أ�kg):");
//	scanf("%lf %lf", &height, &weight);
//	bmi = weight / (height*height);
//	if (bmi < 18.5)
//		printf("ƫ��,BMIָ��Ϊ%lf\n", bmi);
//	else if (bmi <= 24.9)
//		printf("����,BMIָ��Ϊ%lf\n", bmi);
//	else if (bmi <= 27.9)
//		printf("����,BMIָ��Ϊ%lf\n", bmi);
//	else
//		printf("����,BMIָ��Ϊ%lf\n", bmi);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int x, y;
//	scanf("%d", &x);
//	if (x < -10)
//		y = 10;
//	else if (x <= 10)
//		y = 0;
//	else
//		y = -10;
//	printf("%d", y);
//	return 0;
//}

#include<stdio.h>
int main()
{
	int n, sum = 0;
	printf("������n��ֵ");
	scanf("%d", &n);
	sum = (1 + n)*n / 2;
	printf("%d", sum);
	return 0;
}


//#include<stdio.h>
//int main()
//{
//	int i = 1, sum = 0, n;
//	printf("������n��ֵ��");
//	scanf("%d", &n);
//	while (i <= n)
//	{
//		sum += i;
//		i++;
//	}
//	printf("sum= %d", sum);
//	return 0;
//}