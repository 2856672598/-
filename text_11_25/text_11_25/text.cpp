//#include"text.h"
////using wkn::fun;
//
//using namespace wkn;
//void text1()
//{
//	fun();
//}
//int main()
//{
//	fun();
//	return 0;
//}

//#include<stdio.h>
//void print(int*arr, int n)
//{
//	for (int i = 0; i < n; i++)
//		printf("%d ", arr[i]);
//	printf("\n");
//}
//int main()
//{
//	int n = 10;
//	int arr[10] = { 7 ,1, 4, 6, 8 ,9 ,5 ,2, 3, 10 };
//	int count = 0;
//	for (int i = 0; i < n - 1; i++)
//	{
//		for (int j = 0; j < n - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//		if (count <= 3)
//		{
//			print(arr, n);
//			count++;
//		}
//	}
//	return 0;
//}


//#include<iostream>
//using namespace std;
//void print(int*arr, int n)
//{
//	for (int i = 0; i < n; i++)
//		printf("%d ", arr[i]);
//	printf("\n");
//}
//int main()
//{
//	int n = 10;
//	int arr[10] = { 7 ,1, 4, 6, 8 ,9 ,5 ,2, 3, 10 };
//	int count = 0;
//	for (int i = 0; i < n-1; i++)
//	{
//		int mini = i;
//		for (int j = i + 1; j < n; j++)
//		{
//			if (arr[j] < arr[mini])
//			{
//				mini = j;
//			}
//		}
//		int tmp = arr[i];
//		arr[i] = arr[mini];
//		arr[mini] = tmp;
//		if (count < 3)
//		{
//			print(arr, n);
//			count++;
//		}
//	}
//	return 0;
//}


//#include<iostream>
//using namespace std;
//
//void print(int*arr, int n)
//{
//	for (int i = 0; i < n; i++)
//		printf("%d ", arr[i]);
//	printf("\n");
//}
//
//int main()
//{
//	int n = 10;
//	int arr[10] = { 7 ,1, 4, 6, 8 ,9 ,5 ,2, 3, 10 };
//	int count = 0;
//	for (int i = 0; i < n - 1; i++)
//	{
//		int end = i;
//		int flag = arr[end + 1];
//		while (end >= 0)
//		{
//			if (flag < arr[end])
//			{
//				arr[end + 1] = arr[end];
//			}
//			else
//				break;
//			end--;
//		}
//		arr[end + 1] = flag;
//		if (count < 3)
//		{
//			print(arr, n);
//			count++;
//		}
//	}
//	print(arr, n);
//	return 0;
//}


//#include<iostream>
//using namespace std;
//
//void print(int*arr, int n)
//{
//	for (int i = 0; i < n; i++)
//		printf("%d ", arr[i]);
//	printf("\n");
//}
//
//int main()
//{
//	int n = 10;
//	int arr[10] = { 7, 1 ,4, 6, 8, 9, 5, 2, 3, 10 };
//	int count = 0;
//	int gap = 5;
//	while (gap)
//	{
//		for (int i = 0; i < n - gap; i++)
//		{
//			int end = i;
//			int flag = arr[end + gap];
//			while (end >= 0)
//			{
//				if (arr[end] > flag)
//					arr[end + gap] = arr[end];
//				else
//					break;
//				end -= gap;
//			}
//			arr[end + gap] = flag;
//		}
//		if (count < 3)
//		{
//			print(arr, n);
//			count++;
//		}
//		gap /= 2;
//	}
//	print(arr, n);
//}


