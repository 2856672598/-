#include<stdio.h>
////����ָ�
//#include<stdio.h>
//#include<stdlib.h>
//struct ListNode {
//	int val;
//	struct ListNode *next;
//};
//struct ListNode* partition(struct ListNode* pHead, int x)
//{
//	struct ListNode* lesst, *greate, *l1, *l2, *head;
//	//���������ڱ�����
//	l1 = (struct ListNode*)malloc(sizeof(struct ListNode));
//	l2 = (struct ListNode*)malloc(sizeof(struct ListNode));
//	lesst = l1;
//	greate = l2;
//	while (pHead)
//	{
//		if (pHead->val >= x)
//		{
//			//����ʱ��ֱ��ͷ��
//			greate->next = pHead;
//			greate = pHead;
//		}
//		else
//		{
//			lesst->next = pHead;
//			lesst = pHead;
//		}
//		pHead = pHead->next;
//	}
//	//��С��x�Ĳ��ֺʹ��ڵ��ڵĲ�������һ��
//	greate->next = NULL;
//	lesst->next = l2->next;
//	head = l1->next;
//	free(l1);
//	free(l2);
//	return head;
//}
//int main()
//{
//	return 0;
//}


////����Ļ��Ľṹ
////https://www.nowcoder.com/practice/d281619e4b3e4a60a2cc66ea32855bfa?tpId=49&tqId=29370&rp=1&ru=%2Factivity%2Foj&qru=%2Fta%2F2016test%2Fquestion-ranking&tab=answerKey
//#include<stdio.h>
//struct ListNode {
//	int val;
//	struct ListNode *next;
//};
//int chkPalindrome(struct ListNode* A)
//{
//	struct ListNode* fast = A, *slow = A, *prev = NULL, *tmp = NULL, *newHead = NULL, *next = NULL;
//	//����ָ������м��
//	while (fast && fast->next)
//	{
//		prev = slow;
//		fast = fast->next->next;
//		slow = slow->next;
//	}
//	prev->next = NULL;
//	//����
//	while (slow)
//	{
//		
//		next = slow->next;
//		slow->next = newHead;
//		newHead = slow;
//		slow = next;
//	}
//
//	//�ж��Ƿ����
//	while (A && newHead)
//	{
//		if (A->val != newHead->val)
//			return 0;
//		else
//		{
//			A = A->next;
//			newHead = newHead->next;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	struct ListNode* p1 = (struct ListNode*)malloc(sizeof(struct ListNode));
//	p1->val = 1;
//	struct ListNode* p2 = (struct ListNode*)malloc(sizeof(struct ListNode));
//	p2->val = 2;
//	struct ListNode* p3 = (struct ListNode*)malloc(sizeof(struct ListNode));
//	p3->val = 3;
//	struct ListNode* p4 = (struct ListNode*)malloc(sizeof(struct ListNode));
//	p4->val = 2;
//	struct ListNode* p5 = (struct ListNode*)malloc(sizeof(struct ListNode));
//	p5->val = 1;
//	p1->next = p2;
//	p2->next = p3;
//	p3->next = p4;
//	p4->next = p5;
//	p5->next = NULL;
//	int len = chkPalindrome(p1);
//	if (len)
//		printf("true");
//	else
//		printf("false");
//	return 0;
//}


//struct ListNode
//{
//	int val;
//	struct ListNode *next;
//};
//struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB)
//{
//	struct ListNode* curA = headA;
//	int la = 0;
//	while (curA)
//	{
//		curA = curA->next;
//		la++;
//	}
//	struct ListNode* curB = headB;
//	int lb = 0;
//	while (curB)
//	{
//		curB = curB->next;
//		lb++;
//	}
//	struct ListNode* longList = headA;
//	struct ListNode* shortList = headB;
//	if (lb > la)
//	{
//		longList = headB;
//		shortList = headA;
//	}
//	int space = abs(la - lb);
//	while (space--)
//	{
//		longList = longList->next;
//	}
//	while (longList)
//	{
//		if (longList == shortList)
//			return longList;
//		longList = longList->next;
//		shortList = shortList->next;
//	}
//	return NULL;
//}


