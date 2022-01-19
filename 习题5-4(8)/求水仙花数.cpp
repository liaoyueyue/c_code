//输出所有的“水仙花数”。所谓“水仙花数”是指一个三位数的各个数字的立方和等于该数本身。
//例如，153是一个水仙花数，因为153=1*1*1+5*5*5+3*3*3。
#include"stdio.h"
int main()
{
	int i, j, k;
	for(i=1;i<=9;i++)
		for(j=1;j<=9;j++)
			for (k = 1; k <= 9; k++)
			{
				if (100 * i + 10 * j + k == i * i * i + j * j * j + k * k * k)
				{
					printf("%d%d%d\n", i, j, k);
				}
			}
	return 0;
}