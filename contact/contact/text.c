//�����õ�ͨѶ¼-----��ϵ�����������ظ�

#define _CRT_SECURE_NO_WARNINGS
#include"contact.h"
void menu()
{
	printf("*******************************\n"); 
	printf("******1.add        2.del ******\n");
	printf("******3.search     4.modify****\n");
	printf("******5.show       0.exit  ****\n");
	printf("*******************************\n");
}
int main()
{
	//����ͨѶ¼
	struct Contact con;
	
	//��ʼ��ͨѶ¼
	InitContact(&con);
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case Add:
			Contact_Add(&con);
			break;
		case Del:
			Contact_Del(&con);
			break;
		case Search:
			Contact_Search(&con);
			break;
		case Modify:
			Contarct_Modify(&con);
			break;
		case Show:
			Contact_Show(&con);
			break;
		case Exit:
			break;
		default:
			printf("�������\n");
		}
		
	} while (input);
	return 0;
}