////��������
////https://leetcode-cn.com/problems/linked-list-cycle/
////���ÿ���ָ�룬������Ϊ����ʱ������ָ������ض������ָ��ͬһ����ַ
////���뻷�κ��ǿ�ָ����׷����ָ�룬ÿ��һ����ָ�������ָ���һ��
//#include<stdbool.h>
//struct ListNode
//{
//	int val;
//	struct ListNode *next;
//};
//bool hasCycle(struct ListNode *head)
//{
//	//slow �� fastӦ��1
//	//1-2     3-4;
//	struct ListNode* slow = head, *fast = head;
//	while (fast && fast->next)
//	{
//		fast = fast->next->next;
//		slow = slow->next;
//		if (slow == fast)
//			return true;
//	}
//	return false;
//}

////��������2
////https://leetcode-cn.com/problems/linked-list-cycle-ii/
//#include<stdlib.h>
//struct ListNode
//{
//	int val;
//	struct ListNode *next;
//};
//struct ListNode *detectCycle(struct ListNode *head)
//{
//	struct ListNode* fast = head, *slow = head;
//	while (fast && fast->next)
//	{
//		fast = fast->next->next;
//		slow = slow->next;
//		if (fast == slow)
//			break;
//	}
//	if (fast == NULL || fast->next == NULL)
//		return NULL;
//	struct ListNode* meet = slow;
//	while (head != meet)
//	{
//		head = head->next;
//		meet = meet->next;
//	}
//	return head;
//}


////138. ���ƴ����ָ�������
////https://leetcode-cn.com/problems/copy-list-with-random-pointer/
// struct Node
// {
//      int val;
//      struct Node *next;
//      struct Node *random;
// };
// struct Node* copyRandomList(struct Node* head)
// {
//	 //�ж��Ƿ��ǿյ�
//	 if (head == NULL)
//		 return NULL;
//	 struct Node* cur = head, *next = NULL;
//	 //�ѿ����ڵ� ���ӵ�ԭ�ڵ�ĺ���
//	 while (cur)
//	 {
//		 struct Node* copy = malloc(sizeof(struct Node));
//		 copy->random = NULL;
//		 copy->next = NULL;
//
//		 next = cur->next;
//		 copy->next = next;
//		 cur->next = copy;
//		 copy->val = cur->val;
//		 cur = next;
//	 }
//	 //2 �������ڵ��random
//	 cur = head;
//	 struct Node* copy = NULL;
//	 while (cur&&cur->next)
//	 {
//		 copy = cur->next;
//		 next = copy->next;
//		 if (cur->random)
//			 copy->random = cur->random->next;
//		 else
//			 copy->random = NULL;
//
//		 cur = next;
//	 }
//
//	 //3�������Ƶ�����
//	 cur = head;
//	 struct Node* copyHead = head->next;
//	 while (cur && cur->next)
//	 {
//		 copy = cur->next;
//		 next = copy->next;
//
//		 cur->next = next;
//		 if (next)
//			 copy->next = next->next;
//		 else
//			 copy->next = NULL;
//		 cur = next;
//	 }
//	 return copyHead;
// }


 struct ListNode
 {
      int val;
      struct ListNode *next;
 };

struct ListNode* insertionSortList(struct ListNode* head)
{
	if (head == NULL || head->next == NULL)
		return head;
	struct ListNode* sortHead = head, *cur;
	sortHead->next = NULL;
	cur = head->next;
	while (cur)
	{
		//ͷ��
		struct ListNode*next = cur->next;
		if (cur->val <= sortHead->val)
		{
			//next = cur->next;
			cur->next = sortHead;
			sortHead = cur;
			//cur = next;
		}
		else
		{
			//�м����
			struct ListNode* prev = sortHead, *sortcur = sortHead->next;
			while (sortcur)
			{
				if (cur->val <= sortcur->val)
				{
					prev->next = cur;
					cur->next = sortcur;
					break;
				}
				sortcur = sortcur->next;
				prev = prev->next;
			}
			//β��
			if (sortcur == NULL)
			{
				sortcur = cur;
				prev->next = sortcur;
				sortcur->next = NULL;
			}
		}
		cur = next;
	}
	return sortHead;
}