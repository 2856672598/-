#include"SeqList.h"
void SLInit(SL*ps)
{
	assert(ps);
	ps->sz = 0;
	ps->capacity = 2;//Ĭ�ϳ�ʼ��������
	ps->a = malloc(sizeof(SLDataType)*ps->capacity);
	if (ps->a == NULL)
	{
		printf("��ʼ��ʧ��\n");
		exit(-1);
	}
}
void SLAddCapacity(SL* ps)
{
	assert(ps);
	if (ps->capacity == ps->sz)
	{
		ps->capacity *= 2;
		SLDataType* tmp;
		tmp = realloc(ps->a, sizeof(SLDataType)*ps->capacity);
		if (tmp != NULL)
			ps->a = tmp;
		else
		{
			printf("����ʧ��\n");
			exit(-1);
		}
	}
}
void SLPrint(SL*ps)
{
	for (int i = 0; i < ps->sz; i++)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}
//ָ������
void SLInsert(SL* ps, int pos, SLDataType x)
{
	assert(ps);
	pos = pos - 1;
	assert(pos <= ps->sz&&pos >= 0);
	SLAddCapacity(ps);
	int i = 0;
	for (i = ps->sz-1; i > pos-1; i--)
	{
		ps->a[i + 1] = ps->a[i];
	}
	ps->a[pos] = x;
	ps->sz++;
}
//ָ��ɾ��
// pos���û��Ƕ�������1��ʼ
void SLErase(SL* ps, int pos)
{
	assert(ps);
	//pos = pos - 1;
	assert(pos <= ps->sz&&pos >= 0);
	int i = 0;
	for (i = pos - 1; i <= ps->sz - 1; i++)
	{
		ps->a[i] = ps->a[i + 1];
	}
	ps->sz--;
}
//β��
void SLPushBack(SL* ps, SLDataType x)
{
	SLInsert(ps, ps->sz + 1, x);
}
//βɾ
void SLPopBack(SL* ps)
{
	SLErase(ps, ps->sz);
}
//ͷ��
void SLPushFront(SL* ps, SLDataType x)
{
	SLInsert(ps, 1, x);
}

//ͷɾ
void SLPopFront(SL* ps)
{
	SLErase(ps, 1);
}
//����
//�ҵ��˷����±꣬û�ҵ�����-1��
int  SLFind(SL* ps, SLDataType x)
{
	assert(ps);
	for (int i = 0; i < ps->sz; i++)
	{
		if (ps->a[i] == x)
			return i;
	}
	return -1;
}
//�ͷſ��ٵĶ�̬�ڴ�
void SLDestory(SL* ps)
{
	free(ps->a);
	ps->a = NULL;
	ps->capacity = ps->sz = 0;
}