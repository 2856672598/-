#include"code.h"
void menu()
{
	cout << "1.���������Ϣ" << endl;
	cout << "2.���������Ϣ" << endl;
	cout << "3.�ɼ�����" << endl;
	cout << "4.���������Ϣ" << endl;
	cout << "5.��ѯ������Ϣ" << endl;
	cout << "6.ɾ��������Ϣ" << endl;
	cout << "0.�˳�" << endl;
}

int main()
{
	Solution nums;
	int choose;
	Message tmp;
	int pos = 0;
	nums.init();
	do
	{
		menu();
		cout << "��ѡ��>";
		cin >> choose;
		switch (choose)
		{
		case 0:
			cout << "�˳�" << endl;
			break;
		case 1:
			cout << "������>";
			cin >> tmp._id;
			cout << "��������>";
			cin >> tmp._name;
			cout << "�������>";
			cin >> tmp._music;
			cout << "������ί��ͶƱ>";
			cin >> tmp._popularVotes;
			cout << "רҵ��ί���>";
			cin >> tmp._judges;
			tmp._totalScore = (tmp._popularVotes + tmp._judges) / 6;
			if (!nums.add(tmp))
				cout << "����Ѿ�����" << endl;
			else
				cout << "��ӳɹ�" << endl;
			break;
		case 2:
			nums.print();
			break;
		case 3:
			nums.sort();
			nums.print();
			break;
		case 4:
			nums.save();
			cout << "����ɹ�" << endl;
			break;
		case 5:
			cout << "������Ҫ���ҵ�id>";
			cin >> tmp._id;
			pos = nums.find(tmp._id);
			if (pos == -1)
				cout << "��Ų�����" << endl;
			else
				nums._print(pos);
			break;
		case 6:
			cout << "������Ҫɾ����id>";
			cin >> tmp._id;
			nums.dele(tmp._id);
			break;
		default:
			break;
		}
		system("pause");   //����������� 
		system("cls");  //�������� 
	} while (choose);
	nums.save();
	return 0;
}