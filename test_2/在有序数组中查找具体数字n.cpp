#define _CRT_SECURE_NO_WARNINGS 1
#include"stdio.h"
int main()	//二分法查找
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int n = 5;//需要查找的数字
	/*在arr这个数组中查找数字n*/
	int sz = sizeof(arr) / sizeof(arr[0]);//数组元素个数
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < n)
		{
			left = mid + 1;
		}
		else if (arr[mid] > n)
		{
			right = mid - 1;
		}
		else
		{
			printf("找到了下标为%d,数字为%d", mid,arr[mid]);
			break;
		}
	}
	if (left > right)
	{
		printf("找不到");
	}
	return 0;
}

//在一个无序数组中查找具体的某个数字n
#include"stdio.h"
int main_1()
{
	int i;
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }, n = 2;
	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (arr[i] == n)
		{
			printf("该数组存在数字%d\n", n);
			break;	//如果找到则跳出循环
		}
	}
	if (i == sizeof(arr) / sizeof(arr[0]))
		printf("该数组不存在数字%d\n", n);
	return 0;
}
