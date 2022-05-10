#define _CRT_SECURE_NO_WARNINGS 1

//递归方式实现打印一个整数的每一位

#include <stdio.h>

void PrintNum(int n)
{
	if (n > 9)
	{
		PrintNum(n / 10);
	}
	printf("%d ", n % 10);
}

int main()
{
	int num = 0;
	printf("input nummer:\n");
	scanf("%d", &num);
	PrintNum(num);
	return 0;
}