//#include<iostream>
//using namespace std;
//int* _array(int* a, int n1, int* b, int n2)
//{
//	int* ret = (int*)malloc(sizeof(int)*(n1 + n2));
//	int index = 0;
//	int begin1 = 0, begin2 = 0;
//	while (begin1 < n1&&begin2 < n2)
//	{
//		if (a[begin1] > b[begin2])
//		{
//			ret[index++] = b[begin2++];
//		}
//		else
//			ret[index++] = a[begin1++];
//	}
//	while (begin1 < n1)
//		ret[index++] = a[begin1++];
//	while (begin2 < n2)
//		ret[index++] = b[begin2++];
//
//	for (int i = 0; i < n1 + n2; i++)
//		a[i] = ret[i];
//	free(ret);
//	return a;
//}
//
//void _sort(int* arr, int left, int right)
//{
//	if (left >= right)
//		return;
//	int mid = left + (right - left) / 2;
//	_sort(arr, left, mid);
//	_sort(arr, mid + 1, right);
//
//	_array(arr + left, mid - left+1, arr + mid + 1, right - mid);
//}
//
//int* sort(int*arr, int n)
//{
//	_sort(arr, 0, n - 1);
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return arr;
//}
//int main()
//{
//	int n = 15;
//	int arr[] = { 3, 44, 38, 5 ,47, 15, 36, 26, 27, 2, 46, 4, 19, 50, 48 };
//	sort(arr, n);
//	return 0;
//}

//
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 1; i < n; i++)
//	{
//		if (i % 7 == 0)
//			cout << i << " ";
//		else
//		{
//			int tmp = i;
//			while (tmp)
//			{
//				if (tmp % 10 == 7)
//				{
//					cout << i << " ";
//					break;
//				}
//				tmp /= 10;
//			}
//		}
//	}
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	int a, b, c;
//	cin >> a >> b >> c;
//	printf("%.*lf", c, 1.0*a / b);
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int n;
//	int arr[1000];
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//		scanf("%d", &arr[i]);
//
//	int i = 0, max = arr[0];
//	for (i = 0; i < n; i++)
//	{
//		int j = 0, sum = 1;
//		for (j = i; j < n; j++)
//		{
//			sum *= arr[j];
//			if (sum > max)
//				max = sum;
//		}
//	}
//	if (max < 0)
//		max = -1;
//	printf("%d", max);
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//int countDigitOne(int n)
//{
//	if (n == 0)
//		return 0;
//	int count = 0;
//	int z = 0;
//	int tmp = n;
//	while (tmp)
//	{
//		z++;
//		tmp /= 10;
//	}
//	int i = 0;
//	while (z)
//	{
//		int base = (int)pow(10, i);
//		int cur = (n / base) % 10;
//		int next = n / (int)pow(10, i + 1);
//		int tail = n % base;
//		if (cur == 1)
//		{
//			count += next * base + (tail + 1) * 1;
//		}
//		else if (cur > 1)
//		{
//			count += (next + 1)*base;
//		}
//		else
//		{
//			count += next * base;
//		}
//		i++;
//		z--;
//	}
//	return count;
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("%d", countDigitOne(n));
//}



//#include<stdio.h>
//#include<algorithm>
//#include<iostream>
//using namespace std;
//void adjustdown(int* arr, int pos, int n)
//{
//	int parent = pos;
//	int child = parent * 2 + 1;
//	while (child <= n)
//	{
//		if (child + 1 <= n&&arr[child] < arr[child + 1])
//			child++;
//		if (arr[parent] < arr[child])
//		{
//			swap(arr[child], arr[parent]);
//			parent = child;
//			child = parent * 2 + 1;
//		}
//		else
//			break;
//	}
//}
//void sort(int* arr, int n)
//{
//	for (int i = (n - 2) / 2; i >= 0; i--)
//	{
//		adjustdown(arr, i, n - 1);
//	}
//	int end = n - 1;
//	while (end > 0)
//	{
//		swap(arr[0], arr[end]);
//		end--;
//		adjustdown(arr, 0, end);
//
//	}
//	for (int i = 0; i < n; i++)
//	{
//		cout << arr[i] << " ";
//	}
//}
//int main()
//{
//	int n = 10;
//	int arr[] = { 7 ,1, 4, 6, 8, 9, 5, 2, 3, 10 };
//	sort(arr, n);
//	return 0;
//}


