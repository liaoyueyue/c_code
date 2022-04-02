#define _CRT_SECURE_NO_WARNINGS 1
//编写程序数一下 1到 100 的所有整数中出现多少个数字9

#include"stdio.h"

int main()
{
	int i = 0;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9)	//判断个位数上的
		{
			printf("%d ", i);
			count++;
		}
		if (i / 10 == 9)	//判断十位数上的
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\n一共%d个", count);
	return 0;
}
