//#include<stdio.h>
//int check_sys()
//{
//	//����ֵΪ1��ΪС�ˣ�
//	//����ֵΪ0����ˣ�
//	int i = 1;
//	char*p = (char*)&i;
//	return *p;
//}
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//		printf("С��\n");
//	else
//		printf("���\n");
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char a = -1;
//	unsigned char b = -1;
//	signed char c = -1;
//	//��Ϊ��ӡΪ%d������char��Ҫ������������
//	printf("%d %d %d", a, b, c);//  -1   255   -1
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char a = -128;
//	char b = 128;
//	printf("%u ", a);//4294967168
//	printf("%u ", b);
//	/*printf("%d", sizeof(long ));*/
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	//�˴�Ϊ��ѭ��
//	unsigned int i = 1;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u ", i);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char arr[1000];
//	int i = 0;
//	for (i = 0; i < 1000; i++)
//	{
//		arr[i] = -1 - i;
//	}
//	printf("%d", strlen(arr));//255     srtlen���� \0ֹͣ��
//	return 0;
//}

#include<stdio.h>
int main()
{
	unsigned int i = 0;
	for (i = 0; i <= 255; i++)
	{
		printf("helloword\n");
	}
	return 0;
}