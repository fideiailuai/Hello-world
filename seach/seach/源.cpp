#include<stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	printf("请输入一个0-10的值\n");
	scanf_s("%d", &k);
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			printf("找到了，下标是%d\n", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("不存在需要查找的元素");
	}
	return 0;
}
