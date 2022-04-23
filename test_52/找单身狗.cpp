#define _CRT_SECURE_NO_WARNINGS 1

//һ��������ֻ�����������ǳ���һ�Σ������������ֶ����������Ρ�
//��дһ�������ҳ�������ֻ����һ�ε����֡�

#include <stdio.h>

void find_single_dog(int arr[], int sz)
{
	//�����������
	int ret = 0;
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		ret ^= arr[i];
	}
	//ret�������еڼ�λΪ1
	int pos=0;
	for (i = 0; i < 32; i++)
	{
		if (((ret >> i) & 1) == 1)
		{
			pos = i;
			break;
		}
	}
	//����,��posλ��Ϊ0һ�飬Ϊ1һ��(�����һ��
	int single1 = 0;
	int single2 = 0;
	for (i = 0; i < sz; i++)
	{
		if (((arr[i] >> pos) & 1) == 0)
		{
			single1 ^= arr[i];
		}
	}
	single2 = ret ^ single1;
	printf("%d %d", single1, single2);
}

int main()
{
	int arr[] = { 1,2,3,4,5,1,2,3,4,6 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	find_single_dog(arr, sz);
	return 0;
}
