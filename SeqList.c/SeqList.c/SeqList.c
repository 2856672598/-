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
void SLPrint(SL*ps)
{
	for (int i = 0; i < ps->sz; i++)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}
void SLPushBack(SL* ps, SLDataType x)
{
	assert(ps);
	//�������
	if (ps->sz >= ps->capacity)
	{
		//����
		SLAddCapacity(ps);
	}
	ps->a[ps->sz] = x;
	ps->sz++;
}

void SLPopBack(SL* ps, int x)
{
	assert(ps);
	for (int i = 0; i < x; i++)
	{
		ps->a[ps->sz  - i] = 0;
	}
	ps->sz -= x;
}

void SLPushFront(SL* ps, SLDataType x)
{
	assert(ps);
	if (ps->sz == ps->capacity)
		SLAddCapacity(ps);
	memmove(ps->a + 1, ps->a, sizeof(SLDataType)*(ps->sz));
	ps->a[0] = x;
	ps->sz++;
}

void SLPopFront(SL* ps, int x)
{
	assert(ps);
	memmove(ps->a, ps->a + x, ((ps->sz) - x) * sizeof(SLDataType));
	ps->sz -= x;
}
//����
int SLFind(SL* ps, SLDataType x)
{
	assert(ps);
	//����ֵΪ-1��ʾΪ�ҵ�
	int left = 0;
	int right = ps->sz - 1;
	while (left <= right)
	{
		int mid = (right-left) / 2 + left;
		if (x == ps->a[mid])
			return mid + 1;
		else if (x < ps->a[mid])
		{
			right = mid - 1;
		}
		else
			left = mid + 1;
	}
	return -1;
}
//�������
void SLInsert(SL* ps, int pos, SLDataType x)
{
	assert(ps);
	if (ps->sz >= pos)
	{
		if (ps->sz == ps->capacity)
		{
			SLAddCapacity(ps);
		}
		memmove(ps->a + pos+1, ps->a + pos, sizeof(SLDataType)*(ps->sz - pos ));
		ps->a[pos-1] = x;
		ps->sz++;
	}
	else
		printf("�������\n");
}

//ָ��ɾ��
void SLErase(SL* ps, int pos)
{
	assert(ps);
	if (pos <= ps->sz&&pos > 0)
	{
		memmove(ps->a + pos-1, ps->a + pos, sizeof(SLDataType)*(ps->sz - pos));
		ps->sz--;
	}
}