#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int a = -1;
//	int b = 0;
//	b = a >> 1;
//	//ԭ�룺10000000000000000000000000000001
//	//���룺11111111111111111111111111111110
//	//���룺11111111111111111111111111111111
//	printf("%d", b);
//}

//#include<stdio.h>
//int main()
//{
//	int num = 10;
//	int b = 0;
//	b = num >> -2;//�����Ǵ���ģ������ƶ�����λ
//	printf("%d", b);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 5;
//	int b = 3;
//	//&��λ��    ͬʱΪ1��Ϊ1
//	//00000000000000000000000000000101
//	//00000000000000000000000000000011
//	//00000000000000000000000000000001
//	//int c = a & b;
//	//printf("%d", c);
//	//|��λ��   ͬʱΪ0��Ϊ0������Ϊ1��
//	//00000000000000000000000000000101
//	//00000000000000000000000000000011
//	//00000000000000000000000000000111
//	//int c = a | b;
//	//printf("%d", c);
//	
//	//^��λ���    ��ͬΪ0������Ϊ1��
//	//00000000000000000000000000000101
//	//00000000000000000000000000000011
//	//00000000000000000000000000000110
//	int c = a ^ b;
//	printf("%d", c);
//	return 0;
//}

//�ڲ�ʹ�õ���������������½���������
//#include<stdio.h>
//int main()
//{
//	//�Ӽ��������Ծ��ǿ��ܻ����
//	int a = 3;
//	int b = 5;
//	printf("����ǰa= %d b= %d\n", a, b);
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("������a= %d b= %d\n", a, b);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	//��򷽷����������Ծ��Ǵ���ɶ��ԲЧ�ʱȽϵ�
//	int a = 3; 
//	int b = 5;
//	printf("����ǰa= %d b= %d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("������a= %d b= %d\n", a, b);
//	return 0;
//}

//����һ����ͳ�����ڼ�����洢���м���1
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	//�����ڼ�����д洢���ǲ���
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((a >> i) & 1))
//			count++;
//	}
//	printf("%d",count);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 10;
	//sizeof���ǲ���������ģ�
	//printf("%d\n", sizeof(a = b + 5));//4
	//printf("%d\n", a);//0
	//printf("%d\n", ++a);//1  ǰ��++����++��ʹ��
	//printf("%d", a++);//0    ����++����ʹ�ú�++��
	//return 0;
//}

//#include<stdio.h>
//void text1(int arr[])
//{
//	printf("%d\n", sizeof(arr));
//}
//void text2(char ch[])
//{
//	printf("%d\n", sizeof(ch));
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10];
//	printf("%d\n", sizeof(arr));//40
//	printf("%d\n", sizeof(ch));//10
//	//�ڴ��εĹ����д���ȥ���� ��Ԫ�صĵ�ַ   ----->ָ��  ָ���СΪ4����8
//	text1(arr);//4/8
//	text2(ch);//4/8
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i = 0, a = 0, b = 1, c = 1;
//	//i = a++  && ++b && c++;
//	//��&&�� ���һ��Ϊ�٣����潫���ٽ�������
//	//printf("%d %d %d", a, b, c);//1   1  1
//	i = a++ || ++b || c++;
//	printf("%d %d %d", a, b, c);//
//	return 0;
//}

//��Ŀ������
//#include<stdio.h>
//int main()
//{
//	int max;
//	int a = 10;
//	int b = 20;
//	/*if (a > b)
//		max = a;
//	else
//		max = b;*/
//	max = (a > b ? a : b);
//	printf("%d", max);
//	return 0;
//}

#include<stdio.h>
int get_max(int x, int y)
{
	return x > y ? x : y;
}
int main()
{
	int a = 20;
	int b = 10;
	int max = get_max(a, b);
	printf("%d", max);
	return 0;
}