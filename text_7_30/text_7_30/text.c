﻿#define _CRT_SECURE_NO_WARNINGS


////171. Excel表列序号
//#include<stdio.h>
//#include<string.h>
//int titleToNumber(char * columnTitle)
//{
//	int size = strlen(columnTitle);
//	int sum = 0, multiple = 1;
//	int  i = 0;
//	for (i = size - 1; i >= 0; i--)
//	{
//		int k = columnTitle[i] - 'A' + 1;
//		sum += multiple * k;
//		multiple *= 26;
//	}
//	return sum;
//}
//
//int main()
//{
//	char columnTitle[] = "ZY";
//	int len = titleToNumber(columnTitle);
//	printf("%d", len);
//	return 0;
//}

////434. 字符串中的单词数
//#include<stdio.h>
//int countSegments(char * s)
//{
//	int size = strlen(s);
//	int begin = 0, end = size, cur = 0, count = 0;
//	while (cur <= end && end != 0)
//	{
//		if (s[cur] != ' '&&s[cur] != '\0')
//			cur++;
//		else
//		{
//			if (s[begin] != ' '&&s[begin] != '\0')
//				count++;
//			cur++;
//			begin = cur;
//		}
//	}
//	return count;
//}
//int main()
//{
//	char nums[] = "   ";
//	int len = countSegments(nums);
//	printf("%d", len);
//	return 0;
//}

;
//#include<stdio.h>
//int lengthOfLongestSubstring(char * s)
//{
//	int size = strlen(s);
//	int left = 0, right = 0;
//	int maxleng = 0;
//	int arr[256] = { 0 };//用来记录出现的次数
//	while (right < size)
//	{
//		arr[s[right]]++;
//
//		while (arr[s[right]] > 1)//直到找到和s[right]相同的下一个位置才停止
//		{
//			arr[s[left]]--;
//			left++;
//		}
//
//		if (right - left + 1 > maxleng)
//			maxleng = right - left + 1;
//
//		right++;
//	}
//	return maxleng;
//}
//int main()
//{
//	char s[] = "pwwkew";
//	int len = lengthOfLongestSubstring(s);
//	printf("%d", len);
//	return 0;
//}

////1008 数组元素循环右移问题 (20 分)
//#include<stdio.h>
//void Swap(int* nums, int left, int right)
//{
//	while (left <= right)
//	{
//		int tmp = nums[left];
//		nums[left] = nums[right];
//		nums[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int n, m;
//	scanf("%d %d", &n, &m);
//	int* arr = malloc(sizeof(int)*n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	m = m % n;
//	int left = n - m;
//	Swap(arr, left, n - 1);
//	Swap(arr, 0, left - 1);
//	Swap(arr, 0, n - 1);
//	for (i = 0; i < n; i++)
//	{
//		printf("%d", arr[i]);
//		if (i < n - 1)
//			printf(" ");
//	}
//	free(arr);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int arr1[10][10], arr2[10][10];
//	int i = 0, j = 0;
//	int n, m;
//	scanf("%d %d", &n, &m);
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &arr1[i][j]);
//		}
//	}
//
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &arr2[i][j]);
//			if (arr1[i][j] != arr2[i][j])
//				break;
//		}
//	}
//	if (j >= m)
//		printf("Yes\n");
//	else
//		printf("No\n");
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int arr1[10][10] = { 0 };
//	int n, m;
//	scanf("%d %d", &n, &m);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &arr1[i][j]);
//		}
//	}
//
//	for (i = 0; i < m; i++)
//	{
//		int j = 0;
//		for (j = 0; j < n; j++)
//		{
//			printf("%d ", arr1[j][i]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int* p = arr;
//	for (i = 0; i < size; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int n = 0, sum = 0;
//	scanf("%d", &n);
//	int prev = 0;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		prev = prev * 10 + n;
//		sum += prev;
//	}
//	printf("%d", sum);
//	return 0;
//}


//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100000; i++)
//	{
//		int tmp = i, count = 0;
//		long long sum = 0;
//		while (tmp)
//		{
//			count++;
//			tmp /= 10;
//		}
//		tmp = i;
//		while (tmp)
//		{
//			sum += (int)pow(tmp % 10, count);
//			tmp /= 10;
//		}
//		if (sum == i)
//			printf("%d ", i);
//	}
//	return 0;
//}

