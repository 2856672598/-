#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void InsertSort(int* number, int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		int tmp = number[i + 1];
		int end = i;
		while (end >= 0)
		{
			if (number[end] > tmp)
			{
				number[end + 1] = number[end];
				end--;
			}
			else
				break;
		}
		number[end + 1] = tmp;
	}
}

void Print(int*nums, int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d ", nums[i]);
	}
}

void ShellSort(int * nums, int size)
{
	int gap = size;
	//��gapΪ1ʱ��Ϊ��������
	while (gap > 1)
	{
		gap /= 2;
		for (int i = 0; i < size - gap; i++)
		{
			int end = i;
			int tmp = nums[end + gap];
			while (end >= 0)
			{
				if (nums[end] > tmp)
				{
					nums[end + gap] = nums[end];
				}
				else
					break;
				end -= gap;
			}
			nums[end + gap] = tmp;
		}
	}
}

void swap(int* a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

//void SelectSort(int * number, int size)
//{
//	for (int i = 0; i < size - 1; i++)
//	{
//		int maxi = 0;
//		for (int j = 0; j < size - i; j++)
//		{
//			if (number[j] > number[maxi])
//			{
//				maxi = j;
//			}
//		}
//		swap(&number[size - i - 1], &number[maxi]);
//	}
//}


//ѡ�������Ż�
void SelectSort(int * number, int size)
{
	int left = 0, right = size - 1;
	while (left < right)
	{
		int maxi = left, mini = left;
		for (int i = left; i <= right; i++)
		{
			if (number[i] > number[maxi])
				maxi = i;
			if (number[i] < number[mini])
				mini = i;
		}
		swap(&number[left], &number[mini]);
		if (maxi == left)
		{
			maxi = mini;
		}
		swap(&number[right], &number[maxi]);
		left++;
		right--;

	}
}

void AdjustDown(int* nums, int pos, int size)
{
	int parent = pos;
	int child = pos * 2 + 1;//Ĭ��Ϊ������
	while (child <= size)
	{
		//�ж��������Ƿ����������
		if (child + 1 <= size&&nums[child] < nums[child + 1])
			child++;
		//��parent���Ƚ�
		if (nums[child] > nums[parent])
		{
			swap(&nums[child], &nums[parent]);
		}
		else
			break;
		parent = child;
		child = parent * 2 + 1;
	}
}

void AdjustUp(int* nums, int pos)
{
	int child = pos;
	int parent = (child - 1) / 2;
	while (parent >= 0)
	{
		if (nums[parent] < nums[child])
		{
			swap(&nums[parent], &nums[child]);
		}
		else
			break;
		child = parent;
		parent = (child - 1) / 2;
	}
}

void HeapSort(int* nums, int size)
{
	//��� -->����
	//����
	for (int i = (size - 2) / 2; i >= 0; i--)
	{
		AdjustDown(nums, i, size-1);
	}

	int end = size - 1;
	while (end > 0)
	{
		swap(&nums[end], &nums[0]);
		end--;
		AdjustDown(nums, 0, end);
	}
}

void BubbleSort(int* nums, int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		int flag = 0;
		for (int j = 0; j < size - 1 - i; j++)
		{
			if (nums[j] > nums[j + 1])
			{
				flag = 1;
				swap(&nums[j], &nums[j + 1]);
			}
		}
		if (flag == 0)
			break;
	}
}

//����ȡ��
int getMid(int* nums, int left, int right)
{
	int mid = left + (right - left) / 2;
	if (nums[left] < nums[mid])
	{
		if (nums[mid] < nums[right])
			return mid;
		else if (nums[left] > nums[right])
			return left;
		else
			return right;
	}
	else
	{
		if (nums[mid] > nums[right])
			return mid;
		else if (nums[left] < nums[right])
			return left;
		else
			return right;
	}
}

int PartSort1(int * nums, int left, int right)
{
	int keyi = left;
	int end = right;
	int key = nums[left];
	while (left < right)
	{
		//�������ߣ���������С��key��ֵ
		while (left < right)
		{
			if (nums[right] < key)
				break;
			right--;
		}

		//�����Ҵ���key��ֵ
		while (left < right)
		{
			if (nums[left] > key)
				break;
			left++;
		}

		//����left��right
		if (left < right)
		{
			swap(&nums[left], &nums[right]);
		}
	}
	swap(&nums[keyi], &nums[left]);
	return left;
}

int PartSort3(int* nums, int left, int right)
{
	int key = nums[left];
	int prev = left, cur = left + 1;
	while (cur <= right)
	{
		if (nums[cur] < key)
		{
			prev++;
			swap(&nums[cur], &nums[prev]);
		}
		cur++;
	}
	swap(&nums[prev], &nums[left]);
	return prev;
}

//�ڿӷ�
int PartSort2(int * nums, int left, int right)
{
	int hole = left;
	int key = nums[left];
	while (left < right)
	{
		//�������ұ�keyС��ֵ
		while (left < right&&nums[right] >= key)
		{
			right--;
		}
		//���ҵ���ֵ�ŵ�������
		nums[hole] = nums[right];
		//��left��λ�ñ���µĿ�
		hole = right;

		//������Ҵ���key ��ֵ���Ž�����
		while (left < right && nums[left] <= key)
		{
			left++;
		}
		nums[hole] = nums[left];
		hole = left;
	}
	//��key�Ž�����
	nums[hole] = key;
	return hole;
}

