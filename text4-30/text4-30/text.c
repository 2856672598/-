#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int fun(int x, int i)
//{
//	int sum = 0;
//	while (i--)
//	{
//		sum = sum * 10 + x;
//	}
//	return sum;
//}
//int main()
//{
//	int a, n, i, s = 0;
//	printf("��������������a,n: ");
//	scanf("%d%d", &a, &n);
//	for (i = 1; i <= n; i++)
//		s = s + fun(a, i);
//	printf("���Ϊ: %d\n", s);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	char arr1[30];
//	char arr2[30];
//	gets(arr1);
//	printf("%s ", arr1);
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//typedef struct Node
//{
//	struct Node* LeftChild;
//	struct Node* RightChild;
//	int data;
//}Node;
//Node* CreateTree()
//{
//	Node* NewNode = malloc(sizeof(Node));
//	NewNode->LeftChild = NewNode->RightChild = NULL;
//	printf("�ڵ���Ϣ:");
//	int data;
//	scanf("%d", &data);
//	NewNode->data = data;
//	if (!data)
//		return NULL;
//	printf("%d��������", data);
//	NewNode->LeftChild = CreateTree();
//	printf("%d��������", data);
//	NewNode->RightChild = CreateTree();
//	return NewNode;
//}
//void Print(Node*node)
//{
//	if (!node)
//		return;
//	printf("%d ", node->data);
//	if (node->LeftChild)
//		Print(node->LeftChild);
//	if (node->RightChild)
//		Print(node->RightChild);
//}
//int main()
//{
//	Node* Tree = CreateTree();
//	Print(Tree);
//	return 0;
//}

////66. ��һ
////https://leetcode-cn.com/problems/plus-one/
//#include<stdio.h>
//#include<stdlib.h>
//int* plusOne(int* digits, int digitsSize, int* returnSize)
//{
//	int* arr = malloc(sizeof(int)*(digitsSize + 1);
//	int flag = 1;
//	while (digitsSize-- > 0)
//	{
//		arr[*returnSize] = digits[digitsSize] + flag;
//		if (arr[*returnSize] > 9)
//			arr[*returnSize] %= 10;
//		else
//			flag = 0;
//		(*returnSize)++;
//	}
//	if (flag == 1)
//	{
//		arr[*returnSize] = 1;
//		*(returnSize) += 1;
//	}
//	int left = 0;
//	int right = (*returnSize) - 1;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//	return arr;
//}
//int main()
//{
//	int arr[] = { 9,9 };
//	int size = 0;
//	int * arr1 = plusOne(arr, 2, &size);
//	for (int i = 0; i < size; i++)
//	{
//		printf("%d", arr1[i]);
//	}
//	return 0;
//}

////������ 17.04. ��ʧ������
////https://leetcode-cn.com/problems/missing-number-lcci/
//#include<stdio.h>
//int missingNumber(int* nums, int numsSize)
//{
//	int sum = 0;
//	for (int i = 0; i < numsSize; i++)
//	{
//		sum += nums[i];
//	}
//	int add = (numsSize * (numsSize + 1)) / 2;
//	return add - sum;
//}
//int main()
//{
//	int arr[] = { 0, 1 };
//	int flag = missingNumber(arr, 2);
//	printf("ȱʧ������Ϊ%d", flag);
//	return 0;
//}


#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#define MAX 10
typedef int DataType;
typedef struct SeqList
{
	DataType data[MAX];
	int size;
}SL;
enum menu
{
	EXIT,
	POP,
	PUSH,
	FIND,
	MODIFY,
	PRINT
};
void Init(SL* s)
{
	s->size = 0;
	memset(s->data, 0, sizeof(DataType)*MAX);
}
void menu()
{
	printf("*******************************\n");
	printf("***1.Pop             2. Push***\n");
	printf("***3.Find   0.exit  4.Modify***\n");
	printf("************5.Print************\n");
}
bool Full(SL* s)
{
	if (s->size >= MAX)
		return true;
	else
		return false;
}
void Push(SL*s, DataType data)
{
	if (!Full(s))
	{
		s->data[s->size] = data;
		s->size++;
	}
	else
		printf("�ռ�����\n");
}
bool Pop(SL*s, int x)
{
	/*ָ��ɾ��xΪ�±�*/
	if (x > s->size)
		return false;
	for (int i = x; i < s->size-1; i++)
	{
		s->data[i] = s->data[i + 1];
	}
	s->size--;
	return true;
}
bool Find(SL s,DataType data)
{
	/*�ҵ��˷����±� δ�ҵ�����-1*/
	int flag = 0;
	for (int i = 0; i < s.size; i++)
	{
		if (s.data[i] == data)
		{
			printf("�±�Ϊ%d ", i);
			flag++;
		}
	}
	printf("\n");
	if (!flag)
		return false;
	return true;
}
void Print(SL* s)
{
	for (int i = 0; i < s->size; i++)
	{
		printf("%d ", s->data[i]);
	}
	printf("\n");
}
void Modify(SL* s, int x, DataType data)
{
	/*xΪ�޸ĵ��±�*/
	if (s->size >= x)
	{
		s->data[x] = data;
	}
	else
		printf("�޸�ʧ���±겻�Ϸ�\n");
}
void text1()
{
	SL s;
	Init(&s);
	for (int i = 0; i < 5; i++)
	{
		Push(&s, i);
	}
	Print(&s);
	printf("����Ҫ�޸����ݵ��±�");
	int x, data;
	scanf("%d", &x);
	printf("�����޸ĺ������:");
	scanf("%d", &data);
	Modify(&s, x, data);

	Print(&s);
	printf("����Ҫɾ��������:");
	int pop;
	scanf("%d", &pop);
	Pop(&s, pop);
	Print(&s);
}
void text2()
{
	int input;
	SL s;
	Init(&s);
	do
	{
		menu();
		printf("��ѡ��:");
		scanf("%d", &input);
		switch (input)
		{
		case EXIT:
			printf("�˳�\n");
			break;
		case POP:
			printf("����Ҫɾ���������±�:");
			int pop;
			scanf("%d", &pop);
			if (Pop(&s, pop))
				printf("ɾ���ɹ�\n");
			else
				printf("ɾ��ʧ�ܣ��±겻�Ϸ�\n");
			break;
		case PUSH:
			for (int i = 0; i < 5; i++)
			{
				Push(&s, i);
			}
			printf("\n��ӳɹ�ʣ��%d���ռ�\n", MAX - s.size);
			break;
		case FIND:
			printf("������Ҫѯ������:");
			int find = 0;
			scanf("%d", &find);
			Find(s, find);
			break;
		case MODIFY:
			printf("����Ҫ�޸ĵ������±���޸ĺ������:");
			int modify, data;
			scanf("%d %d", &modify, &data);
			Modify(&s, modify, data);
			break;
		case PRINT:
			Print(&s);
			break;
		default:
			printf("��������������:");
			break;
		}
	} while (input);
}
int main()
{
	text2();
	return 0;
}