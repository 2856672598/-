#include"Contact.h"
int Check(Contact* ps)
{
	if (ps->size == ps->capacity)
	{
		PeoInfo* tmp = realloc(ps->S, (ps->size + INCREASE) * sizeof(PeoInfo));
		if (tmp != NULL);
		{
			ps->S = tmp;
			ps->capacity += INCREASE;
			//printf("���ݳɹ�\n");
			return 1;
		}
		printf("%s\n", strerror(errno));
		return 0;
	}
	//����ֵΪ1 ��ʾ���ݳɹ���0Ϊʧ��
	return 1;
}
//��ȡ������ļ�
int ReadContact(Contact* ps)
{
	PeoInfo tmp = { 0 };
	FILE* pfRead = fopen("text.txt", "rb");
	if (pfRead == NULL)
	{
		printf("RaedContact:%s\n", strerror(errno));
		return 0;
	}
	while (fread(&tmp, sizeof(PeoInfo), 1, pfRead))
	{
		Check(ps);
		ps->S[ps->size] = tmp;
		ps->size++;
	}
	fclose(pfRead);
	pfRead = NULL;
	return 1;
}
void InitContact(Contact* ps)
{
	ps->S = malloc(INCREASE * sizeof(PeoInfo));
	if (ps->S == NULL)
	{
		printf("%s\n", strerror(errno));
		return;
	}
	ps->size = 0;
	ps->capacity = INCREASE;
	//��ȡ�ļ�
	ReadContact(ps);
	printf("��ʼ���ɹ�\n");
}
void ContactAdd(Contact* ps)
{
	int len = Check(ps);
	if (len == 1)
		printf("���ݳɹ�\n");
	else
		printf("����ʧ��\n");
	if (len)
	{
		printf("����������>");
		scanf("%s", ps->S[ps->size].name);
		printf("�������Ա�>");
		scanf("%s", ps->S[ps->size].sex);
		printf("������绰>");
		scanf("%s", ps->S[ps->size].tel);
		printf("�������ַ>");
		scanf("%s", ps->S[ps->size].addr);
		printf("����������>");
		scanf("%d", &(ps->S[ps->size].age));
		ps->size++;
		printf("��ӳɹ�:%d\n",ps->size);
	}
}
void ContactShow(Contact* ps)
{
	int i = 0;
	printf("%s\t %2s\t %5s\t %15s\t %20s\n", "����",  "����", "�Ա�", "�绰", "��ַ");
	for (i = 0; i < ps->size; i++)
	{
		printf("%s\t % 2d\t % 5s\t % 15s\t % 20s\t\n", ps->S[i].name,
			ps->S[i].age,
			ps->S[i].sex,
			ps->S[i].tel,
			ps->S[i].addr
		);
	}
}
//����ͨѶ¼������
void ContactSave(Contact* ps)
{
	FILE* pf = fopen("text.txt", "wb");
	if (pf == NULL)
	{
		printf("%s", strerror(errno));
		return;
	}
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		fwrite(&(ps->S[i]), sizeof(PeoInfo), 1, pf);
	}
	printf("����ɹ�\n");
}

int Search(Contact* ps, char* name)
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (0 == strcmp(name, ps->S[i].name))
			return i;
	}
	return -1;//δ�ҵ�
}
//����
void ContactSearch(Contact* ps)
{
	char name[MAX_NAME];
	printf("������Ҫ���ҵ�����>");
	scanf("%s", &name);
	int len = Search(ps, name);
	if (len != -1)
	{
		printf("%s\t %2s\t %5s\t %15s\t %20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		printf("%s\t % 2d\t % 5s\t % 15s\t % 20s\t\n", ps->S[len].name,
			ps->S[len].age,
			ps->S[len].sex,
			ps->S[len].tel,
			ps->S[len].addr
		);
	}
	else
		printf("δ�ҵ�����ϵ��\n");
}

//ɾ��
void  ContactDel(Contact* ps)
{
	char name[MAX_NAME];
	printf("������Ҫɾ������Ա����>");
	scanf("%s", name);

	int  len = Search(ps, name);
	if (len != -1)
	{
		int i = len;
		for (i = len; i < ps->size - 1; i++)
		{
			ps->S[i] = ps->S[i + 1];
		}
		printf("ɾ���ɹ�\n");
		ps->size--;
	}
	else
		printf("Ҫɾ������Ա������\n");
}
//�޸�
void ContactModify(Contact* ps)
{
	char name[MAX_NAME];
	printf("������Ҫ�޸ĵ�����>");
	scanf("%s", name);
	int len = Search(ps, name);
	if (len != -1)
	{
		printf("�������޸ĺ������>");
		scanf("%s", ps->S[len].name);
		printf("�������޸ĺ��Ա�>");
		scanf("%s", ps->S[len].sex);
		printf("�������޸ĺ�绰>");
		scanf("%s", ps->S[len].tel);
		printf("�������޸ĺ��ַ>");
		scanf("%s", ps->S[len].addr);
		printf("�������޸ĺ�����>");
		scanf("%d", &(ps->S[len].age));
		printf("�޸ĳɹ�\n");
	}
	else
		printf("��Ա������\n");
}
//�ڴ��ͷ�
void Release(Contact* ps)
{
	free(ps->S);
	ps->S = NULL;
}