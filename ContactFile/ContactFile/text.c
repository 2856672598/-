#include"Contact.h"
void menu()
{
	printf("*******************************\n");
	printf("******1.add        2.del ******\n");
	printf("******3.search     4.modify****\n");
	printf("******5.show       6.save  ****\n");
	printf("*******   0.exit    ***********\n");
}
int main()
{
	//����ͨѶ¼
	Contact data;
	//��ʼ��ͨѶ¼
	InitContact(&data);
	int input;
	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			ContactAdd(&data);
			break;
		case DEL:
			ContactDel(&data);
			break;
		case SEARCH:
			ContactSearch(&data);
			break;
		case MODIFY:
			ContactModify(&data);
			break;
		case SHOW:
			ContactShow(&data);
			break;
		case SAVE:
			ContactSave(&data);
			break;
		case EXIT:
			//�˳�֮ǰ�Զ�����
			ContactSave(&data);
			//�ͷŵ����ٵĶ�̬�ڴ�
			Release(&data);
			printf("�˳�\n");
			break;
		default:
			printf("�������������ѡ��>\n");
			break;
		}

	} while (input);
	return 0;
}