#define _CRT_SECURE_NO_WARNINGS 1

//负数用补码表示
//二进制求1的个数
#include"stdio.h"

int NumberOf1_1(int n)
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

int NumberOf1_2(unsigned int n)
{
	int count = 0;
	while (n)
	{
		if (n % 2 == 1)
		{
			count++;
		}
		n /= 2;
	}
	return count;
}

int NumberOf1_3(int n)
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
	int ret = NumberOf1_3(n);
	printf("%d", ret);
	return 0;
}