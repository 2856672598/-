#include"contact.h"
void menu(void)
{
	printf("*******************************\n");
	printf("******1.add        2.del ******\n");
	printf("******3.search     4.modify****\n");
	printf("******5.show       0.exit  ****\n");
	printf("*******************************\n");
}
int main()
{
	int input;
	//����ͨѶ¼
	Contact con;

	//��ʼ��ͨѶ¼
	Contact_Init(&con);
	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			Contact_Add(&con);
			break;
		case DEL:
			break;
		case SEARCH:
			break;
		case MODIFY:
			break;
		case SHOW:
			Contact_Show(&con);
			break;
		case EXIT:
			break;
		}
	} while (input);
	return 0;
}