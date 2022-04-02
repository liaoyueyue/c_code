#define _CRT_SECURE_NO_WARNINGS 1

//求10 个整数中最大值

#include"stdio.h"

int main()
{
	int num[10] = { 3,5,6,1,2,4,7,8,9,7 };
	int i = 0;
	int max = num[0];
	for (i = 1; i < 10; i++)
	{
		if (max < num[i])
		{
			max = num[i];
		}
	}
	printf("%d", max);
	return 0;
}
