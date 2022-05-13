#define _CRT_SECURE_NO_WARNINGS 1

//递归和非递归分别实现求n的阶乘（不考虑溢出的问题）

#include <stdio.h>

int FactorialRecursion(int n)//递归求阶乘的和
{
	if (n > 0)
	{
		return n * FactorialRecursion(n - 1);
	}
}

int Factorial(int n)//普通求阶乘的和
{
	int sum = 1;
	for (int i = 1; i <= n; i++)
	{
		sum *= i;
	}
	return sum;
}

int main()
{
	int num = 0;
	printf("input number:\n");
	scanf("%d", &num);
	int ret = FactorialRecursion(num);
	printf("%d!=%d", num, ret);
	return 0;
}