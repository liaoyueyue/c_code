//用筛选法求1000以内的全部素数，并统计素数个数。
#include"stdio.h"
#include"math.h"
int main()
{
	int i = 0, count = 0;
	for (i = 2; i <= 1000; i++)
	{
		int j = 0;
		int flag = 1;	//假定i为素数
		for (j = 2; j <i; j++)
		{
			if (i % j == 0)
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)
		{
			count++;
			printf("%-6d", i);
		}
	}
	printf("\n一共有%d个素数", count);
	return 0;
}