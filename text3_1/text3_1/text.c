
//�������
//#include<stdio.h>
//#include<stdlib.h>
//void* add(int* numsA, int numsASize, int* numsB, int numsBSize,int* returnSize)
//{
//	//�ж���Ҫ���ٵĿռ��С
//	int size = numsASize > numsBSize ? numsASize : numsBSize;
//	int* retArr = malloc(sizeof(int)*(size + 1));
//	if (!retArr)
//		exit(-1);
//	int Ai = numsASize - 1;
//	int Bi = numsBSize - 1;
//
//	*returnSize = 0;
//
//	int sumnext = 0;
//	while (size--)
//	{
//		int a = 0, b = 0;
//		//��ֹԽ�����
//		if (Ai >= 0)
//		{
//			a = numsA[Ai];
//			Ai--;
//		}
//		if (Bi >= 0)
//		{
//			b = numsB[Bi];
//			Bi--;
//		}
//
//		int ret = a + b + sumnext;
//		//�ж��Ƿ��н�λ
//		if (ret > 9)
//		{
//			ret = ret - 10;
//			sumnext = 1;
//		}
//		else
//		{
//			sumnext = 0;
//		}
//		retArr[*returnSize] = ret;
//		(*returnSize)++;
//	}
//	//�жϵ����һ����������Ƿ���Ҫ��λ
//	if (sumnext == 1)
//	{
//		retArr[*returnSize] = 1;
//		(*returnSize)++;
//	}
//	//�������е����ݵ���
//	int left = 0, right = (*returnSize) - 1;
//	while (left < right)
//	{
//		int tmp = retArr[left];
//		retArr[left] = retArr[right];
//		retArr[right] = tmp;
//		left++;
//		right--;
//	}
//	return retArr;
//}
//int main()
//{
//	int arr1[] = { 9,9,9,9,9,9,9,9,9,9 };
//	int arr2[] = { 1 };
//	int arr1Size = sizeof(arr1) / sizeof(arr1[0]);
//	int arr2Size = sizeof(arr2) / sizeof(arr2[0]);
//	int size = 0;
//	int* arr = add(arr1, arr1Size, arr2, arr2Size, &size);
//	int i = 0;
//	for (i = 0; i < size; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	free(arr);
//	arr = NULL;
//	return 0;
//}


////ɾ�������е��ڸ���ֵ val �����нڵ㡣
////https://leetcode-cn.com/problems/remove-linked-list-elements/
//#include<stdio.h>
//#include<stdlib.h>
//typedef struct ListNode
//{
//	int val;
//	struct ListNode *next;
//
//}ListNode;
//struct ListNode* removeElements(struct ListNode* head, int val)
//{
//	//��ֹͷ������
//	while (head != NULL && head->val == val)
//	{
//		head = head->next;
//	}
//	struct ListNode* tmp = head;
//	while (tmp != NULL)
//	{
//		if (tmp->next != NULL && tmp->next->val == val)
//		{
//			tmp->next = tmp->next->next;
//		}
//		else
//		{
//			tmp = tmp->next;
//		}
//	}
//	return head;
//}
//int main()
//{
//	return 0;
//}


//#include<stdio.h>
//typedef struct ListNode
//{
//	int val;
//	struct ListNode *next;
//
//}ListNode;
////�ڱ���
////����˫ָ��
//struct ListNode* removeElements(struct ListNode* head, int val)
//{
//	//���ͷ����Ƿ����val
//	while (head != NULL && head->val == val)
//	{
//		head = head->next;
//	}
//	struct ListNode* prev = NULL;
//	struct ListNode* cur = NULL;
//	//��ֹԽ�����
//	if (head != NULL)
//	{
//		prev = head;
//		cur = head->next;
//	}
//
//	while (cur != NULL && prev != NULL)
//	{
//		if (cur->val == val)
//		{
//			prev->next = cur->next;
//			cur = prev->next;
//		}
//		else
//		{
//			cur = cur->next;
//			prev = prev->next;
//		}
//	}
//	return head;
//}



////��ת����------����˫ָ��
////https://leetcode-cn.com/problems/reverse-linked-list/
//#include<stdio.h>
//struct ListNode
//{
//	int val;
//	struct ListNode* next;
//};
//struct ListNode* reverseList(struct ListNode* head)
//{
//	struct ListNode* pre = NULL, *cur = head, *tmp = NULL;
//	//��curָ���ָ��ʱֹͣ
//	while (cur)
//	{
//		tmp = cur->next;
//		//��ת
//		cur->next = pre;
//
//		//����ָ���λ��
//		pre = cur;
//		cur = tmp;
//	}
//	return pre;
//}
//
//struct ListNode* reverseList(struct ListNode* head)
//{
//	//����ͷ�巨
//	struct ListNode* newHead = NULL;
//	while (head != NULL)
//	{
//		struct ListNode* next = head->next;
//		head->next = newHead;
//		newHead = head;
//		head = next;
//	}
//	return newHead;
//}

