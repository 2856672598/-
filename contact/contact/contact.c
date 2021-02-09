#include "contact.h"
//��ʼ��ͨѶ¼
void InitContact(struct Contact* ps)
{
	memset(ps->data, 0, sizeof(ps->data));
	ps->size = 0;
}
//���
void Contact_Add(struct Contact* ps)
{
	if (ps->size == MAX)
		printf("�ռ䲻��\n");
	else
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
		scanf("%s", &(ps->data[ps->size].age));
	}
	ps->size++;
	printf("��ӳɹ�\n");
}
//��ӡ
void Contact_Show(const struct Contact* ps)
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
//����
int Find(const struct Contact* ps, char* name)
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (0 == strcmp(name, ps->data[i].name))
			return i;
	}
	return -1;
}

//ɾ��ָ��
void Contact_Del(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("������Ҫɾ��������>");
	scanf("%s", &name);
	int ret = Find(ps, name);
	//int i = 0;
	//for (i = 0; i < ps->size; i++)
	//{
	//	if (0 == strcmp(name, ps->data[i].name))
	//		break;
	//}
	if (ret == -1)
	{
		printf("û�д���Ϣ\n");
	}
	else
	{
		int j = 0;
		for (j = ret; j < ps->size; j++)
		{
			ps->data[j] = ps->data[j+1];
		}
		printf("ɾ���ɹ�\n");
		ps->size--;
	}
}
//��ѯָ��
void Contact_Search(const struct Contact* ps)
{
	int i = 0;
	char name[MAX_NAME];
	printf("������Ҫ��ѯ������>");
	scanf("%s", &name);
	int len = Find(ps, name);
	//for (i = 0; i < ps->size; i++)
	//{
	//	if (0 == strcmp(name, ps->data[i].name))
	//		break;
	//}
	if (len == -1)
	{
		printf("û�д���Ϣ\n");
	}
	else
	{
		printf("%s\t %2s\t %15s\t %20s\t %5s\n", "����", "�Ա�", "�绰", "��ַ", "����");
		printf("%4s\t % 2s\t % 15s\t % 20s\t % 5d\t\n",
			ps->data[len].name,
			ps->data[len].sex,
			ps->data[len].tetl,
			ps->data[len].addr,
			ps->data[len].age);
	}
}

//�޸�
void Contarct_Modify(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("����Ҫ�޸ĵ�����>");
	scanf("%s", &name);
	int len = Find(ps, name);
	if (len == -1)
		printf("��Ҫ�޸ĵ���ϵ������\n");
	else
	{
		printf("����������>");
		scanf("%s", ps->data[len].name);
		printf("�������Ա�>");
		scanf("%s", ps->data[len].sex);
		printf("������绰>");
		scanf("%s", ps->data[len].tetl);
		printf("�������ַ>");
		scanf("%s", ps->data[len].addr);
		printf("����������>");
		scanf("%c", &(ps->data[len].age));
		printf("�޸����\n");
	}
}
