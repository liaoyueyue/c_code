#include"stdio.h"
//矩阵1
void juzhen1()
{
	int i, j,a[5][6];
	for (i = 0; i <= 4; i++)
	{
		for (j = 0; j <= 5; j++)
			a[i][j] = (i + 1) * (j * 1);
	}
	for (i = 0; i <= 4; i++)
	{
		for (j = 0; j <= 5; j++)
			printf("%d", a[i][j]);
		printf("\n");
	}
//矩阵2
}void juzhen2()
{
	int i, j;
	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <= 5; j++)
			printf("%d", i * j);
		printf("\n");
	}
}
//一维数组中的平均值，大于平均值的个数
void qiupingjunzhi()
{
	int i, j, n = 0, t = 0;
	int a[30];
	float avg, sum = 0;
	for(i=1;i<=5;i++)
		for (j = 1; j <= 6; j++)
		{
			a[n] = i * j;
			n++;
		}
	for (i = 0; i < 30; i++)
		sum += a[i];
	avg = sum / 30.0;
	for (i = 0; i <= 30; i++)
	{
		if (a[i] > avg)
			if (a[i] % 2 == 1)
				t++;
	}
	printf("有%d个", t);
	return 0;
}