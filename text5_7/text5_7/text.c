#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdbool.h>
//#include<stdlib.h>
//#define MAX 10
//typedef int DataType;
//
//typedef struct Stack
//{
//	DataType arr[MAX];
//	int top;
//}Stack;
//enum 
//{
//	EXIT,
//	PUSH,
//	POP,
//	PRINT,
//	LENGTH
//};
//void menu()
//{
//	printf("###################################################\n");
//	printf("#######0.EXIT                         1.PUSH#######\n");
//	printf("#######2.POP                         3.PRINT#######\n");
//	printf("#################  4.LENGTH  ######################\n");
//}
//Stack* InitStack()
//{
//	Stack* list = malloc(sizeof(Stack));
//	if (list != NULL)
//		list->top = 0;
//	return list;
//}
//bool Full(Stack* list)
//{
//	if (list->top > MAX-1)
//		return true;//����
//	else
//		return false;
//}
//void Push(Stack* list, DataType data)
//{
//	if (!Full(list))
//	{
//		list->arr[list->top] = data;
//		list->top++;
//		printf("��ջ�ɹ�\n");
//		return;
//	}
//	printf("�ռ����������ʧ��\n");
//}
//void Pop(Stack* list)
//{
//	if (list->top > 0)
//	{
//		printf("%d��ջ�ɹ�\n", list->arr[list->top - 1]);
//		list->top--;
//	}
//	else
//		printf("ջΪ��\n");
//}
//void Print(Stack* list)
//{
//	int i = 0;
//	if (list->top == 0)
//	{
//		printf("ջΪ��\n");
//		return;
//	}
//	while (i < list->top)
//	{
//		printf("%d ", list->arr[i]);
//		i++;
//	}
//	printf("\n");
//}
//void text()
//{
//	Stack* list = InitStack();
//	int data, input;
//	do
//	{
//		menu();
//		printf("��ѡ��:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case EXIT:
//			printf("�˳�");
//			return;
//			break;
//		case PUSH:
//			printf("��������ջ������;");
//			scanf("%d", &data);
//			Push(list, data);
//			break;
//		case POP:
//			Pop(list);
//			break;
//		case PRINT:
//			Print(list);
//			break;
//		case LENGTH:
//			printf("ջ����%d������,ʣ��%d���ռ�\n", list->top, MAX - (list->top));
//			break;
//		default:
//			printf("�������\n");
//			break;
//		}
//	} while(input);
//}
//int main()
//{
//	text();
//	return 0;
//}

////��ʽջ
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<assert.h>
//#include<stdbool.h>
//typedef int DataType;
//typedef struct Node
//{
//	DataType data;
//	struct Node* next;
//}Node;
//enum
//{
//	EXIT,
//	PUSH,
//	POP,
//	PRINT,
//	LENGTH
//};
//void menu()
//{
//	printf("##################################\n");
//	printf("####1.PUSH              2.POP#####\n");
//	printf("####3.PRINT            0.EXIT#####\n");
//	printf("############4.LENGTH #############\n");
//}
//Node* BuyNode(DataType data)
//{
//	Node* NewNode = malloc(sizeof(Node));
//	if (NewNode)
//	{
//		NewNode->data = data;
//		NewNode->next = NULL;
//	}
//	return NewNode;
//}
///*��ջ����ͷ�巨*/
//void Push(Node** list, DataType data)
//{
//	Node* NewNode = BuyNode(data);
//	assert(NewNode);
//	if (*list == NULL)
//	{
//		*list = NewNode;
//		return;
//	}
//	NewNode->next = *list;
//	*list = NewNode;
//	printf("��ջ�ɹ�\n");
//}
////��ջ
//void Pop(Node** list)
//{
//	if (*list)
//	{
//		Node* next = (*list)->next;
//		printf("%d��ջ�ɹ�\n", (*list)->data);
//		free(*list);
//		*list = next;
//		return;
//	}
//	printf("��ջʧ��\n");
//}
//void Print(Node* list)
//{
//	if (list)
//	{
//		Node* cur = list;
//		while (cur)
//		{
//			printf("%d ", cur->data);
//			cur = cur->next;
//		}
//		printf("\n");
//		return;
//	}
//	printf("ջ��\n");
//}
//int Length(Node* list)
//{
//	int size = 0;
//	while (list)
//	{
//		size++;
//		list = list->next;
//	}
//	return size;
//}
//void text()
//{
//	Node* Stack = NULL;
//	int data, input, size;
//	do
//	{
//		menu();
//		printf("��ѡ��:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case EXIT:
//			printf("�˳�\n");
//			return;
//		case PUSH:
//			printf("��������:");
//			scanf("%d", &data);
//			Push(&Stack, data);
//			break;
//		case POP:
//			Pop(&Stack);
//			break;
//		case PRINT:
//			Print(Stack);
//			break;
//		case LENGTH:
//			size = Length(Stack);
//			printf("ջ�й���%d���ڵ�\n", size);
//			break;
//		default:
//			printf("�������");
//			break;
//		}
//	} while (input);
//}
//int main()
//{
//	text();
//	return 0;
//}

