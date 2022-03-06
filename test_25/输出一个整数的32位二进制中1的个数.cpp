#define _CRT_SECURE_NO_WARNINGS 1

//负数用补码表示

#include"stdio.h"

int NumberOf1(int n)
{
	int count = 0;
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		if (((n>>i) & 1) == 1)
		{
			count++;
		}
	}
	return count;
}

int NumberOf2(int n)
{
	int count = 0;
	while (n)
	{
		n = n & (n - 1);
		count++;
	}
	return count;
}

int main()
{
	int n = 10;
	int ret = NumberOf2(n);
	printf("%d", ret);
	return 0;
}