#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//ͨѶ¼����
#define MAX 1000

//ͨѶ¼���ݵĴ�С
#define MAX_NAME 20
#define MAX_SEX 4
#define MAX_TETL 12
#define MAX_ADDR  20


//��ŵ�����
struct PeoInfo
{
	char name[MAX_NAME];
	char sex[MAX_SEX];
	char tetl[MAX_TETL];
	char addr[MAX_ADDR];
	char age;
};
//
struct Contact
{
	struct PeoInfo data[MAX];//���1000����Ϣ
	int size;//��¼�Ѿ��еĸ���
};
enum menu
{
	Exit,
	Add,
	Del,
	Search,
	Modify,
	Show
};
//��ʼ��
void InitContact(struct Contact* ps);
//���
void Contact_Add(struct Contact* ps);
//��ӡ
void Contact_Show(const struct Contact* ps);
//ɾ��
void Contact_Del( struct Contact* ps);

//����
void Contact_Search(const struct Contact* ps);

//�޸�
void Contarct_Modify(struct Contact* ps);