//#include<stdio.h>
//int maxProduct(int* nums, int numsSize)
//{
//	int i = 0, max = nums[0];
//	for (i = 0; i < numsSize; i++)
//	{
//		int j = 0, sum = 1;
//		for (j = i; j < numsSize; j++)
//		{
//			sum *= nums[j];
//			if (sum > max)
//				max = sum;
//		}
//	}
//	return max;
//}
//int main()
//{
//	int nums[] = { 2,3,-2,4 };
//	int size = sizeof(nums) / sizeof(nums[0]);
//	int max = maxProduct(nums, size);
//	printf("%d", max);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = (char)(-1 - i);
//	}
//	printf("%d\n", strlen(a));
//	return 0;
//}

//#include<stdio.h>
//int fun(char *s)
//{
//	char *p = s;
//	while (*p != '\0') {
//		p++;
//	}
//	return(p - s);
//}
//int main()
//{
//	printf("%d\n", fun("goodbye!"));
//}

//#include<stdio.h>
//int main()
//{
//	//‭00000000000000000000000010100101‬
//	//000001111111111111111111 
//	//00000000000000000000000011111010
//	unsigned char a = 0xA5;
//	unsigned char b = ~a >> 5;
//	printf("%d\n", b);//250
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	const int i = 0;
//	int *j = (int *)&i;
//	*j = 1;
//	printf("%d,%d", i, *j);
//}

//#include<stdio.h>
//void fun(int x, int y, int *c, int *d)
//{
//	*c = x + y;
//	*d = x - y;
//}
//int main()
//{
//	int a = 4, b = 3, c = 0, d = 0;
//	fun(a, b, &c, &d);
//	printf("%d %d\n", c, d);
//}



////回文数判断
//#include<stdio.h>
//#include<stdbool.h>
//bool IsPalindrome(int x)
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int tmp = x;
//	while (tmp)
//	{
//		arr[i++] = tmp % 10;
//		tmp /= 10;
//	}
//	int left = 0, right = i - 1;
//	while (left < right)
//	{
//		if (arr[left] != arr[right])
//			break;
//		left++;
//		right--;
//	}
//	if (left < right)
//		return false;
//	return true;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d", IsPalindrome(n));
//	return 0;
//}

//#include<stdio.h>
//void main()
//{
//	char *szStr = "abcde";
//	szStr += 2;
//	printf("%lu\n", szStr);
//	return;
//}


////1027 打印沙漏 (20 分)
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	getchar();//读掉空格
//
//	char flag = getchar();
//	int max = 1, count = 1, sum = 0;
//	while (1)
//	{
//		sum += max + 2;
//		if (sum * 2 + 1 > n)
//			break;
//		max += 2;
//		count++;
//	}
//
//	int i = 0;
//	for (i = 0; i < count; i++)
//	{
//		int z = 0;
//		for (z = i; z > 0; z--)
//			printf(" ");
//
//		int j = 0;
//		for (j = max; j > 0; j--)
//		{
//			printf("%c", flag);
//		}
//		printf("\n");
//		max -= 2;
//	}
//	max = 1;
//	for (i = count - 2; i >= 0; i--)
//	{
//		int z = 0;
//		for (z = i; z > 0; z--)
//			printf(" ");
//
//
//		int j = 0;
//		max += 2;
//		for (j = 0; j < max; j++)
//		{
//			printf("%c", flag);
//		}
//		printf("\n");
//	}
//	printf("%d", n - (sum * 2 + 1 - (max + 2) * 2));
//	return 0;
//}



//#include<stdio.h>
//#include<stdbool.h>
//bool isThree(int n)
//{
//	int count = 0;
//	if (n < 4)
//		return false;
//	for (int i = 2; i < n; i++)
//	{
//		if (n%i == 0)
//			count++;
//		if (count >= 2)
//			break;
//	}
//	if (count != 1)
//		return false;
//	return true;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d", isThree(n));
//	return 0;
//}

////5831. 你可以工作的最大周数
//#include<stdio.h>
//long long numberOfWeeks(int* milestones, int milestonesSize)
//{
//	int max = 0;
//	long long sum = 0;
//	int i = 0;
//	for(i=0;i<milestonesSize;i++)
//	{
//		sum += milestones[i];
//		if (milestones[i] > max)
//			max = milestones[i];
//	}
//	if (max * 2 - 1 < sum)
//		return sum;
//	return (sum - max) * 2 + 1;
//}
//int main()
//{
//	int nums[] = { 1,2,3 };
//	int size = sizeof(nums) / sizeof(nums[0]);
//	printf("%lld", numberOfWeeks(nums, size));
//	return 0;
//}

