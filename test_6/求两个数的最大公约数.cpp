#define _CRT_SECURE_NO_WARNINGS 1
#include"stdio.h"
int main1()
{
	int m = 0;
	int n = 0;
	scanf("%d%d", &m, &n);
	int max = 0;
	//假定最大公约数就是两个数的较小数
	if (m > n)
		max = n;
	else
		max = m;
	while (1)
	{
		if (m % max == 0 && n % max == 0)
		{
			printf("最大公约数是%d", max);
			break;
		}
		max--;
	}
	return 0;
}

//辗转相除法
int main()
{
	int m = 0;
	int n = 0;
	int t = 0;
	scanf("%d%d", &m, &n);
	while(t = m % n)
	{
		m = n;
		n = t;
	}
	printf("最大公约数是%d", n);
	return 0;
}