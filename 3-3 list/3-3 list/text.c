
//����ָ�
#include<stdio.h>
#include<stdlib.h>
struct ListNode {
	int val;
	struct ListNode *next;
};
struct ListNode* partition(struct ListNode* pHead, int x)
{
	struct ListNode* lesst, *greate, *l1, *l2, *head;
	//���������ڱ�����
	l1 = (struct ListNode*)malloc(sizeof(struct ListNode));
	l2 = (struct ListNode*)malloc(sizeof(struct ListNode));
	lesst = l1;
	greate = l2;
	while (pHead)
	{
		if (pHead->val >= x)
		{
			//����ʱ��ֱ��ͷ��
			greate->next = pHead;
			greate = pHead;
		}
		else
		{
			lesst->next = pHead;
			lesst = pHead;
		}
		pHead = pHead->next;
	}
	//��С��x�Ĳ��ֺʹ��ڵ��ڵĲ�������һ��
	greate->next = NULL;
	lesst->next = l2->next;
	head = l1->next;
	free(l1);
	free(l2);
	return head;
}
int main()
{
	return 0;
}