////1929. 数组串联
//#include<stdio.h>
//#include<stdlib.h>
//int* getConcatenation(int* nums, int numsSize, int* returnSize)
//{
//	int* ret = malloc(sizeof(int)*numsSize * 2);
//	*returnSize = 0;
//	int i = 0;
//	for (i = 0; i < 2 * numsSize; i++)
//	{
//		ret[(*returnSize)++] = nums[i%numsSize];
//	}
//	return ret;
//}
//int main()
//{
//	int nums[] = { 1,2,3,4,5 };
//	int size = sizeof(nums) / sizeof(nums[0]);
//	int returnSize = 0;
//	int i = 0;
//	int* ret = getConcatenation(nums, size, &returnSize);
//	for (i = 0; i < returnSize; i++)
//		printf("%d ", ret[i]);
//	free(ret);
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int carry = 0;
//	int div = 0;
//	char arr[1001] = "0";
//	scanf("%s %d", arr, &div);
//	int size = strlen(arr);
//	int i = 0, flag = 0;
//	for (i = 0; i < size; i++)
//	{
//		int tmp = carry * 10 + (arr[i] - '0');
//		if (tmp / div != 0 || flag || size == 1)
//		{
//			printf("%d", tmp / div);
//			flag = 1;
//		}
//		carry = tmp % div;
//	}
//	printf(" %d", carry);
//	return 0;
//}


////1016 部分A+B (15 分)
//#include<stdio.h>
//int NewNumber(int x, int p)
//{
//	int number = 0;
//	while (x)
//	{
//		if (x % 10 == p)
//			number = number * 10 + p;
//		x /= 10;
//	}
//	return number;
//}
//int main()
//{
//	int a, da, b, db, pa, pb;
//	scanf("%d %d %d %d", &a, &da, &b, &db);
//	pa = NewNumber(a, da);
//	pb = NewNumber(b, db);
//	printf("%d", pa + pb);
//	return 0;
//}


////1018 锤子剪刀布 (20 分)
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int awin = 0, adraw = 0, afail = 0;
//	int bwin = 0, bdraw = 0, bfail = 0;
//
//	char a, b;
//	scanf("%d", &n);
//	getchar();
//	int a1 = 0, b1 = 0, c1 = 0;
//	int a2 = 0, b2 = 0, c2 = 0;
//	while (n)
//	{
//		scanf("%c %c", &a, &b);
//		getchar();
//		if (a == 'C'&&b == 'J' || a == 'J'&&b == 'B' || a == 'B'&&b == 'C')
//		{
//			awin++;
//			bfail++;
//			if (a == 'C')
//				c1++;
//			else if (a == 'B')
//				b1++;
//			else
//				a1++;
//		}
//		else if (a == b)
//		{
//			adraw++;
//			bdraw++;
//		}
//		else if(b == 'C'&&a == 'J' || b == 'J'&&a == 'B' || b == 'B'&&a == 'C')
//		{
//			bwin++;
//			afail++;
//			if (b == 'C')
//				c2++;
//			else if (b == 'B')
//				b2++;
//			else
//				a2++;
//		}
//		n--;
//	}
//	printf("%d %d %d\n", awin, adraw, afail);
//	printf("%d %d %d\n", bwin, bdraw, bfail);
//
//
//	if (b1 >= a1 && b1 >= c1)
//		printf("B");
//	else if (c1 >= b1 && c1 >= a1)
//		printf("C");
//	else if (a1 >= b1 && a1 >= c1)
//		printf("J");
//
//	printf(" ");
//
//	if (b2 >= a2 && b2 >= c2)
//		printf("B");
//	else if (c2 >= b2 && c2 >= a2)
//		printf("C");
//	else if (a2 >= b2 && a2 >= c2)
//		printf("J");
//	return 0;
//}


////1023 组个最小数 (20 分)
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 1; i < 10; i++)
//	{
//		if (arr[i] != 0)
//		{
//			printf("%d", arr[i]);
//			arr[i]--;
//			break;
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		while (arr[i])
//		{
//			printf("%d", i);
//			arr[i]--;
//		}
//	}
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[101];
//	gets(arr);
//	int size = strlen(arr);
//	int left = 0, right = size - 1;
//	while (left < right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//	printf("%s", arr);
//	return 0;
//}