//#include<iostream>
//using namespace std;
//void text(int* arr, int n)
//{
//	int max = arr[0];
//	for (int i = 0; i < n; i++)
//	{
//		if (max < arr[i])
//			max = arr[i];
//	}
//
//	int flag[100] = { 0 };
//	for (int i = 0; i < n; i++)
//	{
//		flag[arr[i]]++;
//	}
//	int index = 0;
//	for (int i = 0; i <= max; i++)
//	{
//		if (flag[i])
//			cout << i << " " << flag[i] << endl;
//		while (flag[i])
//		{
//			arr[index++] = i;
//			flag[i]--;
//		}
//	}
//
//	for (int i = 0; i < n; i++)
//		cout << arr[i] << " ";
//}
//
//int main()
//{
//	int n = 10;
//	int nums[] = { 7 ,1, 4, 6, 8, 9, 5, 2, 3, 10 };
//	text(nums, n);
//	return 0;
//}


//#include<stdio.h>
//#include<iostream>
//using namespace std;
//typedef struct Node
//{
//	int _date;
//	struct Node* _next;
//	int _num;
//}Node;
//
//void create(Node*& head, int m)
//{
//	int num = 1;
//	head = new Node;
//	cin >> head->_date;
//	head->_num = num;
//	Node* cur = head;
//	for (int i = 1; i < m; i++)
//	{
//		Node* next = new Node;
//		cin >> next->_date;
//		next->_num = i + 1;
//		cur->_next = next;
//		cur = cur->_next;
//		next->_next = head;
//	}
//}
//
//void Sequence(Node* &head, int m)
//{
//	Node* cur = head;
//	Node* prev = nullptr;
//	while (cur->_next != cur)
//	{
//		for (int i = 1; i < m; i++)
//		{
//			prev = cur;
//			cur = cur->_next;
//		}
//		cout << cur->_num << " ";
//		m = cur->_date;
//		prev->_next = cur->_next;
//		free(cur);
//		cur = prev->_next;
//	}
//	cout << cur->_num << " ";
//}
//
//int main()
//{
//	int m, n;
//	cin >> n >> m;
//	Node* head = nullptr;
//	create(head, n);
//	Sequence(head, m);
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>  //�������
//#include<string.h> //�ַ�������
//#include<stdlib.h> // ���򹤾�
//#include<iostream> //���������
//#include <windows.h>
//#include<string>
//#include<vector>
//using namespace std;
//
//struct administrator        // �������Ա����������
//{
//	char name[20];
//	char password[20];
//};
//
//struct administrator admin[1000];
//int index = 0;
//
//typedef struct Node {           //�������
//	char classRoomNum[10];      //���ұ��
//	char set[10];               //���ҵص�
//	struct Node *next;
//} SLNode;
//typedef struct {                //���������Ϣ
//	char classRoomNum[10];      //���ұ��
//	char set[10];               //���ҵص�
//	SLNode *head;
//} classRoom;
//
//void ListInitiate(SLNode **head) {      //�����ʼ��
//	if ((*head = (SLNode *)malloc(sizeof(SLNode))) == NULL)
//		exit(1);                        //��ʼ��ʧ�ܣ��򷵻ش�����Ϣ
//	(*head)->next = NULL;                //��ʼ���ɹ�����һ���ձ�ͷ�ڵ�ָ�����ÿ�
//}
//void allQuery(SLNode *head);            //��������
//void linkView(SLNode *head);
//void Exit();
//void classRoomInfor();
//void mainMenu();
//void classRoomAdd(SLNode *head, classRoom x);
//void classRoomQuery(SLNode *head);
//SLNode *classRoomInsert(SLNode *head, classRoom x);
//void printclassRoom(SLNode *p);
//void queryMenu();
//void classRoomQuery(SLNode *head);
//void timeSlotQuery(SLNode *head);
//void siteQuery(SLNode *head);
//void volumeQuery(SLNode *head);
//void classRoomRevise(SLNode *head);
//void classRoomDel(SLNode *head);
//
//void logon()
//{
//	FILE* pf = fopen("admin.txt", "r+");
//	if (pf == nullptr)
//	{
//		cout << "���ļ�ʧ��" << endl;
//		return;
//	}
//	index = 0;
//	//����������
//	while (fscanf(pf, "%s %s", &admin[index].name, &admin[index].password) != EOF)
//		index++;
//
//	char name[100];
//	char password[100];
//	cout << "��ӭ����ע��ϵͳ" << endl;
//	cout << "���������û���:";
//	cin >> name;
//	int flag = 0;
//	while (1)
//	{
//		flag = 0;
//		for (int i = 0; i < index; i++)
//		{
//			if (strcmp(name, admin[i].name) == 0)
//			{
//				flag = 1;
//				cout << "�û����ظ�" << endl;
//				cout << "���������û���:";
//				cin >> name;
//				break;
//			}
//		}
//		if (flag == 0)
//			break;
//	}
//	cout << endl << "��������:";
//	cin >> password;
//	strcpy(admin[index].name, name);
//	strcpy(admin[index++].password, password);
//	cout << "ע��ɹ�" << endl;
//	//for (int i = 0; i < index; i++)
//	//{
//	//	fprintf(pf, "%s %s\n", admin[i].name, admin[i].password);
//	//}
//	fprintf(pf, "%s %s\n", admin[index - 1].name, admin[index - 1].password);
//
//	fclose(pf);
//	system("pause");
//	system("cls");
//}
//
//void signIn()
//{
//	char name[10];
//	printf("�������˻���");
//	scanf("%s", name);
//	int flag = -1;
//	while (1)
//	{
//		for (int i = 0; i < index; i++)
//		{
//			if (strcmp(name, admin[i].name) == 0)
//			{
//				flag = i;
//				break;
//			}
//		}
//		if (flag != -1)
//			break;
//		printf("�û���������������>");
//		scanf("%s", name);
//	}
//	char password[10];
//	printf("��������>");
//	scanf("%s", password);
//	while (1)
//	{
//		if (strcmp(password, admin[flag].password) == 0)
//			break;
//		printf("�������,��������>");
//		scanf("%s", password);
//	}
//	printf("��¼�ɹ�\n");
//}
//
//int main()
//{                   //**������ **
//	int i;
//	int flog = 0;//����һ�˳�ϵͳ
//	classRoom x = { 0 };
//	SLNode *head;       //ͷ�ڵ�
//	ListInitiate(&head);//�����ʼ��
//	FILE* pf = fopen("admin.txt", "r+");
//	while (fscanf(pf, "%s %s", &admin[index].name, &admin[index].password) != EOF)
//		index++;
//	fclose(pf);
//	int input;
//	while (1) {
//		printf("1.ע���û�\n");
//		printf("2.��¼\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			logon();
//			break;
//		case 2:
//			signIn();
//
//			system("color f0");//����ɫ
//			printf("\n\t\t ��ǰ���ڣ� ");
//			(100);
//			system("DATE    [/T]");
//			(100);
//			printf("\n\t\t ��ǰʱ�䣺 ");
//			(100);
//			system("TIME    [/T]");
//			printf("\n\n\n\t\t\t ��  ");
//			printf("ӭ   ");
//			printf("��  ");
//			printf("�� \n\n\n\t\t\t");
//			system("pause");//��ͣ���ȴ��û��ź�
//			system("cls");  //�����Ļ
//			while (1)
//			{
//				mainMenu();
//				printf("\n������0-4ѡ���Ӳ˵�:");
//				scanf("%d", &i);
//				switch (i) {
//				case 0:
//					Exit();
//					printf("\n�����˳�ϵͳ,ллʹ��!\n");
//					flog = 1;
//					break;
//				case 1:
//					classRoomAdd(head, x);//��ӽ�����Ϣ
//					break;
//				case 2:
//					allQuery(head);//�������
//					break;
//				case 3:classRoomRevise(head);//�޸Ľ�����Ϣ
//					break;
//				case 4:
//					classRoomDel(head);//ɾ��������Ϣ
//					break;
//
//				default:
//					printf("\n������������,������0-4֮�������!\n");
//					break;
//				}
//				if (flog == 1)
//					break;          //�˳�ϵͳ
//			}
//			system("pause");
//			system("cls");
//			break;
//		}
//		
//	}
//	system("pause");
//	system("cls");   
//	//�����Ļ
//	return 0;
//}
//
//void mainMenu() {
//	printf("\n--------------------------------------------------------------------------------");
//	printf("\n");
//	printf("\n\t\t\t   ����ԤԼ����ϵͳ\n");
//	printf("\n\t\t\t\t���˵�\n");
//	printf("\n\t\t1.¼�������Ϣ\t\t2.��ʾԤԼ������Ϣ\n");
//	printf("\n\t\t3.�޸�ԤԼ������Ϣ\t\t4.ɾ��ԤԼ������Ϣ\n");
//	printf("\n\t\t0.�˳�ϵͳ\n");
//	printf("\n\n--------------------------------------------------------------------------------");
//}
//
//
//SLNode *classroomInsert(SLNode *head, classRoom x) {//�����Һ�����¼�������Ϣ����
//	SLNode *p, *q, *s;
//	p = head->next;//
//	q = (SLNode *)malloc(sizeof(SLNode));//����ռ�
//	if (q == NULL) exit(1);             //�洢�ռ����ʧ��
//
//	strcpy(q->classRoomNum, x.classRoomNum);//�ַ�������
//
//	strcpy(q->set, x.set);
//	if (head->next == NULL) {//Ϊ��
//		head->next = q;
//		head->next->next = NULL;
//	}
//	else {               //�ǿ�
//		for (; p; p->next) {//pָ��ӵ�һ�����������ƶ���ֱ��pΪ��
//			if (p->next != NULL) {   //¼��Ľ��ұ������¼�����������֮��
//				if (strlen(p->classRoomNum) < strlen(x.classRoomNum) && strlen(p->next->classRoomNum) > strlen(x.classRoomNum)) {
//					s = p->next;
//					p->next = q;
//					q->next = s;
//					break;
//				}
//				else if (strcmp(p->classRoomNum, x.classRoomNum) == 0) {
//					printf("���Һ�Ϊ%s�Ľ����Ѵ���!\n", p->classRoomNum);
//					break;
//				}
//			}
//			else if (strlen(p->classRoomNum) < strlen(x.classRoomNum) && p->next == NULL) {//�����������Ϊ���һ��
//				p->next = q;
//				q->next = NULL;      //β�巨
//				break;
//			}
//			if (strlen(p->classRoomNum) >= strlen(x.classRoomNum)) {  //ͷ�巨
//				s = head->next;
//				head->next = q;
//				q->next = s;
//				break;
//			}
//		}
//
//	}
//	printf("��¼�����!");
//	return head;
//}
//
//void classRoomInfor() {                     //���Ұ����� ����
//	printf("\n���ұ��\t\t\t����ʱ���\t\t\t���ҵص�\t\t\t��������\n");
//}
//
//void classRoomRevise(SLNode *head) {     //�޸Ĳ���
//	classRoom x;
//	char n[10];
//	SLNode *p;
//	p = head->next;
//	system("cls");
//	printf("\n������Ҫ�޸���Ϣ�Ľ��ұ��:");
//	scanf("%s", &n);
//	for (; p; p = p->next) {
//		if (strcmp(p->classRoomNum, n) == 0) {
//			printf("\n������ý��ҵ�����Ϣ!");
//			printf("��������ұ��:");
//			char tmp[100];
//			scanf("%s", tmp);
//			while (1)
//			{
//				int size = strlen(tmp);
//				if (size == 3 && tmp[1] == '0')
//					break;
//				cout << "���ұ�Ų��Ϸ�,�������" << endl;
//
//				printf("��������ұ��:");
//				scanf("%s", tmp);
//			}
//			strcpy(x.classRoomNum, tmp);
//
//			printf("���������¥��:");
//			scanf("%s", tmp);
//			while (1)
//			{
//				int size = strlen(tmp);
//				if (size == 1)
//					break;
//				cout << "����¥�㲻�Ϸ�,�������" << endl;
//				printf("���������¥��:");
//				scanf("%s", tmp);
//			}
//			strcpy(x.set, tmp);
//
//			strcpy(p->classRoomNum, x.classRoomNum);
//
//			strcpy(p->set, x.set);
//			printf("\n������Ϣ�޸ĳɹ�!");
//			break;
//		}
//	}
//	if (p == NULL)
//		printf("\n�ý��Ҳ�����!\n");
//}
//
//void classRoomDel(SLNode *head) {     //ɾ������
//	SLNode *p, *s;
//	char x[10];
//	s = head;//��ʼ��s
//	p = head->next;
//	if (head->next == NULL) {
//		printf("\nϵͳ���޽�����Ϣ!\n");
//	}
//	else {
//		system("cls");
//		printf("\n������Ҫɾ���Ľ��ҵı��:");
//		scanf("%s", &x);
//		for (; p; p = p->next) {
//			if (strcmp(p->classRoomNum, x) == 0) {
//				s->next = p->next;
//				free(p);
//				printf("\nɾ���ɹ�!�����!\n");
//				break;
//			}
//			s = p;
//		}
//		if (p == NULL)
//			printf("\nϵͳ���޴˽�����Ϣ!\n");
//	}
//}
//
//void classRoomAdd(SLNode *head, classRoom x) {   //¼�����
//	int nu;
//	system("cls");
//
//	printf("\n��������Ҫ¼��Ľ�����:");
//	int tmp = 0;
//	scanf("%d", &tmp);
//	while (1)
//	{
//		if (tmp > 0 && tmp <= 5)
//			break;
//		printf("\n��������Ҫ¼��Ľ�����(1-5֮��):");
//		scanf("%d", &tmp);
//	}
//	nu = tmp;
//	for (int n = 0; n < nu; n++) {
//		printf("\n\n");
//
//		printf("��������ұ��:");
//		char tmp[10];
//		scanf("%s", tmp);
//		while (1)
//		{
//			int size = strlen(tmp);
//			if (size == 3 && tmp[1] == '0')
//				break;
//			cout << "���ұ�Ų��Ϸ�,�������" << endl;
//
//			printf("��������ұ��:");
//			scanf("%s", tmp);
//		}
//		strcpy(x.classRoomNum, tmp);
//		printf("���������¥��:");
//		scanf("%s", tmp);
//		while (1)
//		{
//			int size = strlen(tmp);
//			if (size == 1 )
//				break;
//			cout << "����¥�㲻�Ϸ�,�������" << endl;
//			printf("���������¥��:");
//			scanf("%s", tmp);
//		}
//		strcpy(x.set, tmp);
//
//		head = classroomInsert(head, x);
//	}
//
//	printf("\n¼�����!\n");
//}
//
//
//
//void allQuery(SLNode *head) {                   //��ѯ���н�����Ϣ
//	linkView(head);
//}
//
//
//void printclassRoom(SLNode *p) {
//	printf("****************************\n");
//	printf("�� �� �� �� ��%s\t\n", p->classRoomNum);
//	printf("�� �� ¥ �㣺%s\t\n", p->set);
//
//
//}
//
//
//void  linkView(SLNode *head) {              //��ʾ���н�����Ϣ
//	SLNode *p = head;
//	while (p->next) {
//		p = p->next;
//		printclassRoom(p);
//
//	}
//}
//
//
//void Exit() { //�˳�����
//	int k = 0;
//	char s = 'Y';
//	if (k) { //�ж������Ƿ��޸ģ����Ѿ��޸İ�ָ��·��������txt�ĵ���D�̣�
//		printf("\nȷ���˳���(y/n):\n");
//		scanf("%c", &s);
//		if (s == 'y' || s == 'Y') {
//
//			printf("\n�Ѱ�ȫ�˳�!\n");
//		}
//		exit(0);
//	}
//}


