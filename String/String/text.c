#include"string.h"
int main()
{
	struct SString* s = malloc(sizeof(struct SString));
	char arr[] = "abababd";
	InitString(s);
	StrCopy(s, arr);
	//StrAssign(s, 'a');
	//StrAssign(s, 'b');
	//StrAssign(s, 'a');
	//StrAssign(s, 'b');
	//StrAssign(s, 'a');
	//StrAssign(s, 'b');
	//StrAssign(s, 'c');

	//////�ҵ��˷���λ�ã�û֪������-1��
	////int flag = SubString(s, arr);
	////printf("�Ӵ��������ĵ�%d��λ��\n", flag);
	////Print(s);
	////Clear(s);

	////printf("\n");
	////StrAssign(s, 'a');

	//int flag = StrCompare(s, arr);
	//if (flag > 0)
	//	printf("��һ����\n");
	//else if (flag == 0)
	//	printf("���\n");
	//else
	//	printf("�ڶ�����\n");
	Print(s);
	return 0;
}