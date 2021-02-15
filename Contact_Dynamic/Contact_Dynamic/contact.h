#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//#define SZ 1
//#define INCREASE 2
//#define MAX_NAME 10
//#define MAX_SEX 5
//#define MAX_TETL 12
//#define MAX_ADDR 20
//#define MAX_AGE 4
enum
{
	SZ=1,
	INCREASE=2,
	MAX_NAME=10,
	MAX_SEX =5,
	MAX_TETL =12,
	MAX_ADDR =20,
	MAX_AGE =4
};
enum menu
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW
};
typedef struct PeoInfo
{
	char name[MAX_NAME];
	char sex[MAX_SEX];
	char tetl[MAX_TETL];
	char addr[MAX_ADDR];
	int age;
}PeoInfo;
typedef struct Contact
{
	PeoInfo *data;
	int size;
	int capacity;
}Contact;

//���
void Contact_Add(Contact* ps);
//��ӡ
void Contact_Show(Contact* ps);
//��ʼ��
void Contact_Init(Contact* ps);
//ɾ��
void Contact_Del(Contact* ps);
//����
void Contact_Search(Contact* ps);
//�޸�
void Contact_Modify(Contact* ps);
//���ٵĶ�̬�ڴ��ͷ�
void Release(Contact* ps);
int Check(Contact* ps);