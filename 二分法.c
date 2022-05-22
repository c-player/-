#define _CRT_SECURE_NO_WARNINGS 1
//有序数组二分法查找
#include <stdio.h>

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,11 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0, right = sz - 1;
	int k;
	printf("输入要查找的数：");
	scanf("%d", &k);
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] > k) right = mid - 1;
		else if (arr[mid] < k) left = mid + 1;
		else
		{
			printf("找到了，下标是：%d\n", mid);
			break;
		}
	}
	if (left > right) printf("找不到\n");
	return 0;
}



