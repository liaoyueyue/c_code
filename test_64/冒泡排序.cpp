#define _CRT_SECURE_NO_WARNINGS 1

//bubble sort

#include <stdio.h>

void BubleSort(int* arr, int sz)
{
	for (int i = 0; i < sz - 1; i++)
	{
		int flag = 0;
		for (int j = 0; j < sz - i - 1; j++)
		{
			if (arr[j] > arr[j+1])
			{
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j + 1] = temp;
				flag = 1;
			}
		}
		if (flag == 0)
		{
			break;
		}
	}
}

int main()
{
	int arr[10] = { 10, 2, 3, 4, 5, 6, 7, 8, 9, 1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	BubleSort(arr, sz);
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}