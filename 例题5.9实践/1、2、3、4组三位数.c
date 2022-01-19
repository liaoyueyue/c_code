//有1、2、3、4四个数字，能组成多少个互不相同且无重复数字的三位数？按每行10个输出。
#include"stdio.h"
int main()
{
	int i, j, k, n = 0;
	for(i=1;i<=4;i++)
		for(j=1;j<=4;i++)
			for(k=1;k<=4;k++)
				if (i != j && i != k && j != k)
				{
					printf("%d%d%d", i, j, k);
					n++;
					if (n % 10 == 0)
					{
						printf("\n");
					}
				}
	printf("\n");
	return 0;
}