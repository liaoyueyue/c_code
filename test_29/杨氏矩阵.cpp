//杨氏矩阵
//有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，
//请编写程序在这样的矩阵中查找某个数字是否存在。
//要求：时间复杂度小于O(N);

//时间复杂度
//O（1）< O（logn）< O（n）< O（n^2）
//我们知道，杨氏矩阵中最小的元素为左上角元素，最大的元素为右下角元素。
//先和矩阵右上角的元素进行比较，如果要查找的元素key较大，则向下移动和下面一行的元素进行比较；
//如果要查找的元素key较小，则向左移动，和左边一行的元素进行比较。最差的情况是从左上角一直比到右下角。

#define _CRT_SECURE_NO_WARNINGS 1

#include"stdio.h"

int find(int arr[3][3], int n, int* row, int *col)
{
	*row = 0;
	*col = 2;
	while (*row<3&&*col>=0)
	{
		if (arr[*row][*col] > n)
		{
			(*col)--;
		}
		else if (arr[*row][*col] < n)
		{
			(*row)++;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int main()
{
	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
	int input = 0;
	int row = 0;
	int col = 0;
	scanf("%d", &input);
	int ret = find(arr, input, &row, &col);//未找到输入整数返回0，反之返回1.
	if (ret == 0)
	{
		printf("not found");
	}
	else
	{
		printf("row=%d,col=%d\n", row, col);
	}
	return 0;
}