//#include<iostream>
//using namespace std;
//struct ListNode
//{
//	int val;
//	ListNode* next;
//	ListNode(int x) : val(x), next(nullptr) {}
//};
//
//// 1 -> 2 -> 3 -> 4 -> 5
//ListNode *RotateList(ListNode *List)
//{
//	ListNode* prev = nullptr;
//	ListNode* cur = List;
//	while (cur)
//	{
//		ListNode* next = cur->next;
//		cur->next = prev;
//		prev = cur;
//		cur = next;
//	}
//	return prev;
//}
//
//int main()
//{
//	ListNode *Head = new ListNode(1);
//	ListNode *ListTemp = Head;
//	ListTemp->next = new ListNode(2); ListTemp = ListTemp->next;
//	ListTemp->next = new ListNode(3); ListTemp = ListTemp->next;
//	ListTemp->next = new ListNode(4); ListTemp = ListTemp->next;
//	ListTemp->next = new ListNode(5); ListTemp = ListTemp->next;
//
//	ListTemp = RotateList(Head);
//	while (ListTemp) {
//		std::cout << ListTemp->val << std::endl;
//		ListTemp = ListTemp->next;
//	}
//}


//#include<iostream>
//using namespace std;
//#include <string>
//// ��ȡӢ���Ķ��е��ʵ��������ظ����ʳ��ּ����㼸�Σ�������ֻ�����'a'-'z'��'A'-'Z'
//
//int Words_Num(std::string str)
//{
//	int left = 0, right = 0;
//	//ȥ��ǰ���ո�
//	while (str[right] == ' ')
//	{
//		left++;
//		right++;
//	}
//	int count = 0;
//	while (right < (int)str.size())
//	{
//		//�ж��Ƿ�Ϊ�ַ�
//		if (isalpha(str[right]) == false)
//		{
//			right = ++left;
//			continue;
//		}
//		while (right < (int)str.size() && str[right] != ' ')
//			right++;
//		count++;
//		right++;
//		left = right;
//	}
//	//�ж����һ���Ƿ�Ϊ����
//	if (left != right)
//		count++;
//	return count;
//}
//
//int main()
//{
//	std::string strText = "In developing driver support systems, it is important to prevent the system from intervening with the driver in the middle of corrective action because the driver support system requires a cooperative operation between controllers and drivers.";
//	std::cout << Words_Num(strText) << std::endl;
//}



