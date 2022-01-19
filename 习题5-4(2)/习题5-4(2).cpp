//输入n个整数，求这n个数之中的偶数的平均值，并输出
#include"stdio.h"
int main()
{
	int i, n, x, sum = 0, s = 0;
	float avg = 0;
	printf("请输入数字的个数\n");
	scanf_s("%d", &n);
	printf("请输入%d个数\n", n);
	for (i = 1; i <= n; i++)
	{
		scanf_s("%d", &x);
		if (x % 2 == 0)
		{
			sum += x;
			s++;
		}
	}
	avg = sum / s;
	printf("在您输入的%d个数中，有%d个偶数，其中%d个偶数的平均值为%f\n", n, s, s, avg);
	return 0;
}