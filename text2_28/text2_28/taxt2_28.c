//#include<stdio.h>
////��ת����
////����һ
////void reverse(int* nums, int start, int end)
////{
////	while (start < end)
////	{
////		int tmp = nums[start];
////		nums[start] = nums[end];
////		nums[end] = tmp;
////		start++;
////		end--;
////	}
////}
////void rotate(int* nums, int numsSize, int k)
////{
////	k = k % numsSize;//�ƶ��������������Сʱ
////	reverse(nums, 0, numsSize - 1);
////	reverse(nums, 0, k - 1);
////	reverse(nums, k, numsSize - 1);
////}
////����2
//void rotate(int* nums, int numsSzie, int k)
//{
//	for (int i = 0; i < k; i++)
//	{
//		int tmp = nums[numsSzie - 1];
//		for (int j = numsSzie - 1; j > 0; j--)
//		{
//			nums[j] = nums[j - 1];
//		}
//		nums[0] = tmp;
//	}
//}
//int main()
//{
//	int arr[6] = { 1,2,3,4,5,6 };
//	rotate(arr, 6, 11);
//	int i = 0;
//	for (i = 0; i < 6; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//void reverse(int* nums, int start, int end)
//{
//	while (start < end)
//	{
//		int tmp = nums[start];
//		nums[start] = nums[end];
//		nums[end] = tmp;
//		start++;
//		end--;
//	}
//}
//#include<stdio.h>
//int main()
//{
//	int arr[6] = { 1,2,3,4,5,6 };
//	reverse(arr, 0, 5);
//	int i = 0;
//	for (i = 0; i < 6; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//������ʽ���������
//https://leetcode-cn.com/problems/add-to-array-form-of-integer/
#include<stdio.h>
#include<stdlib.h>
int* addToArrayForm(int* A, int ASize, int K, int* returnSize)
{
	int KSize = 0;
	int tmp = K;
	while (tmp)
	{
		KSize++;
		tmp /= 10;
	}
	int size = ASize < KSize ? KSize : ASize;
	int* retArr = malloc(sizeof(int)*(size + 1));
	int Ai = ASize - 1;
	*returnSize = 0;
	int nextsum = 0;
	while (size--)
	{
		//��ֹ��ASize С�� KSize ʱ���Խ�����
		int a = 0;
		if (Ai >= 0)
		{
			a = A[Ai];
		}
		//��ͬ��λ���
		int ret = a + K % 10 + nextsum;
		Ai--;
		K /= 10;
		//�ж��Ƿ���Ҫ��λ
		if (ret > 9)
		{
			ret = ret - 10;
			nextsum = 1;
		}
		else
		{
			nextsum = 0;
		}
		retArr[*returnSize] = ret;
		(*returnSize)++;
	}
	//�ж�һ���ǵ���������Ƿ��н�λ
	if (nextsum == 1)
	{
		retArr[*returnSize] = 1;
		(*returnSize)++;
	}
	int left = 0, right = *returnSize - 1;
	//����ʱ�ǵ��Ŵ� �ģ���������һ��
	while (left < right)
	{
		int tmp = retArr[left];
		retArr[left] = retArr[right];
		retArr[right] = tmp;
		left++;
		right--;
	}
	return retArr;
}
int main()
{
	int arr[] = {2,1,5};
	int k = 806;
	int returnSize = 0;
	int* arr1 = addToArrayForm(arr, 3, k, &returnSize);

	for (int i = 0; i < returnSize; i++)
	{
		printf("%d ", arr1[i]);
	}
	free(arr1);
	arr1 = NULL;
	return 0;
}