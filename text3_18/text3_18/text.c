//#include<stdio.h>
//int main()
//{
//	//int a, b, c, d;
//	//a = 10;
//	//b = 10;
//	//c = a++;
//	//d = --b;
//	//printf("%d %d %d %d", a, b, c, d);
//
//	int a = 1;
//	a *= a -= 5;
//	printf("%d", a);
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	char a;
//	printf("��Сдת��\n");
//	scanf("%c", &a);
//	if (a >= 'a'&&a <= 'z')
//	{
//		a -= 32;
//		printf("%c", a);
//	}
//	else if (a >= 'A'&&a <= 'Z')
//	{
//		a += 32;
//		printf("%c", a);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char ch;
//	while (ch = getchar())
//	{
//		if (ch <= 'z'&&ch >= 'a')
//		{
//			ch -= 32;
//		}
//		else if (ch <= 'Z'&&ch >= 'A')
//		{
//			ch += 32;
//		}
//		printf("%c", ch);
//	}
//	return 0;
//}

//#include<stdio.h>
//int  main()
//{
//
//	//int a = 1234;
//	//int c = a / 100 % 10;
//	//printf("%d", c);
//	//char a = 97, b;
//	//b = a + '8' - '3';
//	//printf("%c", b);
//	//double a = 123.45676789;
//	//printf("%f", a);
//	int a = 65, b = 97;
//	double m = 3.14159;
//	printf("%c-%d\n%c-%d\n",a,a,b,b);//A 65 a 97
//	printf("a=%06d,b=%-6d\n", a, b);//000065   97
//	printf("a=%d,a=%o,a=%x\n", a, a, a);//65 �˽���  ʮ������
//	printf("m=%lf\n", m);//3.141590
//	printf("m=%4.3lf\n", m);//3.142
//	printf("m=%06.3lf\n", m);//3.142
//	return 0;
//}

////���������ڴ��еĴ洢
//#include<stdio.h>
//#include<float.h>
//int main()
//{
//	float a;
//	//a = 340282346638528859811704183484516925440.000000;
//	//a = 34028234663852885.000000;
//	a = 12345678.4353;
//	//101.1
//	//(-1)^0  1.011  2^2
//	//s=0
//	//m=0.11
//	//e=2
//	//0100 0000 1011 0000 0000 0000 0000 0000
//	//40 b0 00 00
//
//	//0 11111110 11111111111111111111111
//	//1.9999998807907104   128
//	//6e6 eeee
//
//	//0.199 9999 88079 07104*2^127
//	//3.4028234663853037e+37
//	printf("%f", a);
//	printf("%f", FLT_MAX);
//	return 0;
//}

//#include<stdio.h>
//#include<float.h>
//int main()
//{
//	float a = 1234567837483832472829374382992842.123;
//	111010110111100110100010101.0001111101111100111011011
//
//	1.11010110111100110100010 1010001111101111100111011011*2^26
//
//	printf("%f\n", a);
//	float b = 340282346638528859811704183484516925440.000000;
//	float d = 15432098.00;
//	printf("%f", d);
//	printf("%f\n", FLT_MAX);
//	return 0;
//}

//#include<stdio.h>
//#include<float.h>
//#include<limits.h>
//int main()
//{
//	//float a = 3402823466385288598117041834904516925440.000000;
//	float b;
//	b = 16777215.00f;
//	//float d = 16777217.00;
//	float c = 340282359938528859811704183184519999999.000000;
//	float e = 340282346638528859811704183484516925440.000000f;
//	float f = 340282346638528859811704183484516815555.000000f;
//	printf("%f\n",c);
//	printf("%f\n", e);
//	printf("%f\n", f);
//	return 0;
//}

////��������һ�ĸ���
//#include<stdio.h>
//int count_one_bit(unsigned int x)
//{
//	int count = 0;
//	while (x)
//	{
//		if (x % 2 == 1)
//			count++;
//		x /= 2;
//	}
//	return count;
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int ret = count_one_bit(num);
//	printf("%d", ret);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int num = -1;
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((num >> i) & 1) == 1)
//			count++;
//	}
//	printf("%d", count);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int num = 8, count = 0;
//	scanf("%d", &num);
//	if (num >= 0)
//	{
//		while (num)
//		{
//			num = num & (num - 1);
//			count++;
//		}
//	}
//	else
//	{
//		//-2
//		//1000 0000 0000 0000 0000 0000 0000 0010
//		//1111 1111 1111 1111 1111 1111 1111 1101
//		//1111 1111 1111 1111 1111 1111 1111 1110
//
//		//-4
//		//1000 0000 0000 0000 0000 0000 0000 0100
//		//1111 1111 1111 1111 1111 1111 1111 1011
//		//1111 1111 1111 1111 1111 1111 1111 1100
//
//		//-8
//		//1000 0000 0000 0000 0000 0000 0000 1000
//		//1111 1111 1111 1111 1111 1111 1111 0111
//		//1111 1111 1111 1111 1111 1111 1111 1000
//		int tmp = num;
//		while (tmp)
//		{
//			if (tmp % 2 == 0)
//				count++;
//			else
//				break;
//			tmp /= 2;
//		}
//	}
//	if (count == 1 && num >= 0)
//		printf("%d��2��n�η���\n", num);
//	else if (count >= 1 && num <= 0)
//		printf("%d��2��n�η���\n", num);
//	else
//		printf("NO\n");
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	char ch = 0;
//	scanf("%c", &ch);
//	if (ch >= 'a'&&ch <= 'z')
//		ch -= 32;
//	else if (ch >= 'A'&&ch <= 'Z')
//		ch += 32;
//	printf("%c", ch);
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//int countDigitOne(int n)
//{
//	if (n <= 0)
//		return 0;
//	int tmp = n;
//	int num = 0;
//	int count = 0;
//	while (tmp)
//	{
//		tmp /= 10;
//		num++;
//	}
//	int i = 0;
//	while (num)
//	{
//		int base = (int)pow(10, i);
//		int cur = (n / base) % 10;
//		int next = n / (int)pow(10, i + 1);
//		int till = n % base;
//		if (cur == 1)
//		{
//			count += next * base + till + 1;
//		}
//		else if (cur > 1)
//		{
//			count += (next + 1) * base;
//		}
//		else
//		{
//			count += next * base;
//		}
//		i++;
//		num--;
//	}
//	return count;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int len = countDigitOne(n);
//	printf("%d", len);
//	return 0;
//}



#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int sum = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		sum += i;
//	}
//	printf("%d", sum);
//	return 0;
//}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int sum = (1 + n)*n / 2;
	printf("%d", sum);
	return 0;
}