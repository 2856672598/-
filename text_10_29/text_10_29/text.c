#include"Stack.h"

char pairs(char ch)
{
	if (ch == '}')
		return '{';
	else if (ch == ')')
		return '(';
	else
		return '[';
}

bool isValid(char * s)
{
	//����һ��ջ
	ST st;
	Init(&st);
	for (int i = 0; i < (int)strlen(s); i++)
	{
		if (s[i] == '{' || s[i] == '(' || s[i] == '[')
		{
			Push(&st, s[i]);
		}
		else
		{
			//�жϴ�ʱջ�Ƿ�Ϊ��
			if (Empty(&st))
			{
				return false;
			}
			else
			{
				//ջ�в�Ϊ�գ��ж������Ƿ�ƥ��
				if (Top(&st) == pairs(s[i]))
				{
					Pop(&st);
				}
				else
					return false;
			}
		}
	}

	//�жϴ�ʱջ�Ƿ�Ϊ����
	if (Empty(&st))
		return true;
	return false;
}
//int main()
//{
//	char arr[] = "{[]}";
//	printf("%d ", isValid(arr));
//	return 0;
//}