//#include<stdio.h>
//void PrintDiamond(int n)
//{
//	int i = 0, flag = 1;
//	//上半部分
//	for (i = 0; i < n; i++)
//	{
//		int z = n;
//		for (z = n - i - 1; z > 0; z--)
//		{
//			printf("  ");
//		}
//		int j = 0;
//		for (j = 0; j < flag; j++)
//		{
//			printf("%c ", '*');
//		}
//		flag += 2;
//		printf("\n");
//	}
//	flag -= 2;//上半部分多加一个2
//	//下半部分
//	for (i -= 1; i > 0; i--)
//	{
//		int z = 0;
//		for (z = 0; z < n - i; z++)
//		{
//			printf("  ");
//		}
//		int j = 0;
//		flag -= 2;
//		for (j = 0; j < flag; j++)
//		{
//			printf("%c ", '*');
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	PrintDiamond(n);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int money = 0;
//	int count = 0, flag = 0;
//	scanf("%d", &money);
//	count += money;
//	flag = money;
//	while (flag > 2)
//	{
//		count += flag / 2;
//		int tmp = flag % 2;
//		flag = flag / 2 + tmp;
//	}
//	printf("%d", count);
//	return 0;
//}

////137. 只出现一次的数字 II
//#include<stdio.h>
//int singleNumber(int* nums, int numsSize)
//{
//	int i = 0;
//	int arr[32] = { 0 };
//	for (i = 0; i < numsSize; i++)
//	{
//		int falg = 1, total = 0;
//		unsigned tmp = nums[i];
//		int insert = 31;
//		while (tmp)
//		{
//			if (tmp & 1)
//				arr[insert] += 1;
//			tmp >>= 1;
//			insert--;
//		}
//	}
//	int ret = 0, j = 0;
//	for (i = 31; i >= 0; i--)
//	{
//		if (arr[i] % 3)
//			ret += (unsigned)1 << j;
//		j++;
//	}
//	return ret;
//}
//int main()
//{
//	int nums[] = { -2,-2,1,1,4,1,4,4,-4,-2 };
//	int size = sizeof(nums) / sizeof(nums[0]);
//	printf("%d", singleNumber(nums, size));
//	return 0;
//}


////1042 字符统计 (20 分)
//#include<stdio.h>
//int main()
//{
//	char ch;
//	int arr[26] = { 0 };
//	while (~scanf("%c", &ch))
//	{
//		if (ch >= 'a'&&ch <= 'z' || ch >= 'A'&&ch <= 'Z')
//		{
//			if (ch >= 'a')
//				arr[ch - 32 - 'A']++;
//			else
//				arr[ch - 'A']++;
//		}
//	}
//	int max = arr[0];
//	char maxletter = 'a';
//	int i = 0;
//	for (i = 0; i < 26; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//			maxletter = i + 'a';
//		}
//
//	}
//	printf("%c %d", maxletter, max);
//	return 0;
//}


////229. 求众数 II
//
//#include<stdio.h>
//#include<stdlib.h>
//void Sort(int* nums, int numsSize)
//{
//	int i = 0;
//	for (i = 0; i < numsSize - 1; i++)
//	{
//		int end = i, flag = nums[end + 1];
//		while (end >= 0)
//		{
//			if (nums[end] > flag)
//			{
//				nums[end + 1] = nums[end];
//				end--;
//			}
//			else
//				break;
//		}
//		nums[end + 1] = flag;
//	}
//}
//int* majorityElement(int* nums, int numsSize, int* returnSize)
//{
//	int* ret = malloc(sizeof(int) * 3);
//	*returnSize = 0;
//	if (numsSize == 1)
//	{
//		ret[(*returnSize)++] = nums[0];
//		return ret;
//	}
//
//	if (numsSize == 2)
//	{
//		if (nums[1] == nums[0])
//			ret[(*returnSize)++] = nums[0];
//		else
//		{
//			ret[(*returnSize)++] = nums[0];
//			ret[(*returnSize)++] = nums[1];
//		}
//		return ret;
//	}
//	Sort(nums, numsSize);
//	int k = numsSize / 3;
//
//	int cur = 0, begin = 0;
//	while (cur < numsSize)
//	{
//		if (nums[cur] == nums[begin])
//		{
//			cur++;
//		}
//		else
//		{
//			if (cur - begin > k)
//			{
//				ret[(*returnSize)++] = nums[begin];
//			}
//			begin = cur;
//			cur++;
//		}
//	}
//	if (cur - begin > k)
//		ret[(*returnSize)++] = nums[begin];
//	return ret;
//}
//int main()
//{
//	int nums[] = { 8,8,8,8 };
//	int size = sizeof(nums) / sizeof(nums[0]);
//	int returnSize = 0;
//	int* ret = majorityElement(nums, size, &returnSize);
//	int i = 0;
//	for (i = 0; i < returnSize; i++)
//		printf("%d ", ret[i]);
//	free(ret);
//	return 0;
//}

