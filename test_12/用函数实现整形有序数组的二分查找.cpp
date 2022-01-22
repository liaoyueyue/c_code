#define _CRT_SECURE_NO_WARNINGS 1
#include"stdio.h"
//int binary_search(int* a, int n, int s)
int binary_search(int a[], int n, int s)
{
	int left = 0;
	int right = s-1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (a[mid] < n)
		{
			left = mid + 1;
		}
		else if (a[mid] > n)
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;//找不到了
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int n = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	//如果找到了返还找到位置的下标,没有则返还-1
	//数组arr传参，实际传递的不是数组本身
	//仅仅传过去了数组首元素的地址
	int ret = binary_search(arr, n,sz);
	if (ret == -1)
	{
		printf("找不到\n");
	}
	else
	{
		printf("找到了，下标为%d", ret);
	}
	return 0;
}
