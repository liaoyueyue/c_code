#define _CRT_SECURE_NO_WARNINGS 1
//ģ��qsort�Ĺ���ʵ��һ��ͨ�õ�ð������

#include"stdio.h"

int cmp_int(const void* e1, const void* e2)
{
	return(*(int*)e1 - *(int*)e2);
}

void Swap(char* buf1, char* buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		int tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}

void BubbleSort(void* base, int num, int width, int (*cmp)(const void* e1,const void* e2))
{
	int i = 0;
	for (i = 0; i < num - 1; i++)
	{
		int j = 0;
		for (j = 0; j < num - 1 - i; j++)
		{
			if (cmp((char*)base+width*j, (char*)base+width*(j + 1))>0)
			{
				Swap((char*)base + width * j, (char*)base + width * (j + 1),width);
			}
		}
	}
}

int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	BubbleSort(arr, sz, sizeof(arr[0]), cmp_int);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}