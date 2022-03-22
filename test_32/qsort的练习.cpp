#define _CRT_SECURE_NO_WARNINGS 1

//qsort的练习

#include"stdio.h"
#include"stdlib.h"

int int_cmp(const void* e1, const void* e2)
{
	return(*(int*)e1 - *(int*)e2);
}

void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d", arr[i]);
	}
	printf("\n");
}

//使用qsort来进行整形的排序
int main()
{
	int arr[] = { 5,9,8,4,2,3,1,6,7,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	print(arr, sz);
	qsort(arr, sz, sizeof(arr[0]), int_cmp);
	print(arr, sz);
	return 0;
}

