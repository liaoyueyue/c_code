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
	return -1;//�Ҳ�����
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int n = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	//����ҵ��˷����ҵ�λ�õ��±�,û���򷵻�-1
	//����arr���Σ�ʵ�ʴ��ݵĲ������鱾��
	//��������ȥ��������Ԫ�صĵ�ַ
	int ret = binary_search(arr, n,sz);
	if (ret == -1)
	{
		printf("�Ҳ���\n");
	}
	else
	{
		printf("�ҵ��ˣ��±�Ϊ%d", ret);
	}
	return 0;
}
