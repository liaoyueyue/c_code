#define _CRT_SECURE_NO_WARNINGS 1

//一个数组中只有两个数字是出现一次，其他所有数字都出现了两次。
//编写一个函数找出这两个只出现一次的数字。

#include <stdio.h>

void find_single_dog(int arr[], int sz)
{
	//所有数字异或
	int ret = 0;
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		ret ^= arr[i];
	}
	//ret二进制中第几位为1
	int pos=0;
	for (i = 0; i < 32; i++)
	{
		if (((ret >> i) & 1) == 1)
		{
			pos = i;
			break;
		}
	}
	//分组,第pos位，为0一组，为1一组(异或在一起）
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