//int main()
//{
//	return 0;
//}


////����ָ��
//#include<stdio.h>
//struct ListNode
//{
//	int val;
//	struct ListNode *next;
//	
//};
//struct ListNode* middleNode(struct ListNode* head)
//{
//	struct ListNode* slow = head, *fast = head;
//	while (fast)
//	{
//		if (fast->next == NULL)
//		{
//			return slow;
//		}
//		fast = fast->next->next;
//		slow = slow->next;
//	}
//	return slow;
//}
//
////struct ListNode* middleNode(struct ListNode* head)
////{
////	int count = 0;
////	struct ListNode* tmp = head;
////	//��������������Ĵ�С
////	while (tmp)
////	{
////		count++;
////		tmp = tmp->next;
////	}
////	//������Ĵ�СΪż���� �м�Ľڵ�Ϊ����  count/2 +1�����м�ĵ�2���ڵ�
////
////	//����СΪ����ʱ count/2  +1�õ��ľ����м�Ľڵ�
////	//���ҵ�n���ڵ�ʱֻ��Ҫ����n-1���ڵ㣬�Ϳ��Եõ���n���ڵ�ĵ�ַ
////
////	count = count / 2; // count = count / 2 +1 ;
////	//���м�Ľڵ�
////	while (count--)   //while( ( count -1 )--)
////	{
////		head = head->next;
////	}
////	return head;
////}
//int main()
//{
//	return 0;
//}


//21. �ϲ�������������
//https://leetcode-cn.com/problems/merge-two-sorted-lists/
//#include<stdio.h>
//struct ListNode
//{
//	int val;
//	struct ListNode *next;
//};
//struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2)
//{
//	if (l1 == NULL || l2 == NULL)
//		return  l1 != NULL ? l1 : l2;
//	struct ListNode* head;
//	struct ListNode* cur;
//	if ((l1->val > l2->val))
//	{
//		head = l2;
//		l2 = l2->next;
//	}
//	else
//	{
//		head = l1;
//		l1 = l1->next;
//	}
//	cur = head;
//	while (l1 != NULL && l2 != NULL)
//	{
//		if (l1->val > l2->val)
//		{
//			cur->next = l2;
//			l2 = l2->next;
//			cur = cur->next;
//		}
//		else
//		{
//			cur->next = l1;
//			l1 = l1->next;
//			cur = cur->next;
//		}
//	}
//
//	if (l1)
//		cur->next = l1;
//	else
//		cur->next = l2;
//	return head;
//}


////����һ����������������е�����k����㡣
////https://www.nowcoder.com/practice/529d3ae5a407492994ad2a246518148a?tab=answerKey
#include<stdio.h>
#include<stdlib.h>
struct ListNode
{
	int val;
	struct ListNode *next;
};
////struct ListNode* FindKthToTail(struct ListNode* pListHead, int k)
////{
////	struct ListNode* slow = pListHead, *fast = pListHead;
////	while (fast != NULL)
////	{
////		if (fast == pListHead)
////		{
////			while (k--)
////			{
////				if (fast)
////				{
////					fast = fast->next;
////				}
////				else
////					return NULL;
////			}
////		}
////		if (fast)
////		{
////			slow = slow->next;
////			fast = fast->next;
////		}
////	}
////	return slow;
////}

struct ListNode* FindKthToTail(struct ListNode* pListHead, int k)
{
	struct ListNode* slow = pListHead, *fast = pListHead;
	while (k--)
	{
		if (fast)
		{
			fast = fast->next;
		}
		else
			return NULL;
	}
	while (fast)
	{
		fast = fast->next;
		slow = slow->next;
	}
	return slow;
}

int main()
{
	struct ListNode* p1 = malloc(sizeof(struct ListNode));
	p1->val = 1;
	struct ListNode* p2 = malloc(sizeof(struct ListNode));
	p2->val = 2;
	struct ListNode* p3 = malloc(sizeof(struct ListNode));
	p3->val = 3;
	struct ListNode* p4 = malloc(sizeof(struct ListNode));
	p4->val = 4;
	struct ListNode* p5 = malloc(sizeof(struct ListNode));
	p5->val = 5;
	p1->next = p2;
	p2->next = p3;
	p3->next = p4;
	p4->next = p5;
	p5->next = NULL;

	struct ListNode* arr = FindKthToTail(p1, 4);
	while (arr != NULL)
	{
		printf("%d ", arr->val);
		arr = arr->next;
	}
	return 0;
}