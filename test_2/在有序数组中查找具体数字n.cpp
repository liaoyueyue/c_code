#define _CRT_SECURE_NO_WARNINGS 1
#include"stdio.h"
int main()	//���ַ�����
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int n = 5;//��Ҫ���ҵ�����
	/*��arr��������в�������n*/
	int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ���
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
			printf("�ҵ����±�Ϊ%d,����Ϊ%d", mid,arr[mid]);
			break;
		}
	}
	if (left > right)
	{
		printf("�Ҳ���");
	}
	return 0;
}

//��һ�����������в��Ҿ����ĳ������n
#include"stdio.h"
int main_1()
{
	int i;
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }, n = 2;
	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (arr[i] == n)
		{
			printf("�������������%d\n", n);
			break;	//����ҵ�������ѭ��
		}
	}
	if (i == sizeof(arr) / sizeof(arr[0]))
		printf("�����鲻��������%d\n", n);
	return 0;
}
