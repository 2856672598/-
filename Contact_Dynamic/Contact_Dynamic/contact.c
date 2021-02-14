#include"contact.h"
#include<stdlib.h>
void Contact_Init(Contact* ps)
{
	ps->data= malloc(SZ * sizeof(PeoInfo));
	if (ps->data == NULL)
		return;
	ps->capacity = SZ;
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