//输入n个数，求其中的最大值
#include"stdio.h"
int main()
{
	int i, n;
	float x, max;
	printf("请输入有多少个数\n");
	scanf_s("%d", &n);
	printf("请输入%d个数字\n", n);
	max = -1e30;
	for (i = 1; i <= n; i++)
	{
		scanf_s("%f", &x);
		if (x > max)
		{
			max = x;
		}
	}
	printf("这%d个数中最大值为%f\n", n, max);
	return 0;
}