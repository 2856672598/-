#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<errno.h>
//int main()
//{
//	//���ļ�
//	FILE* ps = fopen("text.txt", "w");
//	if (ps == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	fputc('h', ps);
//	fclose(ps);
//	ps = NULL;
//	return 0;
//}

////stdin   stdout  stderr Ĭ�ϴ򿪵�������
//int main()
//{
//	FILE* pf = fopen("text.txt", "w");
//	if (pf == NULL)
//	{
//		printf("���ļ�ʧ��\n");
//		return 0;
//	}
//	int ch = fgetc(stdin);
//	fputc(ch, pf);
//	//fputc(ch,stdout);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	int ch = fgetc(stdin);
//	fputc(ch, stdout);
//	return 0;
//}

//#include<stdio.h>
//#define M(x,y)  x-y
//void main()
//{
//	int a = 4, b = 3, c = 5;
//	printf("%d", a*M(b, c));
//	return 0;
//}

//   fgets   fputs

//int main()
//{
//	char arr[100];
//	FILE*pf = fopen("text.txt", "r");
//	if (pf == NULL)
//	{
//		printf("���ļ�ʧ��\n");
//		return 0;
//	}
//	//���ļ�
//	fgets(arr, 100, pf);
//	printf("%s", arr);
//
//	fgets(arr, 100, pf);
//	printf("%s", arr);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	char arr[1024];
//	int input;
//	scanf("%s", arr);
//	FILE* pf = fopen("text.txt", "w");
//	if (pf == NULL)
//		return 0;
//	input = fputs(arr, pf);
//	if (~input)
//		printf("д��ɹ�\n");
//	else
//		printf("д��ʧ��\n");
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main()
//{
//	char arr[1024];
//	//fgets(arr, 1024, stdin);
//	//fputs(arr, stdout);
//
//	gets(arr);
//	puts(arr);
//	return 0;
//}

//   fscanf fprintf

//struct S
//{
//	int n;
//	float a;
//	char arr[6];
//};
//int main()
//{
//	struct S s = { 1,3.14f,"hello" };
//	FILE* pf = fopen("text.txt", "w");
//	if (pf == NULL)
//	{
//		printf("���ļ�ʧ��\n");
//		return 0;
//	}
//	fprintf(pf, "%d %f %s", s.n, s.a, s.arr);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//struct S
//{
//	int n;
//	float a;
//	char arr[5];
//};
//int main()
//{
//	struct S s = { 0 };
//	FILE* pf = fopen("text.txt", "r");
//	fscanf(pf, "%d %f %s", &(s.n), &(s.a), &(s.arr));
//	printf("%d %f %s", s.n, s.a, s.arr);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//sscanf   sprintf
//struct S
//{
//	int n;
//	float b;
//	char arr[10];
//};
//int main()
//{
//	struct S s = { 1,3.14f,"hello" };
//	struct S tmp = { 0 };
//	char buf[1024];
//	//�Ѹ�ʽ������������ַ���
//	sprintf(buf, "%d %f %s", s.n, s.b, s.arr);
//	//���ַ�����ȡ��ʽ��������
//	sscanf(buf, "%d %f %s", &(tmp.n), &(tmp.b), &(tmp.arr));
//	printf("%d %f %s", tmp.n, tmp.b, tmp.arr);
//	return 0;
//}

//fread fwrite
//struct S
//{
//	char name[20];
//	int age;
//	double score;
//};
//int main()
//{
//	struct S s = { "����",20,84 };
//	//���ļ�
//	FILE* pf = fopen("text.txt", "wb");
//	if (pf == NULL)
//	{
//		printf("%s", strerror(errno));
//		return 0;
//	}
//	//�Զ����Ƶ���ʽд��
//	fwrite(&s, sizeof(struct S), 1, pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	struct S s = { 0 };
//	//���ļ�
//	FILE* pf = fopen("text.txt", "rb");
//	if (pf == NULL)
//	{
//		printf("%s", strerror(errno));
//		return 0;
//	}
//	//���ļ�
//	fread(&s, sizeof(struct S), 1, pf);
//	printf("%s %d %lf", s.name, s.age, s.score);
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//�����д  fseek     ftell�����ļ�ָ�������ʼλ�õ�ƫ����
// rewind ʹ�ļ�ָ���λ�ûص��ļ���ʼ��λ��

//int main()
//{
//	FILE* pf = fopen("text.txt", "r");
//	if (!pf)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	fseek(pf, 2, SEEK_SET);
//	int ch = fgetc(pf);
//	printf("%c", ch);
//	int pos = ftell(pf);
//	printf("%d ", pos);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("text.txt", "r");
//	if (!pf)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	int ch = fgetc(pf);
//	printf("%c\n", ch);//a
//	rewind(pf);//���ļ�ָ���λ�ûص��ļ�����ʼλ��
//	ch = fgetc(pf);
//	printf("%c\n", ch);//a
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//} 

//feof
//int main()
//{
//	FILE* pf = fopen("text.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	int ch = 0;
//	while (~(ch = fgetc(pf)))
//	{
//		putchar(ch);
//	}
//	if (ferror(pf))
//		printf("%s\n", strerror(errno));
//	else if (feof(pf))//�жϵ��ļ�����ʱ���Ƕ�ȡʧ�ܻ��������ļ���β ����
//		printf("End of file reached successfully\n");
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//perror
//int main()
//{
//	FILE*pf = fopen("text2.txt", "r");
//	if (pf == NULL)
//		perror("fopen text.txt");//��ӡ������Ϣ
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

int main()
{
	//���ļ�
	FILE* pfWrite = fopen("text.txt", "wb");
	if (pfWrite == NULL)
	{
		perror("fopenWrite");
		return 0;
	}
	int arr[5] = { 2,3,4,5,6 };
	int tmp = 0;
	//д���ļ�
	fwrite(arr, sizeof(int), 5, pfWrite);
	//�ر��ļ�
	fclose(pfWrite);
	//��
	FILE *pfRead = fopen("text.txt", "rb");
	if (pfRead == NULL)
	{
		perror("fopenReda");
		return 0;
	}
	//��ȡ�ļ�
	while (fread(&tmp, sizeof(int), 1, pfRead) >= 1)
	{
		printf("%d ", tmp);
	}
	//�ж��ļ�������ԭ��
	if (ferror(pfRead))//��������
		perror("Error reading test.bin");
	else if (feof(pfRead))//��ȡ����
		printf("��ȡ�ɹ�\n");
	fclose(pfRead);
	pfRead = NULL;
	return 0;
}