//��ͷ˫��ѭ��������ɾ���
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
typedef int DataType;
typedef struct ListNode
{
	struct ListNode* next;
	struct ListNode* prev;
	DataType data;
}ListNode;
enum
{
	EXIT,
	PUSHBACK,
	PUSHFRONT,
	POPBACK,
	POPFRONT,
	FIND,
	INSERT,
	PRINT,
	ERASE
};
void menu()
{
	printf("************************************\n");
	printf("****1.PushBack       2.PushFront****\n");
	printf("****3.PopBack         4.PopFront****\n");
	printf("****5.Find              6.Insert****\n");
	printf("****7.Print              8.Erase****\n");
	printf("************ 0.EXIT ****************\n");
}
ListNode* BuyListNode(DataType x)
{
	ListNode* newnode = malloc(sizeof(ListNode));
	newnode->next = NULL;
	newnode->prev = NULL;
	newnode->data = x;
	return newnode;
}
ListNode* ListInit()
{
	ListNode* newnode = BuyListNode(0);
	assert(newnode);
	newnode->next = newnode;
	newnode->prev = newnode;
	return newnode;
}
//ָ������
void ListInsert(ListNode* pos, DataType x)
{
	/*ָ��λ�õĺ������*/
	ListNode* newnode = BuyListNode(x);
	ListNode* next = pos->next;
	newnode->next = next;
	next->prev = newnode;
	pos->next = newnode;
	newnode->prev = pos;
	printf("��ӳɹ�\n");
}
//ָ��ɾ��
void ListErase(ListNode* pos)
{
	if (pos == NULL)
	{
		printf("�����в����ڴ�����\n");
		return;
	}
	if (pos->next == pos)
	{
		//�����λ�����ڱ��ڵ�
		printf("��λ�ò�����ɾ��(����Ϊ��)\n");
		return;
	}
	ListNode* next = pos->next;
	ListNode* prev = pos->prev;
	prev->next = next;
	next->prev = prev;
	printf("ɾ���ɹ�\n");
}
void ListPushBack(ListNode* phead, DataType x)
{
	//ListNode* tail = phead->prev;
	//ListNode* next = BuyListNode(x);
	//tail->next = next;
	//next->prev = tail;
	//next->next = phead;
	//phead->prev = next;
	//printf("��ӳɹ�\n");

	ListInsert(phead->prev, x);
}
void ListPushFront(ListNode* phead, DataType x)
{
	//ListNode* first = BuyListNode(x);
	//ListNode* next = phead->next;
	//first->prev = phead;
	//first->next = next;
	//next->prev = first;
	//phead->next = first;
	//printf("ͷ��ɹ�\n");

	ListInsert(phead, x);
}
void ListPrint(ListNode* phead)
{
	ListNode* cur = phead->next;
	if (cur == phead)
	{
		printf("����Ϊ��\n");
		return;
	}
	while (cur != phead)
	{
		printf("%d ", cur->data);
		cur = cur->next;
	}
	printf("\n");
}

void ListPopBack(ListNode* phead)
{
	//assert(phead);
	//if (phead->next == phead)
	//{
	//	printf("����Ϊ��\n");
	//	return;
	//}
	//ListNode* tail = phead->prev;
	//tail->prev->next = phead;
	//phead->prev = tail->prev;
	//free(tail);
	//printf("βɾ�ɹ�\n");

	ListErase(phead->prev);
}
void ListPopFront(ListNode* phead)
{
	//assert(phead);
	////��ֹͷ��㱻��ɾ
	//if (phead->next == phead)
	//{
	//	printf("����Ϊ��\n");
	//	return;
	//}
	//ListNode* cur = phead->next;
	//phead->next = cur->next;
	//cur->next->prev = phead;
	//printf("ͷɾ�ɹ�\n");
	ListErase(phead->next);
}
ListNode* ListFind(ListNode* phead, DataType x)
{
	ListNode* cur = phead->next;
	while (cur != phead)
	{
		if (cur->data == x)
			return cur;
		cur = cur->next;
	}
	return NULL;
}

void ListDestory(ListNode*phead)
{
	ListNode* cur = phead->next;
	while (cur != phead)
	{
		ListNode* next = cur->next;
		free(cur);
		cur = next;
	}
	free(phead);
}

void Text()
{
	ListNode* plist = ListInit();
	ListNode* flag = NULL;
	int data, input;
	do
	{
		menu();
		printf("��ѡ��:");
		scanf("%d", &input);
		switch (input)
		{
		case EXIT:
			ListDestory(plist);
			printf("�˳�\n");
			return;
			break;
		case PUSHBACK:
			printf("����������:");
			scanf("%d", &data);
			ListPushBack(plist, data);
			break;
		case PUSHFRONT:
			printf("����������:");
			scanf("%d", &data);
			ListPushFront(plist, data);
			break;
		case POPBACK:
			ListPopBack(plist);
			break;
		case POPFRONT:
			ListPopFront(plist);
			break;
		case FIND:
			printf("����Ҫ���ҵ�����:");
			scanf("%d", &data);
			flag = ListFind(plist, data);
			printf("%d�ĵ�ַΪ%p\n", data, flag);
			break;
		case INSERT:
			printf("����Ҫѡ������λ��:");
			scanf("%d", &data);
			flag = ListFind(plist, data);
			if (flag != NULL)
			{
				printf("����Ҫ���������:");
				scanf("%d", &data);
				ListInsert(flag, data);
			}
			else
				printf("%d������������\n", data);
			break;
		case PRINT:
			ListPrint(plist);
			break;
		case ERASE:
			printf("����Ҫɾ��������:");
			scanf("%d", &data);
			flag = ListFind(plist, data);
			if (flag != plist)
			{
				//��֤ɾ���Ľڵ㲻��ͷ���
				//flag����ΪNULL
				ListErase(flag);
			}
			break;
		default:
			printf("�������");
			break;
		}
	} while (input);
}
int main()
{
	Text();
	return 0;
}