////��ת����
////https://leetcode-cn.com/problems/reverse-linked-list/
//#include<stdio.h>
//struct ListNode
//{
//	int val;
//	struct ListNode *next;
//};
////����һ
//struct ListNode* reverseList(struct ListNode* head)
//{
//	struct ListNode* prev = NULL, *cur = head, *next = head->next;
//	if (head == NULL || head->next == NULL)
//		return head;
//	while (cur)
//	{
//		cur->next = prev;
//		prev = cur;
//		cur = next;
//		if (next)
//			next = next->next;
//	}
//	return prev;
//}
////������;
//struct ListNode* reverseList(struct ListNode* head)
//{
//	//ͷ�巨
//	struct ListNode* newhead = NULL;
//	while (head)
//	{
//		struct ListNode* next = head->next;
//		head->next = newhead;
//		newhead = head;
//		head = next;
//	}
//	return newhead;
//}

//876. ������м���
//https://leetcode-cn.com/problems/middle-of-the-linked-list/
#include<stdio.h>
struct ListNode
{
	int val;
	struct ListNode *next;
};
struct ListNode* middleNode(struct ListNode* head)
{
	struct ListNode* slow = head, *fast = head;
	while (fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
	}
	return slow;
}