////43. 字符串相乘
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//char * multiply(char * num1, char * num2)
//{
//	int size1 = strlen(num1), size2 = strlen(num2);
//	char* ret = malloc(sizeof(char)*(size1 + size2 + 2));
//	if (*num1 == '0' || *num2 == '0')
//	{
//		ret[0] = '0';
//		ret[1] = '\0';
//		return ret;
//	}
//
//	int i = 0, insert = -1;
//	memset(ret, '0', size1 + size2 + 2);
//
//	int carry = 0, tmp = 0;
//	for (i = size2 - 1; i >= 0; i--)
//	{
//		int j = 0;
//		insert += 1;
//		tmp = insert;
//		for (j = size1 - 1; j >= 0; j--)
//		{
//			int sum = ((num2[i] - '0') * (num1[j] - '0') + carry + ret[tmp] - '0');
//			carry = sum / 10;
//			ret[tmp++] = (sum % 10) + '0';
//		}
//		if (carry)
//		{
//			ret[tmp] = (carry + ret[tmp]);
//			carry = 0;
//			tmp++;
//		}
//	}
//	ret[tmp] = '\0';
//	int left = 0, right = tmp - 1;
//	while (left<right)
//	{
//		char tmp = ret[left];
//		ret[left] = ret[right];
//		ret[right] = tmp;
//		left++;
//		right--;
//	}
//	return ret;
//}
//int main()
//{
//	char num1[111], num2[111];
//	scanf("%s %s", &num1, &num2);
//	char* ret = multiply(num1, num2);
//	printf("%s", ret);
//	free(ret);
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[5] = { 0 };
//	for (i = 0; i <= 7; i++)
//	{
//		arr[i] = 0;
//		printf("%p\n", &arr[i]);//死循环
//	}
//	return 0;
//}


//#include<stdio.h>
//void adjustArr(int* arr,int size)
//{
//	int left = 0, right = size - 1;
//	while (left < right)
//	{
//		//先在左边找偶数
//		while (left < right && arr[left] % 2)
//		{
//			left++;
//		}
//		//右边找奇数
//		while (right > left && arr[right] % 2 == 0)
//		{
//			right--;
//		}
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int nums[] = { 1,2,3,4,5,6,7,8,9,1,1,1 };
//	int size = sizeof(nums) / sizeof(nums[0]);
//	int i = 0;
//	adjustArr(nums, size);
//
//	for (i = 0; i < size; i++)
//		printf("%d ", nums[i]);
//	return 0;
//}



//#include<stdio.h>
//#include<assert.h>
//void my_strcpy(char* dest, const char* src)
//{
//	assert(dest);
//	assert(src);
//	while (*dest++ = *src++);
//}
//int main()
//{
//	char arr1[20];
//	char arr2[] = "hello";
//	my_strcpy(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int m = 10;
//	int n = 20;
//	//const int* p = &m;
//	//p = &n;
//	//printf("%d", *p);
//
//	int* const p = &m;
//	*p = n;
//	printf("%d", *p);
//	return 0;
//}




//#include<stdio.h>
//#include<assert.h>
//unsigned my_strlen(const char* nums)
//{
//	assert(nums);
//	int count = 0;
//	while (*nums++)
//	{
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char nums[] = "hello";
//	int ret = my_strlen(nums);
//	printf("%d", ret);
//	return 0;
//}

