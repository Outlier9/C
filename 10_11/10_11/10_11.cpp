#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//二分查找

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 0;
	scanf("%d", &k);

	int sz;
	sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	int find = 0;
	

	while (left <= right)
	{
		//int mid = (left + right) / 2; //可能过大溢出
		int mid = left + (right - left) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else {
			printf("找到了下标为%d", mid);
			find = 1;
			break;
		}
	}
	if (find == 0) {
		printf("找不到\n");
	}


	return 0;
}
