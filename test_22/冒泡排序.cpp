#define _CRT_SECURE_NO_WARNINGS 1
#include"stdio.h"
void bubble_sort(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz-1-i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	//ð������
	//����Ԫ�ظ���
	int sz = sizeof(arr) / sizeof(arr[0]);

	bubble_sort(arr,sz);//���鴫�ε�ʱ�򣬴��ݵ���ʵ�������׵�ַ

	return 0;
}