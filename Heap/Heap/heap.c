#include"heap.h"
void Swap(HPDataType* a, HPDataType* b)
{
	HPDataType tmp = *a;
	*a = *b;
	*b = tmp;
}

//С�����µ���
void AdjustDown(Heap* php, int root, int size)
{
	assert(php);
	int parent = root;
	int child = root * 2 + 1;//Ĭ��Ϊ����
	while (child < size)
	{
		if (size > child + 1 && php->a[child] > php->a[child + 1])
		{
			child++;
		}
		if (php->a[child] < php->a[parent])
		{
			Swap(&php->a[child], &php->a[parent]);
			parent = child;
			child = parent * 2 + 1;
		}
		else
			return;
	}
}

//С�ѵ����ϵ���
void AdjustUp(Heap* php, int root, int size)
{
	assert(php);
	assert(php->a);
	int parent = root;
	int child = root * 2 + 1;
	while (parent >= 0)
	{
		//��Ҫ�ж�ֻ��һ���ӽڵ�����
		if (child + 1 < php->size && php->a[child] > php->a[child + 1])
		{
			child++;
		}
		if (php->a[child] < php->a[parent])
		{
			//��Ҫ���е���
			Swap(&php->a[child], &php->a[parent]);
			child = parent;
			parent = (child - 1) / 2;
		}
		else
			return;
	}
}

void HeapInit(Heap* php, HPDataType* arr, int size)
{
	assert(php);
	HPDataType* a = malloc(sizeof(HPDataType)*size);
	if (a)
	{
		memcpy(a, arr, sizeof(HPDataType)*size);
		php->a = a;
		php->capacity = php->size = size;
	}
	//����
	for (int i = (size - 1 - 1) / 2; i >= 0; i--)
	{
		AdjustDown(php, i, size);
	}
}


void HeapDestory(Heap* php)
{
	assert(php);
	free(php->a);
	php->size = php->capacity = 0;
	php->a = NULL;
}

void HeadPush(Heap*php, HPDataType x)
{
	assert(php);
	assert(php->a);
	if (php->size >= php->capacity)
	{
		//��Ҫ����
		HPDataType* tmp = realloc(php->a, sizeof(HPDataType)*php->size * 2);
		if (tmp)
		{
			php->a = tmp;
			php->capacity *= 2;
		}
	}
	//��β�ϲ���
	php->a[php->size++] = x;
	AdjustUp(php, (php->size - 2) / 2, php->size);
}

void HeapPop(Heap* php)
{
	assert(php);
	//�ж��Ƿ�Ϊ��
	assert(php->size > 0);
	printf("%d ", php->a[0]);
	Swap(&php->a[0], &php->a[php->size - 1]);
	php->size--;
	AdjustDown(php, 0, php->size);
}


void HeapSort(Heap*php)
{
	assert(php);
	assert(php->a);

	//while (php->size)
	//{
	//	HeapPop(php);
	//}
	int tmp = php->size;
	while (tmp > 0)
	{
		Swap(&php->a[0], &php->a[tmp-1]);
		tmp--;
		AdjustDown(php, 0, tmp);
	}
}