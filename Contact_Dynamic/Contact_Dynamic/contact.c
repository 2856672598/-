#include"contact.h"
#include<stdlib.h>
void Contact_Init(Contact* ps)
{
	ps->data= malloc(INCREASE * sizeof(PeoInfo));
	if (ps->data == NULL)
		return;
	ps->capacity = INCREASE;
	ps->size = 0;
}
//�������
int Check(Contact* ps)
{
	if (ps->size == ps->capacity)
	{
		PeoInfo* ptr = realloc(ps->data,(ps->size+ INCREASE) * sizeof(PeoInfo));
		if (ptr != NULL)
		{
			ps->data = ptr;
			ps->capacity += INCREASE;
			printf("���ݳɹ�\n");
			return 1;
		}
		else
		{
			printf("����ʧ��\n");
			return 0;
		}
	}
	return 1;
}
void Contact_Add(Contact* ps)
{
	int tmp = 0;
	tmp = Check(ps);
	if (tmp)
	{
		printf("����������>");
		scanf("%s", ps->data[ps->size].name);
		printf("�������Ա�>");
		scanf("%s", ps->data[ps->size].sex);
		printf("������绰>");
		scanf("%s", ps->data[ps->size].tetl);
		printf("�������ַ>");
		scanf("%s", ps->data[ps->size].addr);
		printf("����������>");
		scanf("%d", &(ps->data[ps->size].age));
		ps->size++;
		printf("��ӳɹ�\n");
	}
	else
		printf("���ʧ��\n");
}

void Contact_Show(Contact* ps)
{
	int i = 0;
	printf("%s\t %2s\t %15s\t %20s\t %5s\n", "����", "�Ա�", "�绰", "��ַ", "����");
	for (i = 0; i < ps->size; i++)
	{
		printf("%4s\t % 2s\t % 15s\t % 20s\t % 5d\t\n", ps->data[i].name,
			ps->data[i].sex,
			ps->data[i].tetl,
			ps->data[i].addr,
			ps->data[i].age);
	}
}
int Search(const char* x, Contact *ps)
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (strcmp(x, ps->data[i].name) == 0)
		{
			return i;
		}
	}
	return -1;
}
void Contact_Search(Contact* ps)
{
	char input[MAX_NAME];
	printf("������Ҫ���ҵ�����>");
	scanf("%s", input);
	int len = Search(input, ps);
	if (len != -1)
	{
		printf("%s\t %2s\t %15s\t %20s\t %5s\n", "����", "�Ա�", "�绰", "��ַ", "����");
		printf("%4s\t % 2s\t % 15s\t % 20s\t % 5d\t\n", ps->data[len].name,
			ps->data[len].sex,
			ps->data[len].tetl,
			ps->data[len].addr,
			ps->data[len].age);
	}
	else
		printf("����ϵ�˲�����>\n");
}
void Del(int x, Contact* ps)
{
	int i = 0;
	for (i = x; i < ps->size - 1; i++)
	{
		ps->data[i] = ps->data[i + 1];
	}
	ps->size--;
	printf("ɾ���ɹ�\n");
}
void Contact_Del(Contact* ps)
{
	char input[MAX_NAME];
	printf("������Ҫɾ������Ա����>");
	scanf("%s", input);
	int len = Search(input, ps);
	if (len != -1)
	{
		Del(len, ps);
	}
	else
		printf("����ϵ�˲�����\n");
}
void Contact_Modify(Contact* ps)
{
	char input[MAX_NAME];
	printf("��������Ҫ�޸ĵ�����>");
	scanf("%s", input);
	int len = Search(input, ps);
	if (len != -1)
	{
		printf("�������޸ĺ������>");
		scanf("%s", ps->data[len].name);
		printf("�������޸ĺ��Ա�>");
		scanf("%s", ps->data[len].sex);
		printf("�������޸ĺ�绰>");
		scanf("%s", ps->data[len].tetl);
		printf("�������޸ĺ��ַ>");
		scanf("%s", ps->data[len].addr);
		printf("�������޸ĺ�����>");
		scanf("%d", &(ps->data[len].age));
		printf("�޸ĳɹ�\n");
	}
	else
		printf("��Ҫ�޸ĵ���Ա������\n");
}
//�ͷ�
void Release(Contact* ps)
{
	free(ps->data);
	ps->data = NULL;
}