#define  _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	printf("请输入成绩\n");
//	scanf("%d", &n);
//	if (n > 100 || n < 0)
//		printf("成绩无效\n");
//	else if (n >= 90)
//		printf("优秀\n");
//	else if (n >= 80)
//		printf("良");
//	else if (n >= 70)
//		printf("中\n");
//	else if (n >= 60)
//		printf("及格\n");
//	else
//		printf("不及格\n");
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
//		printf("一月\n");
//		break;
//	case 2:
//		printf("二月\n");
//		break;
//	case 3:
//		printf("三月\n");
//		break;
//	case 4:
//		printf("四月\n");
//		break;
//	case 5:
//		printf("五月\n");
//		break;
//	case 6:
//		printf("六月\n");
//		break;
//	case 7:
//		printf("七月\n");
//		break;
//	case 8:
//		printf("八月\n");
//		break;
//	case 9:
//		printf("九月\n");
//		break;
//	case 10:
//		printf("十月\n");
//		break;
//	case 11:
//		printf("十一月\n");
//		break;
//	case 12:
//		printf("十二月\n");
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
//		printf("分数错误\n");
//		return 0;
//	}
//	switch (n)
//	{
//	case 10:
//	case 9:
//		printf("优秀\n");
//		break;
//	case 8:
//		printf("良\n");
//		break;
//	case 7:
//		printf("及格\n");
//		break;
//	case 6 :
//	case 5:
//	case 4:
//	case 3:
//	case 2:
//	case 1:
//	case 0:
//		printf("不及格\n");
//		break;
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	double weight, height, bmi;
//	printf("请输入身高（m），体重（kg):");
//	scanf("%lf %lf", &height, &weight);
//	bmi = weight / (height*height);
//	if (bmi < 18.5)
//		printf("偏瘦,BMI指数为%lf\n", bmi);
//	else if (bmi <= 24.9)
//		printf("正常,BMI指数为%lf\n", bmi);
//	else if (bmi <= 27.9)
//		printf("超重,BMI指数为%lf\n", bmi);
//	else
//		printf("肥胖,BMI指数为%lf\n", bmi);
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
//	printf("请输入n的值");
//	scanf("%d", &n);
//	sum = (1 + n)*n / 2;
//	printf("%d", sum);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int i = 1, sum = 0, n;
//	printf("请输入n的值：");
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
//	printf("请输入10个整数:");
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
//	printf("正数的个数为%d,平均值为:%.2f\n", k, ave);
//}


//#include<stdio.h>
//#define M 3
//#define N 4
//void main()
//{
//	int i, j, sum, a[M][N];
//	float b[M];
//	printf("请输入%d*%d的矩阵:", M, N);
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
//	printf("各行平均值依次为;\n");
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

#include<stdio.h>
int main()
{
	int n;
	int i = 1;
	double sum = 0;
	scanf("%d", &n);
	do
	{
		sum += 1.0 / i;
		i++;
	} while (i <= n);
	printf("%f", sum);
	return 0;
}