void QuickSort(int * nums, int left, int right)
{

	if (left >= right)
		return;
	//С�����Ż�
	if (right - left + 1 < 10)
	{
		InsertSort(nums + left, right - left + 1);
	}
	else
	{
		int mid = getMid(nums, left, right);
		swap(&nums[left], &nums[mid]);
		//int pos = partion2(nums, left, right);

		//int pos = PartSort1(nums, left, right);
		//int pos = PartSort3(nums, left, right);
		int pos = PartSort2(nums, left, right);

		QuickSort(nums, left, pos - 1);
		QuickSort(nums, pos + 1, right);
	}
}


void _mergeSort(int*nums, int* tmp, int left, int right)
{
	if (left >= right)
		return;
	int mid = left + (right - left) / 2;
	_mergeSort(nums, tmp, left, mid);
	_mergeSort(nums, tmp, mid + 1, right);

	//�����Ѿ�������й鲢
	int i = left;
	int begin1 = left, begin2 = mid + 1;
	while (begin1 <= mid && begin2 <= right)
	{
		if (nums[begin1] > nums[begin2])
			tmp[i++] = nums[begin2++];
		else
			tmp[i++] = nums[begin1++];
	}

	while (begin1 <= mid)
	{
		tmp[i++] = nums[begin1++];
	}

	while (begin2 <= right)
		tmp[i++] = nums[begin2++];

	//���鲢�õ����ݿ�����ԭ������
	for (i = left; i <= right; i++)
	{
		nums[i] = tmp[i];
	}
}

void mergeSort(int* nums, int size)
{
	int* tmp = (int*)malloc(sizeof(int)*size);
	_mergeSort(nums, tmp, 0, size - 1);
}

//�鲢����ǵݹ�
void nReMergeSort(int* nums, int size)
{
	int left = 0, right = size - 1;
	int* tmp = malloc(sizeof(int)*size);
	int gap = 1;
	while (gap < size)
	{
		for (int i = 0; i < size; i += 2 * gap)
		{
			int begin1 = i, end1 = i + gap - 1;
			int begin2 = i + gap, end2 = i + 2 * gap - 1;

			//���end1Խ���end2Խ��ֱ�����������ý��й鲢
			if (end1 >= size || begin2 >= size)
				break;
			//�ж��������Ƿ���Խ��
			if (end2 >= size)
			{
				//����end2��ֵ
				end2 = size - 1;
			}

			int indext = i;
			//��ʼ�鲢
			while (begin1 <= end1 && begin2 <= end2)
			{
				if (nums[begin1] < nums[begin2])
					tmp[indext++] = nums[begin1++];
				else
					tmp[indext++] = nums[begin2++];
			}

			while (begin1 <= end1)
			{
				tmp[indext++] = nums[begin1++];
			}

			while (begin2 <= end2)
			{
				tmp[indext++] = nums[begin2++];
			}

			//������ԭ����
			for (int j = i; j <= end2; j++)
			{
				nums[j] = tmp[j];
			}
		}
		gap *= 2;
	}
	free(tmp);
}

void text()
{
	srand((unsigned)time(NULL));
	int n = 10000;
	int* flag1 = malloc(sizeof(int)*n * 10);
	int* flag2 = malloc(sizeof(int)*n);
	int* flag3 = malloc(sizeof(int)*n);
	int* flag4 = malloc(sizeof(int)*n);

	for (int i = 0; i < n; i++)
	{
		flag1[i] = rand();
		flag2[i] = flag1[i];
		flag3[i] = flag1[i];
		flag4[i] = flag1[i];
	}

	int begin1 = clock();
	QuickSort(flag1, 0, n - 1);
	int end1 = clock();
	printf("��������:%d\n", end1 - begin1);

	//int begin2 = clock();
	//BubbleSort(flag2, n);
	//int end2 = clock();
	//printf("ð������%d\n", end2 - begin2);

	int begin3 = clock();
	ShellSort(flag3, n);
	int end3 = clock();
	printf("ϣ������:%d\n", end3 - begin3);

	int begin4 = clock();
	mergeSort(flag2, n);
	int end4 = clock();
	printf("�鲢����:%d\n", end4 - begin4);

	int begin5 = clock();
	HeapSort(flag4, n);
	int end5 = clock();
	printf("������:%d\n", end5 - begin5);
	Print(flag1, n);
}



int main()
{
	int nums[] = { 10,6,3,9,1,3,7,2,5 };
	//int nums[] = { 10,10,10,10 };
	int size = sizeof(nums) / sizeof(nums[0]);
	//InsertSort(nums, size);

	//ShellSort(nums, size);

	//SelectSort(nums, size);

	//HeapSort(nums, size);
	//BubbleSort(nums, size);

	//QuickSort(nums, 0, size - 1);
	//Print(nums, size);

	//text();
	nReMergeSort(nums, size);
	Print(nums, size);
	return 0;
}
