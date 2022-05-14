#define _CRT_SECURE_NO_WARNINGS 1

//将数组A中的内容和数组B中的内容进行交换。（数组一样大）

#include <stdio.h>

void print(int* arr, int sz)
{
	printf("[");
	for (int i = 0; i < sz; i++)
	{
		if (i != sz - 1)
		{
			printf("%d, ", arr[i]);
		}
		else
		{
			printf("%d", arr[i]);
		}
	}
	printf("]\n");
}

void ArraySwap(int* arr1, int* arr2, int sz)
{
	for (int i = 0; i < sz; i++)
	{
		int temp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = temp;
	}
}

int main()
{
	int arr1[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int arr2[10] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	ArraySwap(arr1, arr2, sz);
	print(arr1, sz);
	print(arr2, sz);
	return 0;
}