//#include<stdio.h>
//
//void addArr(int* arr1, int* arr2, int* arr3, int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		arr3[i] = arr1[i] + arr2[i];
//	}
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 5,4,3,2,1 };
//	int arr3[5] = { 0 };
//	addArr(arr1, arr2, arr3, 5);
//	for (int i = 0; i < 5; i++)
//		printf("%d ", arr3[i]);
//	return 0;
//}

#include<stdio.h>
#include<string.h>
// ��ȡӢ���Ķ��е��ʵ��������ظ����ʳ��ּ����㼸�Σ�������ֻ�����'a'-'z'��'A'-'Z'
size_t myStrlen(char* str)
{
	size_t count = 0;
	while (*str != '\0')
	{
		str++;
		count++;
	}
	return count;
}

void myGets(char* arr)
{
	char ch;
	int index = 0;
	while ((ch = getchar()) != '\n')
	{
		arr[index++] = ch;
	}
	arr[index] = '\0';
}

int Words_Num(char* str)
{
	int left = 0, right = 0;
	//ȥ��ǰ���ո�
	while (str[right] == ' ')
	{
		left++;
		right++;
	}
	int count = 0;
	while (right < (int)myStrlen(str))
	{
		//�ж��Ƿ�Ϊ�ַ�
		if (str[right] < 'A' || str[right] >= 'Z'&&str[right]<'a' || str[right]>'z')
		{
			right = ++left;
			continue;
		}
		while (right < (int)myStrlen(str) && str[right] != ' ')
			right++;
		count++;
		right++;
		left = right;
	}
	//�ж����һ���Ƿ�Ϊ����
	if (left != right)
		count++;
	return count;
}

int main()
{
	char arr[80] = " t hello word is ha  ";
	myGets(arr);
	int count = Words_Num(arr);
	printf("%d\n", count);
	int flag[255] = { 0 };
	for (int i = 0; i < (int)myStrlen(arr); i++)
	{
		flag[arr[i]] ++;
	}
	for (int i = 0; i < 255; i++)
	{
		if (flag[i])
			printf("%c:%d\n", i, flag[i]);
	}
	return 0;
}