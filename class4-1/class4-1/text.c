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

//#include<stdio.h>
//int main()
//{
//	int n, sum = 0;
//	printf("������n��ֵ");
//	scanf("%d", &n);
//	sum = (1 + n)*n / 2;
//	printf("%d", sum);
//	return 0;
//}


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

//#include<stdio.h>
//void main()
//{
//	int a[10], i, k, sum;
//	float ave;
//	k = 0, sum = 0;
//	printf("������10������:");
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &a[i]);
//		if (a[i] > 0)
//		{
//			k++;
//			sum += a[i];
//		}
//	}
//	ave = sum * 1.0 / k;
//	printf("�����ĸ���Ϊ%d,ƽ��ֵΪ:%.2f\n", k, ave);
//}


//#include<stdio.h>
//#define M 3
//#define N 4
//void main()
//{
//	int i, j, sum, a[M][N];
//	float b[M];
//	printf("������%d*%d�ľ���:", M, N);
//	for (i = 0; i < M; i++)
//	{
//		sum = 0;
//		for (j = 0; j < N; j++)
//		{
//			scanf("%d", &a[i][j]);
//			sum += a[i][j];
//		}
//		b[i] = sum * 1.0 / N;
//	}
//	printf("����ƽ��ֵ����Ϊ;\n");
//	for (i = 0; i < M; i++)
//	{
//		printf("%f\n", b[i]);
//	}
//}

//#include<stdio.h>
//int sum(int n)
//{
//	if (n == 1)
//		return 1;
//	else
//		return sum(n - 1)*n;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int len = sum(n);
//	printf("%d", len);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int n = 5;
//	int i = 0;
//	int sum = 0;
//	do
//	{
//		sum += i;
//		i++;
//	} while (i <= n);
//	printf("%d", sum);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int n;
//	int i = 1;
//	double sum = 0;
//	scanf("%d", &n);
//	do
//	{
//		sum += 1.0 / i;
//		i++;
//	} while (i <= n);
//	printf("%f", sum);
//	return 0;
//}


#include<stdio.h>
//����ݹ麯��fib(int)
int fib(int x)
{
	if (x == 2)
		return 1;
	else if (x == 1)
		return 0;
	return fib(x - 1) + fib(x - 2);
}
void main()
{
	int i, n;
	printf("����������: ");
	scanf("%d", &n);
	printf("ǰ%d��fibonacci����Ϊ:", n);
	for (i = 1; i <= n; i++)
		printf("%d ", fib(i));
	printf("\n");
}


//#include<stdio.h>
////����int max(int,int)����
//int max(int* arr, int size)
//{
//	int MAX = arr[0];
//	for (int i = 0; i < size; i++)
//	{
//		if (arr[i] > MAX)
//			MAX = arr[i];
//	}
//	return MAX;
//}
//void main()
//{
//	int i, b[10];
//	printf("������10������: ");
//	for (i = 0; i < 10; i++)
//		scanf("%d", &b[i]);
//	printf("�����Ϊ: %d\n", max(b, 10));
//}