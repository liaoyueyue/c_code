#define _CRT_SECURE_NO_WARNINGS 1

//�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳ˣ���������������⣩

#include <stdio.h>

int FactorialRecursion(int n)//�ݹ���׳˵ĺ�
{
	if (n > 0)
	{
		return n * FactorialRecursion(n - 1);
	}
}

int Factorial(int n)//��ͨ��׳˵ĺ�
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