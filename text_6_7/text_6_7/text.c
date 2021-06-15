#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<string.h>
//766. �������ľ���
//https://leetcode-cn.com/problems/toeplitz-matrix/
bool isToeplitzMatrix(int** matrix, int matrixSize, int* matrixColSize)
{
	int row = matrixSize, col = *matrixColSize;
	for (int i = 0; i < row-1; i++)
	{
		for (int j = 0; j < col-1; j++)
		{
			if (matrix[i][j] != matrix[i + 1][j + 1])
				return false;
		}
	}
	return true;
}

//344. ��ת�ַ���
//https://leetcode-cn.com/problems/reverse-string/
void reverseString(char* s, int sSize)
{
	int left = 0, right = sSize - 1;
	while (left < right)
	{
		char tmp = s[left];
		s[left] = s[right];
		s[right] = tmp;
		left++;
		right--;
	}
}

char * addStrings(char * num1, char * num2)
{
	int size1 = strlen(num1);
	int size2 = strlen(num2);

	int size = size1 > size2 ? size1 : size2;
	char* arr = malloc(sizeof(char)*(size + 2));
	int i = size1 - 1, j = size2 - 1, len = 0;

	int flag = 0;
	while (i >= 0 || j >= 0)
	{
		char data1 = '0', data2 = '0';
		if (i >= 0)
			data1 = num1[i];
		if (j >= 0)
			data2 = num2[j];
		int sum = data1 + data2 + flag - '0' - '0';
		if (sum > 9)
		{
			sum %= 10;
			flag = 1;
		}
		else
			flag = 0;
		arr[len++] = sum + '0';
		i--;
		j--;
	}
	if (flag == 1)
		arr[len++] = '1';
	int left = 0, right = len - 1;
	//��ת
	while (left < right)
	{
		char tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
	if (flag == 1)
		arr[size + 1] = '\0';
	else
		arr[size] = '\0';
	return arr;
}


char * addBinary(char * a, char * b)
{
	int sizea = strlen(a), sizeb = strlen(b);
	int size = sizea > sizeb ? sizea + 2 : sizeb + 2;
	char* arr = malloc(sizeof(char)*size);
	int i = sizea - 1, j = sizeb - 1, flag = 0, len = 0;
	while (i >= 0 || j >= 0)
	{
		int data1 = 0, data2 = 0;
		if (i >= 0)
			data1 = a[i] - '0';
		if (j >= 0)
			data2 = b[j] - '0';
		int sum = data1 + data2 + flag;
		if (sum >= 2)
		{
			sum %= 2;
			flag = 1;
		}
		else
			flag = 0;
		arr[len++] = sum + '0';
		i--;
		j--;
	}
	if (flag == 1)
		arr[len++] = '1';
	int left = 0, right = len - 1;
	//��ת
	while (left < right)
	{
		char tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
	arr[len] = '\0';
	return arr;
}

//231. 2 ����
bool isPowerOfTwo(int n)
{
	if (n == 0)
		return false;
	while (n % 2 == 0)
	{
		n /= 2;
		if (n == 0)
			break;
	}
	//0�η�����1
	if (n == 0 || n == 1)
		return true;
	else
		return false;
}
//922. ����ż�������� II
int* sortArrayByParityII(int* nums, int numsSize, int* returnSize)
{
	*returnSize = numsSize;
	int* arr = malloc(sizeof(int)*numsSize);
	int i = 0, add = 0, even = 1;
	for (int i = 0; i < numsSize; i++)
	{
		if (nums[i] % 2 == 0)
		{
			arr[add] = nums[i];
			add += 2;
		}
		else
		{
			arr[even] = nums[i];
			even += 2;
		}
	}
	return arr;
}

int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize)
{
	int* arr = malloc(sizeof(int)*(numsSize + 1));
	memset(arr, 0, 4 * (numsSize + 1));
	for (int i = 0; i < numsSize; i++)
	{
		arr[nums[i]] += 1;
	}
	*returnSize = 0;
	for (int i = 1; i <= numsSize; i++)
	{
		if (arr[i] == 0)
		{
			arr[*returnSize] = i;
			(*returnSize)++;
		}
	}
	return arr;
}

//832. ��תͼ��
int** flipAndInvertImage(int** image, int imageSize, int* imageColSize, int* returnSize, int** returnColumnSizes)
{
	*returnSize = imageSize;
	*returnColumnSizes = imageColSize;
	for (int i = 0; i < imageSize; i++)
	{
		int left = 0, right = (*imageColSize) - 1;
		while (left < right)
		{
			if (image[i][left] == image[i][right])
			{
				image[i][left] ^= 1;
				image[i][right] ^= 1;
			}
			left++;
			right--;
		}
		if (left == right)
			image[i][left] ^= 1;
	}
	return image;
}

//485. ������� 1 �ĸ���
int findMaxConsecutiveOnes(int* nums, int numsSize)
{
	int i = 0, count = 0, max = 0;
	while (i < numsSize)
	{
		while (i < numsSize && nums[i] == 1)
		{
			i++;
			count++;
		}
		if (count > max)
			max = count;
		count = 0;
		i++;
	}
	return max;
}

//561. ������ I
//ʹ��ð�ݳ�ʱ
int Cmp(const void* a, const void* b)
{
	return *((int*)a) - *((int*)b);
}

int arrayPairSum(int* nums, int numsSize)
{
	//�����ż��λ���
	qsort(nums, numsSize, sizeof(int), Cmp);
	int sum = 0;
	for (int i = 0; i < numsSize; i += 2)
	{
		sum += nums[i];
	}
	return sum;
}
//int main()
//{
//	int arr[] = { 1,4,3,2 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//
//	int sum = arrayPairSum(arr, size);
//	printf("%d ", sum);
//	return 0;
//}


//717. 1������2�����ַ�
bool isOneBitCharacter(int* bits, int bitsSize)
{
	int i = 0;
	while (i < bitsSize - 1)
	{
		if (bits[i] == 1)
			i += 2;
		else
			i++;
	}
	if (i == bitsSize - 1)
		return true;
	else
		return false;
}

//��ָ Offer 25. �ϲ��������������
typedef struct ListNode
{
	int val;
	struct ListNode *next;
}ListNode;
struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2)
{
	if (l1 == NULL)
		return l2;
	if (l2 == NULL)
		return l1;

	struct ListNode* head = NULL, *tmp = NULL;
	if (l1->val < l2->val)
	{
		head = l1;
		l1 = l1->next;
	}
	else
	{
		head = l2;
		l2 = l2->next;
	}
	tmp = head;
	while (l1!= NULL && l2!= NULL)
	{
		if (l1->val < l2->val)
		{
			tmp->next = l1;
			tmp = l1;
			l1 = l1->next;
		}
		else
		{
			tmp->next = l2;
			tmp = l2;
			l2 = l2->next;
		}
	}
	if (l1 != NULL)
		tmp->next = l1;
	if (l2 != NULL)
		tmp->next = l2;
	return head;
}
//int main()
//{
//	ListNode* p1 = malloc(sizeof(ListNode));
//	p1->val = 1;
//
//	ListNode* p2 = malloc(sizeof(ListNode));
//	p2->val = 2;
//
//	ListNode* p3 = malloc(sizeof(ListNode));
//	p3->val = 4;
//
//	ListNode* p4 = malloc(sizeof(ListNode));
//	p4->val = 1;
//
//	ListNode* p5 = malloc(sizeof(ListNode));
//	p5->val = 3;
//
//	ListNode* p6 = malloc(sizeof(ListNode));
//	p6->val = 4;
//	p1->next = p2;
//	p2->next = p3;
//	p3->next = NULL;
//
//	p4->next = p5;
//	p5->next = p6;
//	p6->next = NULL;
//
//	ListNode* head = mergeTwoLists(p1, p4);
//	while (head)
//	{
//		printf("%d ", head->val);
//		head = head->next;
//	}
//	return 0;
//}

//��ָ Offer 21. ��������˳��ʹ����λ��ż��ǰ��
int* exchange(int* nums, int numsSize, int* returnSize)
{
	int* arr = malloc(sizeof(int)*numsSize);
	int left = 0, right = numsSize - 1;
	for (int i = 0; i < numsSize; i++)
	{
		if (nums[i] % 2 == 1)
			arr[left++] = nums[i];
		else
			arr[right--] = nums[i];
	}
	*returnSize = numsSize;
	return arr;
}

#include<stdio.h>
int main()
{
	char arr[100] = { 0 };
	char py[][10] = { "ling","yi","er","san","si","wu","liu","qi","ba","jiu" };
	scanf("%s", arr);
	int size = strlen(arr);
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += arr[i] - '0';
	}
	int a[5] = { 0 };
	int i = 0;
	while (sum)
	{
		a[i++] = sum % 10;
		sum /= 10;
	}
	i -= 1;
	for (i; i >= 0; i--)
	{
		printf("%s", py[a[i]]);
		if (i != 0)
			printf(" ");
	}
	return 0;
}