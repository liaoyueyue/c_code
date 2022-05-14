#define _CRT_SECURE_NO_WARNINGS 1

//array_operation

//����һ���������飬��ɶ�����Ĳ���
//ʵ�ֺ���init() ��ʼ������Ϊȫ0
//ʵ��print()  ��ӡ�����ÿ��Ԫ��
//ʵ��reverse()  �����������Ԫ�ص����á�
//Ҫ���Լ�������Ϻ����Ĳ���������ֵ��

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

void init(int* arr, int sz)
{
	for (int i = 0; i < sz; i++)
	{
		arr[i] = 0;
	}
}

void reverse(int* arr, int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		int temp = arr[left];
		arr[left] = arr[right];
		arr[right] = temp;
		left++;
		right--;
	}
}

int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("ԭ��\n");
	print(arr, sz);
	printf("������\n");
	reverse(arr, sz);
	print(arr, sz);
	init(arr, sz);
	printf("��ʼ����\n");
	print(arr, sz);
	return 0;
}