////611. 有效三角形的个数
//#include<stdio.h>
//#include<assert.h>
//void sort(int* nums, int numsSize)
//{
//	assert(nums);
//	int i = 0;
//	for (i = 0; i < numsSize - 1; i++)
//	{
//		int end = i, flag = nums[end + 1];
//		while (end >= 0)
//		{
//			if (nums[end] < flag)
//			{
//				nums[end + 1] = nums[end];
//				end--;
//			}
//			else
//				break;
//		}
//		nums[end + 1] = flag;
//	}
//}
//int triangleNumber(int* nums, int numsSize)
//{
//	sort(nums, numsSize);
//
//	int i = 0, count = 0;
//	for (i = 0; i < numsSize; i++)
//	{
//		int left = i + 1, right = numsSize - 1;
//		while (left < right)
//		{
//			if (nums[left] + nums[right] > nums[i])
//			{
//				count += right - left;
//				left++;
//			}
//			else
//				right--;
//		}
//	}
//	return count;
//}
//int main()
//{
//	int nums[] = { 2,2,3,4 };
//	int size = sizeof(nums) / sizeof(nums[0]);
//	int len = triangleNumber(nums, size);
//	printf("%d", len);
//	return 0;
//}

//
//#include<stdio.h>
//#include<assert.h>
//char* my_strcpy(char* tar, const char* str)
//{
//	assert(tar);
//	assert(str);
//	char* ret = tar;
//	while (*tar++ = *str++);
//	return ret;
//}
//int main()
//{
//	char arr1[10];
//	char arr2[] = "hello";
//	char* ret = my_strcpy(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}


//#include<stdio.h>
//void Sort(int* nums, int numsSize)
//{
//	int i = 0;
//	for (i = 0; i < numsSize - 1; i++)
//	{
//		int end = i, flag = nums[end + 1];
//		while (end>=0)
//		{
//			if (nums[end] > flag)
//			{
//				nums[end + 1] = nums[end];
//				end--;
//			}
//			else
//				break;
//		}
//		nums[end + 1] = flag;
//	}
//}
//int triangleNumber(int* nums, int numsSize)
//{
//	Sort(nums, numsSize);
//	int i = 0, count = 0;
//	for (i = 0; i < numsSize; i++)
//	{
//		int j = 0;
//		for (j = i + 1; j < numsSize; j++)
//		{
//			int left = j + 1, right = numsSize - 1, mid = 0;
//			int flag = j;
//			while (left <= right)
//			{
//				mid = left + (right - left) / 2;
//				if (nums[i] + nums[j] > nums[mid])
//				{
//					flag = mid;
//					left = mid + 1;
//				}
//				else
//					right = mid - 1;
//			}
//			count += flag - j;
//		}
//	}
//	return count;
//}
//int main()
//{
//	int nums[] = { 2,2,3,4 };
//	int size = sizeof(nums) / sizeof(nums[0]);
//	int ret = triangleNumber(nums, size);
//	printf("%d", ret);
//	return 0;
//}


////26. 删除有序数组中的重复项
//#include<stdio.h>
//#include<assert.h>
//int removeDuplicates(int* nums, int numsSize)
//{
//	assert(nums);
//	if (numsSize < 2)
//		return numsSize;
//	int fast = 1, slow = 1;
//	while (fast < numsSize)
//	{
//		if (nums[fast] != nums[slow - 1])
//		{
//			nums[slow++] = nums[fast++];
//		}
//		else
//			fast++;
//	}
//	return slow;
//}
//int main()
//{
//	int nums[] = { 1,2,3,3,4,5,5,6 };
//	int size = sizeof(nums) / sizeof(nums[0]);
//	int len = removeDuplicates(nums, size);
//	int i = 0;
//	for (i = 0; i < len; i++)
//		printf("%d ", nums[i]);
//	return 0;
//}


//#include<stdio.h>
//#include<assert.h>
//int removeDuplicates(int* nums, int numsSize)
//{
//	assert(nums);
//	if (numsSize < 2)
//		return numsSize;
//	int fast = 2, slow = 2;
//	while (fast < numsSize)
//	{
//		if (nums[fast] != nums[slow - 2])
//		{
//			nums[slow++] = nums[fast++];
//		}
//		else
//			fast++;
//	}
//	return slow;
//}
//int main()
//{
//	int nums[] = { 0,0,1,1,1,1,2,3,3 };
//	int size = sizeof(nums) / sizeof(nums[0]);
//	int len = removeDuplicates(nums, size);
//	int i = 0;
//	for (i = 0; i < len; i++)
//		printf("%d ", nums[i]);
//	return 0;
//}


